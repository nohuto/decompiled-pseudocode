/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x140623438
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     McTemplateK0d @ 0x1402A1010 (McTemplateK0d.c)
 *     McTemplateK0jzt @ 0x1402A1120 (McTemplateK0jzt.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14062603C (PiCMCaptureInterfaceListInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  PVOID v10; // rsi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  int v16; // edi
  const WCHAR *v17; // r12
  NTSTATUS inited; // ecx
  int v19; // r9d
  NTSTATUS DeviceInterfaces; // eax
  int v21; // eax
  unsigned int v23; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v25; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  PCWSTR v27[5]; // [rsp+78h] [rbp-31h] BYREF

  v25 = a6;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v27, 0, sizeof(v27));
  *a6 = 0;
  v10 = 0LL;
  v11 = 0;
  P = 0LL;
  v23 = 0;
  v14 = PiCMCaptureInterfaceListInputData(a1, a2, a5, v27);
  if ( v14 < 0 )
    goto LABEL_17;
  v16 = HIDWORD(v27[0]);
  v17 = v27[3];
  if ( (byte_14042BDBB & 2) != 0 )
    McTemplateK0jzt(HIWORD(HIDWORD(v27[0])) & 1, v12, v15, (__int64)&v27[1], v27[3], BYTE6(v27[0]) & 1);
  if ( a3 && a4 >= 0x14 )
  {
    inited = -1073741811;
    if ( (v16 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v16 )
      v14 = -1073741811;
    inited = v14;
    if ( v14 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v17);
    if ( inited < 0 )
      goto LABEL_22;
    LOBYTE(v19) = 1;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         (unsigned int)&v27[1],
                         (unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0),
                         (v16 & 0x10000) == 0,
                         v19,
                         (__int64)&P,
                         (__int64)&v23);
    v11 = v23;
    inited = DeviceInterfaces;
    v10 = P;
    if ( a4 - 20 < v23 )
      inited = -1073741789;
  }
  else
  {
    inited = -1073741811;
  }
  if ( inited >= 0 )
  {
    v21 = PiCMReturnBufferResultData(inited, v11, 0, v10, v11, SHIDWORD(v27[4]), a3, a4, v25);
    goto LABEL_15;
  }
LABEL_22:
  v21 = PiCMReturnBufferResultData(inited, v11, 0, 0LL, 0, SHIDWORD(v27[4]), a3, a4, v25);
LABEL_15:
  v14 = v21;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_17:
  if ( v27[3] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v27[3]);
  if ( (byte_14042BDBB & 2) != 0 )
    McTemplateK0d(v13, &KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v15, v14);
  return (unsigned int)v14;
}
