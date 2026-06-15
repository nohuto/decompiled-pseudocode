/*
 * XREFs of ??4?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180124D14
 * Callers:
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800B3100 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 *     ?FreeAtmosCheck@CSpatialAudioTech@@KAXXZ @ 0x180124E48 (-FreeAtmosCheck@CSpatialAudioTech@@KAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ @ 0x180013C14 (-InternalRelease@-$ComPtr@VAtmosCheck@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180016220 (-InternalAddRef@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<AtmosCheck>::operator=(__int64 *a1, AtmosCheck *a2)
{
  AtmosCheck *v2; // rdi
  AtmosCheck *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = CSpatialAudioTech::s_spAtmosCheck;
  if ( (AtmosCheck *)*a1 != CSpatialAudioTech::s_spAtmosCheck )
  {
    v5 = CSpatialAudioTech::s_spAtmosCheck;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalAddRef((__int64 *)&v5);
    v5 = (AtmosCheck *)*a1;
    *a1 = (__int64)v2;
    Microsoft::WRL::ComPtr<AtmosCheck>::InternalRelease((__int64 *)&v5);
  }
  return a1;
}
