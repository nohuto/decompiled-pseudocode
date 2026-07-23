/*
 * XREFs of PiCMQueryRemove @ 0x140872914
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlGetActiveConsoleId @ 0x140001C60 (RtlGetActiveConsoleId.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     McTemplateK0z @ 0x14029E87C (McTemplateK0z.c)
 *     McTemplateK0dz @ 0x1402A0DD4 (McTemplateK0dz.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCE40 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1405C2714 (_CmGetDeviceRegProp.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x140629D58 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     PnpGetCallerSessionId @ 0x140861804 (PnpGetCallerSessionId.c)
 *     PiAuCheckClientInteractive @ 0x140863CC8 (PiAuCheckClientInteractive.c)
 *     PiAuDoesClientHavePrivilege @ 0x140863F38 (PiAuDoesClientHavePrivilege.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1408771F4 (PnpQueueQueryAndRemoveEvent.c)
 */

__int64 __fastcall PiCMQueryRemove(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  const wchar_t *v9; // r13
  int v10; // r12d
  unsigned int v11; // r14d
  _WORD *v12; // r15
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r8
  int v16; // edi
  signed int DeviceRegProp; // ebx
  unsigned int v18; // eax
  unsigned int v19; // esi
  _WORD *PoolWithTag; // rax
  int v21; // edi
  int v22; // edi
  unsigned int v23; // r8d
  int v24; // eax
  unsigned int v26; // [rsp+38h] [rbp-69h]
  _BYTE v27[4]; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-45h] BYREF
  int v29; // [rsp+60h] [rbp-41h] BYREF
  ULONG SessionId; // [rsp+64h] [rbp-3Dh] BYREF
  int v31; // [rsp+68h] [rbp-39h] BYREF
  int v32; // [rsp+6Ch] [rbp-35h] BYREF
  int v33; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v34[4]; // [rsp+74h] [rbp-2Dh] BYREF
  PCWSTR v35[5]; // [rsp+78h] [rbp-29h] BYREF
  int v36; // [rsp+A0h] [rbp-1h] BYREF
  int v37; // [rsp+A4h] [rbp+3h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp+7h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v35, 0, sizeof(v35));
  v27[0] = 0;
  v9 = 0LL;
  v10 = 0;
  SessionId = 0;
  *a6 = 0;
  v11 = 0;
  v12 = 0LL;
  v28 = 0;
  v29 = 0;
  v14 = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v35);
  if ( v14 < 0 )
    goto LABEL_62;
  v9 = v35[2];
  v16 = HIDWORD(v35[3]);
  if ( (byte_14042BDBB & 4) != 0 )
    McTemplateK0dz(v13, &KMPnPEvt_CfgMgr_QueryRemove_Start, v15, SHIDWORD(v35[3]), v35[2]);
  if ( !v9 || LODWORD(v35[1]) != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_55;
  }
  if ( !a3 || a4 < 0x14 )
    goto LABEL_24;
  DeviceRegProp = CmValidateDeviceName(v13, v9);
  if ( DeviceRegProp < 0 )
  {
LABEL_55:
    if ( DeviceRegProp != -2147483608 )
      goto LABEL_59;
    v23 = v28;
    goto LABEL_57;
  }
  if ( CmIsRootDevice(v9) )
  {
    DeviceRegProp = -1073741773;
    goto LABEL_59;
  }
  v18 = a4 - 20;
  v19 = 0;
  if ( v18 >= 2 )
    v19 = v18;
  if ( v19 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x34706E50u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      DeviceRegProp = -1073741670;
      goto LABEL_59;
    }
    *PoolWithTag = 0;
  }
  v21 = v16 - 1;
  if ( !v21 )
  {
    if ( !PiAuDoesClientHaveAccess(0x20u) || !PiAuDoesClientHavePrivilege(0xAu) )
    {
      DeviceRegProp = -1073741790;
      goto LABEL_48;
    }
    if ( (HIDWORD(v35[0]) & 0xFFFFFFFE) == 0 )
    {
      v10 = BYTE4(v35[0]) & 1;
      goto LABEL_48;
    }
    goto LABEL_24;
  }
  v22 = v21 - 1;
  if ( !v22 )
  {
    v32 = 4;
    v33 = 0;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)v9,
                      0LL,
                      16,
                      (__int64)&v33,
                      (__int64)v34,
                      (__int64)&v32,
                      0);
    if ( DeviceRegProp < 0 )
      goto LABEL_48;
    v10 = 8;
    if ( (v34[0] & 8) != 0 )
    {
      if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0x19u) )
        goto LABEL_33;
    }
    else
    {
      DeviceRegProp = PnpGetCallerSessionId(&SessionId);
      if ( DeviceRegProp < 0 || SessionId != RtlGetActiveConsoleId() )
      {
        DeviceRegProp = PiAuCheckClientInteractive(v27);
        if ( DeviceRegProp < 0 || !v27[0] )
        {
          if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
            goto LABEL_33;
          DeviceRegProp = 0;
        }
      }
    }
    if ( !HIDWORD(v35[0]) )
      goto LABEL_48;
LABEL_24:
    DeviceRegProp = -1073741811;
    goto LABEL_59;
  }
  if ( v22 != 1 )
  {
    DeviceRegProp = -1073741811;
    goto LABEL_48;
  }
  if ( !PiAuDoesClientHaveAccess(4u) || !PiAuDoesClientHavePrivilege(0xAu) )
  {
LABEL_33:
    DeviceRegProp = -1073741790;
    goto LABEL_59;
  }
  if ( HIDWORD(v35[0]) )
    goto LABEL_24;
  v10 = 2;
  if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v9, 0LL, &v31, &v37, &v36, v26) < 0 )
  {
    DeviceRegProp = -1073741810;
    goto LABEL_59;
  }
  if ( (v31 & 0x2000) == 0 )
  {
    DeviceRegProp = -1073741808;
    goto LABEL_59;
  }
LABEL_48:
  v11 = v19;
  if ( DeviceRegProp < 0 )
    goto LABEL_55;
  DeviceRegProp = RtlInitUnicodeStringEx(&DestinationString, v9);
  if ( DeviceRegProp < 0 )
    goto LABEL_55;
  v28 = v19;
  DeviceRegProp = PnpQueueQueryAndRemoveEvent(
                    (unsigned int)&DestinationString,
                    (unsigned int)&v29,
                    (_DWORD)v12,
                    (unsigned int)&v28,
                    v10,
                    0);
  if ( DeviceRegProp != -2147483608 )
    goto LABEL_59;
  v23 = v28;
  v11 = v19;
  if ( v12 )
    v12[((unsigned __int64)v19 >> 1) - 1] = 0;
LABEL_57:
  if ( v23 <= v11 )
  {
    v24 = PiCMReturnBufferResultData(0x80000028, v28, v29, v12, v23, (int)v35[4], a3, a4, a6);
    goto LABEL_60;
  }
LABEL_59:
  v24 = PiCMReturnBufferResultData(DeviceRegProp, v28, v29, 0LL, 0, (int)v35[4], a3, a4, a6);
LABEL_60:
  v14 = v24;
  if ( v12 )
    ExFreePoolWithTag(v12, 0x34706E50u);
LABEL_62:
  if ( (byte_14042BDBB & 4) != 0 )
    McTemplateK0z(v13, &KMPnPEvt_CfgMgr_QueryRemove_Stop, v15, v9);
  PiCMReleaseObjectInputData((__int64)v35);
  return (unsigned int)v14;
}
