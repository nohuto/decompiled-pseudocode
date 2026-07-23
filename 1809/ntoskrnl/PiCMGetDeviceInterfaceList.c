/*
 * XREFs of PiCMGetDeviceInterfaceList @ 0x1405A068C
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     McTemplateK0d @ 0x14028AE70 (McTemplateK0d.c)
 *     McTemplateK0jzt @ 0x14028AF80 (McTemplateK0jzt.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1405A0850 (PiCMCaptureInterfaceListInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceList(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  PVOID v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // r8
  unsigned int v14; // esi
  const WCHAR *v15; // r12
  NTSTATUS inited; // ecx
  NTSTATUS DeviceInterfaces; // eax
  int v18; // eax
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  PVOID P; // [rsp+58h] [rbp-51h] BYREF
  _DWORD *v22; // [rsp+60h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-41h] BYREF
  _BYTE v24[4]; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v25; // [rsp+7Ch] [rbp-2Dh]
  int v26[4]; // [rsp+80h] [rbp-29h] BYREF
  PCWSTR SourceString; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+9Ch] [rbp-Dh]

  v22 = a6;
  v8 = 0LL;
  v9 = 0;
  *a6 = 0;
  P = 0LL;
  v20 = 0;
  v12 = PiCMCaptureInterfaceListInputData(a1, a2, a5, v24);
  if ( v12 < 0 )
    goto LABEL_17;
  v14 = v25;
  v15 = SourceString;
  if ( (byte_140406847 & 2) != 0 )
    McTemplateK0jzt(HIWORD(v25) & 1, v10, v13, (__int64)v26, SourceString, BYTE2(v25) & 1);
  if ( a3 && a4 >= 0x14 )
  {
    inited = -1073741811;
    if ( (v14 & 0xFFFE0000) != 0 )
      goto LABEL_22;
    if ( (_WORD)v14 )
      v12 = -1073741811;
    inited = v12;
    if ( v12 < 0 )
      goto LABEL_22;
    inited = RtlInitUnicodeStringEx(&DestinationString, v15);
    if ( inited < 0 )
      goto LABEL_22;
    DeviceInterfaces = IopGetDeviceInterfaces(
                         v26,
                         (const UNICODE_STRING *)((unsigned __int64)&DestinationString & -(__int64)(DestinationString.Length != 0)),
                         (v14 & 0x10000) == 0,
                         1,
                         &P,
                         &v20);
    v9 = v20;
    inited = DeviceInterfaces;
    v8 = P;
    if ( a4 - 20 < v20 )
      inited = -1073741789;
  }
  else
  {
    inited = -1073741811;
  }
  if ( inited >= 0 )
  {
    v18 = PiCMReturnBufferResultData(inited, v9, 0, v8, v9, v28, a3, a4, v22);
    goto LABEL_15;
  }
LABEL_22:
  v18 = PiCMReturnBufferResultData(inited, v9, 0, 0LL, 0, v28, a3, a4, v22);
LABEL_15:
  v12 = v18;
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_17:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  if ( (byte_140406847 & 2) != 0 )
    McTemplateK0d(v11, &KMPnPEvt_CfgMgr_DeviceInterfaceList_Stop, v13, v12);
  return (unsigned int)v12;
}
