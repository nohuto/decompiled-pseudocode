/*
 * XREFs of PiCMSetObjectProperty @ 0x14074F450
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A308 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PiCMCapturePropertyInputData @ 0x1405989C0 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x140598C80 (PiCMReleasePropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMSetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v8; // esi
  int v9; // ebx
  int v10; // r13d
  const WCHAR *v11; // r14
  int v12; // eax
  int v13; // ecx
  int v14; // edi
  int v15; // ebx
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // ebx
  int v27; // ebx
  __int64 v28; // rax
  unsigned int v29; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _DWORD *v31; // [rsp+68h] [rbp-61h]
  char v32[4]; // [rsp+70h] [rbp-59h] BYREF
  int v33; // [rsp+74h] [rbp-55h]
  int v34; // [rsp+78h] [rbp-51h]
  PCWSTR SourceString; // [rsp+80h] [rbp-49h]
  __int64 v36; // [rsp+8Ch] [rbp-3Dh] BYREF
  __int64 v37; // [rsp+94h] [rbp-35h]
  int v38; // [rsp+9Ch] [rbp-2Dh]
  int v39; // [rsp+A0h] [rbp-29h]
  __int64 v40; // [rsp+A8h] [rbp-21h]
  unsigned int v41; // [rsp+B0h] [rbp-19h]
  int v42; // [rsp+B4h] [rbp-15h]

  v31 = a6;
  *a6 = 0;
  v8 = PiCMCapturePropertyInputData(a1, a2, a5, v32);
  if ( v8 >= 0 )
  {
    v9 = v34;
    v10 = v39;
    v11 = SourceString;
    *(_QWORD *)&DestinationString.Length = v40;
    v29 = v41;
    if ( v38 == 14 )
    {
      v22 = v36 - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( v36 == *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v22 = v37 - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v22 )
        goto LABEL_50;
    }
    if ( v38 == 3 )
    {
      v23 = v36 - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( v36 == *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v23 = v37 - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v23 )
        goto LABEL_50;
    }
    if ( v38 == 4 )
    {
      v24 = v36 - DEVPKEY_DriverPackage_SourceMediaPath;
      if ( v36 == DEVPKEY_DriverPackage_SourceMediaPath )
        v24 = v37 + 0x4524B8338B5D1E6CLL;
      if ( !v24 )
        goto LABEL_50;
    }
    if ( v38 != 2 )
      goto LABEL_6;
    v25 = v36 - DEVPKEY_WIA_DeviceType;
    if ( v36 == DEVPKEY_WIA_DeviceType )
      v25 = v37 - 0x2F09E22B0008C7BELL;
    if ( v25 )
LABEL_6:
      v12 = 0;
    else
LABEL_50:
      v12 = 1;
    if ( !PiAuDoesClientHaveAccess(v12 != 0 ? 64 : 2) )
    {
      v8 = -1073741790;
      goto LABEL_19;
    }
    if ( !v11 || v33 || !a3 || (v13 = 8, a4 < 8) )
    {
      v8 = -1073741811;
      goto LABEL_19;
    }
    v14 = 0;
    if ( v9 <= 6 )
    {
      if ( v9 == 6 )
      {
        v14 = 6;
        goto LABEL_16;
      }
      v15 = v9 - 1;
      if ( !v15 )
      {
        v14 = 1;
        goto LABEL_16;
      }
      v17 = v15 - 1;
      if ( !v17 )
      {
        v14 = 2;
        goto LABEL_16;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v14 = 4;
        goto LABEL_16;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v14 = 3;
        goto LABEL_16;
      }
      if ( v19 == 1 )
      {
        v14 = 5;
        goto LABEL_16;
      }
LABEL_31:
      if ( !v14 )
        v8 = -1073741811;
LABEL_16:
      if ( v8 >= 0 )
      {
        v8 = PiPnpRtlSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               v11,
               v14,
               0LL,
               0LL,
               (__int64)&v36,
               v10,
               *(const wchar_t **)&DestinationString.Length,
               v29,
               0);
        if ( v8 == -1073741790 )
        {
          if ( v38 != 38 )
            goto LABEL_19;
          v28 = v36 - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
          if ( v36 == *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
            v28 = v37 - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
          if ( v28 )
            goto LABEL_19;
          v8 = -1073741264;
        }
        if ( v8 >= 0 && v14 == 1 && RtlInitUnicodeStringEx(&DestinationString, v11) >= 0 )
          PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
      }
LABEL_19:
      v8 = PiCMReturnBasicResultData(v8, v42, a3, a4, v31);
      goto LABEL_20;
    }
    v20 = v9 - 65537;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v26 = v21 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 != 1 )
              goto LABEL_31;
            v13 = 11;
          }
          else
          {
            v13 = 10;
          }
        }
        else
        {
          v13 = 9;
        }
      }
    }
    else
    {
      v13 = 7;
    }
    v14 = PiDrvDbCtx != 0 ? v13 : 0;
    goto LABEL_31;
  }
LABEL_20:
  PiCMReleasePropertyInputData((__int64)v32);
  return (unsigned int)v8;
}
