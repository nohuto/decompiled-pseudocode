/*
 * XREFs of PiCMDeviceAction @ 0x140838BD8
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     PiCMReleaseObjectInputData @ 0x14059E6AC (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14059E6DC (PiCMCaptureObjectInputData.c)
 *     _CmGetDeviceStatus @ 0x14059F508 (_CmGetDeviceStatus.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 *     _CmIsRootDevice @ 0x1406EAA2C (_CmIsRootDevice.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14082B2B8 (PiAuDoesClientHavePrivilege.c)
 *     PiCMSetProblem @ 0x14083A018 (PiCMSetProblem.c)
 *     PiQueueDeviceRequest @ 0x14083DA48 (PiQueueDeviceRequest.c)
 */

__int64 __fastcall PiCMDeviceAction(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // r13d
  int v9; // esi
  int inited; // ebx
  const WCHAR *v11; // r15
  int v12; // r14d
  int v13; // r14d
  int v14; // r8d
  int v15; // eax
  int v16; // r8d
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // edx
  int v21; // r8d
  int v22; // edx
  unsigned int v24; // [rsp+38h] [rbp-39h]
  int DeviceStatus; // [rsp+48h] [rbp-29h] BYREF
  int v26; // [rsp+4Ch] [rbp-25h] BYREF
  int v27; // [rsp+50h] [rbp-21h] BYREF
  int v28; // [rsp+54h] [rbp-1Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-19h] BYREF
  char v30[4]; // [rsp+68h] [rbp-9h] BYREF
  int v31; // [rsp+6Ch] [rbp-5h]
  int v32; // [rsp+70h] [rbp-1h]
  PCWSTR SourceString; // [rsp+78h] [rbp+7h]
  int v34; // [rsp+84h] [rbp+13h]
  int v35; // [rsp+88h] [rbp+17h]

  v26 = 0;
  v28 = 0;
  *a6 = 0;
  v8 = 0;
  v27 = 0;
  v9 = 0;
  inited = PiCMCaptureObjectInputData(a1, a2, a5, v30);
  if ( inited >= 0 )
  {
    v11 = SourceString;
    if ( !SourceString || v32 != 1 || !a3 || a4 < 8 )
    {
      inited = -1073741811;
      goto LABEL_52;
    }
    v12 = v34;
    if ( v34 == 1 )
    {
      v9 = v31;
      if ( (unsigned int)(v31 - 1) > 5 )
        inited = -1073741811;
    }
    else
    {
      if ( v34 != 2 )
        goto LABEL_50;
      v8 = v31;
      if ( (unsigned int)(v31 - 1) > 1 )
        inited = -1073741811;
    }
    if ( inited < 0 )
      goto LABEL_52;
    inited = CmValidateDeviceName((unsigned int)(v34 - 1), SourceString);
    if ( inited < 0 )
      goto LABEL_52;
    v13 = v12 - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        if ( PiAuDoesClientHaveAccess(0x20u) && PiAuDoesClientHavePrivilege(0xAu) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited >= 0 )
          {
            v15 = PiQueueDeviceRequest((unsigned int)&DestinationString, 9, v14, v8 != 2, 0LL);
LABEL_49:
            inited = v15;
            goto LABEL_52;
          }
          goto LABEL_52;
        }
        goto LABEL_20;
      }
    }
    else if ( v9 > 0 )
    {
      if ( v9 <= 2 )
      {
        if ( !PiAuDoesClientHaveAccess(0x20u) || !PiAuDoesClientHavePrivilege(0xAu) )
          goto LABEL_20;
        if ( !CmIsRootDevice(v11) )
        {
          DeviceStatus = CmGetDeviceStatus(PiPnpRtlCtx, v11, 0, &v26, &v28, &v27, v24);
          if ( DeviceStatus >= 0 )
          {
            if ( (v26 & 8) != 0 )
              goto LABEL_52;
            if ( (v26 & 0x400) != 0 )
            {
              inited = PiCMSetProblem(v11);
              if ( inited < 0 )
                goto LABEL_52;
            }
          }
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited < 0 )
            goto LABEL_52;
          v22 = 16;
          if ( v9 != 1 )
            v22 = 12;
          v15 = PiQueueDeviceRequest((unsigned int)&DestinationString, v22, v21, 1, 0LL);
          goto LABEL_49;
        }
      }
      else if ( v9 <= 6 )
      {
        if ( PiAuDoesClientHaveAccess(2u) && PiAuDoesClientHavePrivilege(0xAu) )
        {
          inited = RtlInitUnicodeStringEx(&DestinationString, v11);
          if ( inited >= 0 )
          {
            v17 = v9 - 3;
            if ( v17 )
            {
              v18 = v17 - 1;
              if ( v18 )
              {
                v19 = v18 - 1;
                if ( v19 )
                {
                  if ( v19 != 1 )
                  {
                    inited = -1073741811;
                    DeviceStatus = -1073741811;
                    goto LABEL_52;
                  }
                  v20 = 24;
                }
                else
                {
                  v20 = 23;
                }
              }
              else
              {
                v20 = 22;
              }
            }
            else
            {
              v20 = 21;
            }
            inited = PiQueueDeviceRequest((unsigned int)&DestinationString, v20, v16, 1, (__int64)&DeviceStatus);
            if ( inited >= 0 )
              inited = DeviceStatus;
          }
LABEL_52:
          inited = PiCMReturnBasicResultData(inited, v35, a3, a4, a6);
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
  PiCMReleaseObjectInputData((__int64)v30);
  return (unsigned int)inited;
}
