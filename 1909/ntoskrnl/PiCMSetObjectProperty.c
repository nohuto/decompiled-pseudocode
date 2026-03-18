/*
 * XREFs of PiCMSetObjectProperty @ 0x14077CCD4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BBB60 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171E88 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PiCMCapturePropertyInputData @ 0x1405BD190 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1405BD450 (PiCMReleasePropertyInputData.c)
 *     PiPnpRtlSetObjectProperty @ 0x140707FE4 (PiPnpRtlSetObjectProperty.c)
 *     PiCMReturnBasicResultData @ 0x140721E08 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x140721E80 (PiAuDoesClientHaveAccess.c)
 */

__int64 __fastcall PiCMSetObjectProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  int v10; // esi
  int v11; // ebx
  int v12; // r13d
  const WCHAR *v13; // r14
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // ebx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v22; // ebx
  int v23; // ebx
  char *v24; // rcx
  char *v25; // rcx
  PCWSTR v26; // rcx
  PCWSTR v27; // rax
  int v28; // ebx
  int v29; // ebx
  char *v30; // rax
  unsigned int v31; // [rsp+50h] [rbp-79h]
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-71h] BYREF
  _DWORD *v33; // [rsp+68h] [rbp-61h]
  PCWSTR v34[10]; // [rsp+70h] [rbp-59h] BYREF

  v33 = a6;
  memset(v34, 0, 0x48uLL);
  *a6 = 0;
  v10 = PiCMCapturePropertyInputData(a1, a2, a5, (char *)v34);
  if ( v10 >= 0 )
  {
    v11 = (int)v34[1];
    v12 = (int)v34[6];
    v13 = v34[2];
    *(PCWSTR *)&DestinationString.Length = v34[7];
    v31 = (unsigned int)v34[8];
    if ( HIDWORD(v34[5]) == 14 )
    {
      v24 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyName.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyName.fmtid.Data1 )
        v24 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyName.fmtid.Data4;
      if ( !v24 )
        goto LABEL_50;
    }
    if ( HIDWORD(v34[5]) == 3 )
    {
      v25 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1;
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data1 )
        v25 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_FriendlyNameAttributes.fmtid.Data4;
      if ( !v25 )
        goto LABEL_50;
    }
    if ( HIDWORD(v34[5]) == 4 )
    {
      v26 = (PCWSTR)(*(char **)((char *)&v34[3] + 4) - DEVPKEY_DriverPackage_SourceMediaPath);
      if ( *(PCWSTR *)((char *)&v34[3] + 4) == (PCWSTR)DEVPKEY_DriverPackage_SourceMediaPath )
        v26 = *(PCWSTR *)((char *)&v34[4] + 4) + 0x22925C19C5AE8F36LL;
      if ( !v26 )
        goto LABEL_50;
    }
    if ( HIDWORD(v34[5]) != 2 )
      goto LABEL_6;
    v27 = (PCWSTR)(*(char **)((char *)&v34[3] + 4) - DEVPKEY_WIA_DeviceType);
    if ( *(PCWSTR *)((char *)&v34[3] + 4) == (PCWSTR)DEVPKEY_WIA_DeviceType )
      v27 = *(PCWSTR *)((char *)&v34[4] + 4) - 0x1784F115800463DFLL;
    if ( v27 )
LABEL_6:
      v14 = 0;
    else
LABEL_50:
      v14 = 1;
    if ( !PiAuDoesClientHaveAccess(v14 != 0 ? 64 : 2) )
    {
      v10 = -1073741790;
      goto LABEL_23;
    }
    if ( !v13 || HIDWORD(v34[0]) || !a3 || (v15 = 8, a4 < 8) )
    {
      v10 = -1073741811;
      goto LABEL_23;
    }
    v16 = 0;
    if ( v11 <= 6 )
    {
      if ( v11 == 6 )
      {
        v16 = 6;
        goto LABEL_19;
      }
      v17 = v11 - 1;
      if ( !v17 )
      {
        v16 = 1;
        goto LABEL_19;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
        v16 = 2;
        goto LABEL_19;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v16 = 4;
        goto LABEL_19;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v16 = 3;
        goto LABEL_19;
      }
      if ( v20 == 1 )
      {
        v16 = 5;
        goto LABEL_19;
      }
LABEL_31:
      if ( !v16 )
        v10 = -1073741811;
LABEL_19:
      if ( v10 >= 0 )
      {
        v10 = PiPnpRtlSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                v13,
                v16,
                0LL,
                0LL,
                (__int64)&v34[3] + 4,
                v12,
                *(const wchar_t **)&DestinationString.Length,
                v31,
                0);
        if ( v10 == -1073741790 )
        {
          if ( HIDWORD(v34[5]) != 38 )
            goto LABEL_23;
          v30 = *(char **)((char *)&v34[3] + 4) - *(_QWORD *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1;
          if ( *(PCWSTR *)((char *)&v34[3] + 4) == *(PCWSTR *)&DEVPKEY_Device_BaseContainerId.fmtid.Data1 )
            v30 = *(char **)((char *)&v34[4] + 4) - *(_QWORD *)DEVPKEY_Device_BaseContainerId.fmtid.Data4;
          if ( v30 )
            goto LABEL_23;
          v10 = -1073741264;
        }
        if ( v10 >= 0 && v16 == 1 )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          if ( RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
            PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
        }
      }
LABEL_23:
      v10 = PiCMReturnBasicResultData(v10, SHIDWORD(v34[8]), a3, a4, v33);
      goto LABEL_24;
    }
    v22 = v11 - 65537;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v28 = v23 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
              goto LABEL_31;
            v15 = 11;
          }
          else
          {
            v15 = 10;
          }
        }
        else
        {
          v15 = 9;
        }
      }
    }
    else
    {
      v15 = 7;
    }
    v16 = PiDrvDbCtx != 0 ? v15 : 0;
    goto LABEL_31;
  }
LABEL_24:
  PiCMReleasePropertyInputData((__int64)v34);
  return (unsigned int)v10;
}
