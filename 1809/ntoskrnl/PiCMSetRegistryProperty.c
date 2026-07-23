/*
 * XREFs of PiCMSetRegistryProperty @ 0x14083A104
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14016A308 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PiCMConvertRegistryProperty @ 0x140595E34 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140596154 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14059630C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1406F7BEC (PiPnpRtlSetDeviceRegProperty.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     _CmSetInstallerClassRegProp @ 0x1408F96A8 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMSetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r15
  int v9; // ebx
  ACCESS_MASK v10; // ecx
  int v11; // ebx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-19h] BYREF
  char v14[4]; // [rsp+58h] [rbp-9h] BYREF
  int v15; // [rsp+5Ch] [rbp-5h]
  int v16; // [rsp+60h] [rbp-1h]
  PCWSTR SourceString; // [rsp+68h] [rbp+7h]
  int v18; // [rsp+74h] [rbp+13h]
  unsigned int v19; // [rsp+78h] [rbp+17h]
  unsigned int *v20; // [rsp+80h] [rbp+1Fh]
  unsigned int v21; // [rsp+88h] [rbp+27h]
  int v22; // [rsp+8Ch] [rbp+2Bh]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v9 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v14);
  if ( v9 >= 0 )
  {
    v10 = 64;
    if ( v18 != 13 )
      v10 = 2;
    if ( PiAuDoesClientHaveAccess(v10) )
    {
      if ( SourceString && !v15 && a3 && a4 >= 8 )
      {
        v11 = PiCMConvertRegistryProperty(v18, &a6);
        if ( v11 >= 0 )
        {
          if ( v16 == 1 )
          {
            v11 = PiPnpRtlSetDeviceRegProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    SourceString,
                    0LL,
                    (signed int)a6,
                    v19,
                    v20,
                    v21,
                    0);
            if ( v11 >= 0 && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0 )
              PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(&DestinationString.Length);
          }
          else if ( v16 == 2 )
          {
            v11 = CmSetInstallerClassRegProp(PiPnpRtlCtx, (_DWORD)SourceString, v19, (__int64)v20, v21);
          }
          else
          {
            v11 = -1073741811;
          }
          if ( v11 == -1073741790 )
            v11 = -1073741264;
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
    else
    {
      v11 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v11, v22, a3, a4, v6);
  }
  PiCMReleaseRegistryPropertyInputData((__int64)v14);
  return (unsigned int)v9;
}
