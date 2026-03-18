/*
 * XREFs of PiCMDeviceAction @ 0x140871B20
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     _CmValidateDeviceName @ 0x1405C3710 (_CmValidateDeviceName.c)
 *     _CmGetDeviceStatus @ 0x140629D58 (_CmGetDeviceStatus.c)
 *     PiCMReleaseObjectInputData @ 0x1406CF518 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406CF74C (PiCMCaptureObjectInputData.c)
 *     _CmIsRootDevice @ 0x1406F3284 (_CmIsRootDevice.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x140863F38 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x1408730E8 (PiCMSetProblem.c)
 *     PiQueueDeviceRequest @ 0x14087708C (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeviceAction(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v9; // r13d
  int v10; // esi
  int inited; // ebx
  const WCHAR *v12; // r15
  int v13; // r14d
  int v14; // r14d
  int v15; // r8d
  int v16; // eax
  int v17; // r8d
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // edx
  int v22; // r8d
  int v23; // edx
  unsigned int v25; // [rsp+38h] [rbp-39h]
  int DeviceStatus; // [rsp+48h] [rbp-29h] BYREF
  int v27; // [rsp+4Ch] [rbp-25h] BYREF
  int v28; // [rsp+50h] [rbp-21h] BYREF
  int v29; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  PCWSTR v31[6]; // [rsp+68h] [rbp-9h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v31, 0, 0x28uLL);
  v27 = 0;
  v29 = 0;
  *a6 = 0;
  v9 = 0;
  v28 = 0;
  v10 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, (char *)v31);
  if ( inited >= 0 )
  {
    v12 = v31[2];
    if ( !v31[2] || LODWORD(v31[1]) != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_52;
    }
    v13 = HIDWORD(v31[3]);
    if ( HIDWORD(v31[3]) == 1 )
    {
      v10 = HIDWORD(v31[0]);
      if ( (unsigned int)(HIDWORD(v31[0]) - 1) > 5 )
        inited = -1073741811;
    }
    else
    {
      if ( HIDWORD(v31[3]) != 2 )
        goto LABEL_50;
      v9 = HIDWORD(v31[0]);
      if ( (unsigned int)(HIDWORD(v31[0]) - 1) > 1 )
        inited = -1073741811;
    }
    if ( inited < 0 )
      goto LABEL_52;
    inited = CmValidateDeviceName((unsigned int)(HIDWORD(v31[3]) - 1), v31[2]);
    if ( inited < 0 )
      goto LABEL_52;
    v14 = v13 - 1;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited >= 0 )
          {
            v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, 9, v15, v9 != 2, 0LL);
LABEL_49:
            inited = v16;
            goto LABEL_52;
          }
          goto LABEL_52;
        }
        goto LABEL_20;
      }
    }
    else if ( v10 > 0 )
    {
      if ( v10 <= 2 )
      {
        if ( !PiAuDoesClientHaveAccess(0x20u) || !PiAuDoesClientHavePrivilege(0xAu) )
          goto LABEL_20;
        if ( !CmIsRootDevice(v12) )
        {
          DeviceStatus = CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, v12, 0LL, &v27, &v29, &v28, v25);
          if ( DeviceStatus >= 0 )
          {
            if ( (v27 & 8) != 0 )
              goto LABEL_52;
            if ( (v27 & 0x400) != 0 )
            {
              inited = PiCMSetProblem(v12);
              if ( inited < 0 )
                goto LABEL_52;
            }
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited < 0 )
            goto LABEL_52;
          v23 = 16;
          if ( v10 != 1 )
            v23 = 12;
          v16 = PiQueueDeviceRequest((unsigned int)&DestinationString, v23, v22, 1, 0LL);
          goto LABEL_49;
        }
      }
      else if ( v10 <= 6 )
      {
        if ( PiAuDoesClientHaveAccess(2u) && PiAuDoesClientHavePrivilege(0xAu) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v12);
          if ( inited >= 0 )
          {
            v18 = v10 - 3;
            if ( v18 )
            {
              v19 = v18 - 1;
              if ( v19 )
              {
                v20 = v19 - 1;
                if ( v20 )
                {
                  if ( v20 != 1 )
                  {
                    inited = -1073741811;
                    DeviceStatus = -1073741811;
                    goto LABEL_52;
                  }
                  v21 = 24;
                }
                else
                {
                  v21 = 23;
                }
              }
              else
              {
                v21 = 22;
              }
            }
            else
            {
              v21 = 21;
            }
            inited = PiQueueDeviceRequest((unsigned int)&DestinationString, v21, v17, 1, (__int64)&DeviceStatus);
            if ( inited >= 0 )
              inited = DeviceStatus;
          }
LABEL_52:
          inited = PiCMReturnBasicResultData(inited, (int)v31[4], a3, a4, a6);
          goto LABEL_53;
        }
LABEL_20:
        inited = -1073741790;
        goto LABEL_52;
      }
    }
LABEL_50:
    inited = -1073741811;
    goto LABEL_52;
  }
LABEL_53:
  PiCMReleaseObjectInputData((__int64)v31);
  return (unsigned int)inited;
}
