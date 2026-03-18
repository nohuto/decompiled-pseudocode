/*
 * XREFs of PiCMSetRegistryProperty @ 0x140873AD4
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140171798 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406D3D1C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1406D3D70 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406D3EDC (PiCMCaptureRegistryPropertyInputData.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F9440 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiCMReturnBasicResultData @ 0x14071FF68 (PiCMReturnBasicResultData.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     _CmSetInstallerClassRegProp @ 0x1409360C8 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v10; // r15
  int v11; // ebx
  int v12; // ebx
  const WCHAR *v13; // rdi
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  PCWSTR v16[8]; // [rsp+58h] [rbp-9h] BYREF

  memset(v16, 0, 0x38uLL);
  v10 = a6;
  LODWORD(a6) = 0;
  *v10 = 0;
  v11 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, (char *)v16);
  if ( v11 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(HIDWORD(v16[3]) == 13 ? 64 : 2) )
    {
      v13 = v16[2];
      if ( v16[2] && !HIDWORD(v16[0]) && a3 && a4 >= 8 )
      {
        v12 = PiCMConvertRegistryProperty(SHIDWORD(v16[3]), &a6);
        if ( v12 >= 0 )
        {
          if ( LODWORD(v16[1]) == 1 )
          {
            v12 = PiPnpRtlSetDeviceRegProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    v13,
                    0LL,
                    (int)a6,
                    (int)v16[4],
                    (unsigned int *)v16[5],
                    (int)v16[6],
                    0);
            if ( v12 >= 0 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              if ( RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
                PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
            }
          }
          else if ( LODWORD(v16[1]) == 2 )
          {
            v12 = CmSetInstallerClassRegProp(PiPnpRtlCtx, (_DWORD)v13, v16[4], (__int64)v16[5], v16[6]);
          }
          else
          {
            v12 = -1073741811;
          }
          if ( v12 == -1073741790 )
            v12 = -1073741264;
        }
      }
      else
      {
        v12 = -1073741811;
      }
    }
    else
    {
      v12 = -1073741790;
    }
    v11 = PiCMReturnBasicResultData(v12, SHIDWORD(v16[6]), a3, a4, v10);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)v16);
  return (unsigned int)v11;
}
