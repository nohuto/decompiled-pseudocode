/*
 * XREFs of ?IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform@AtmosCheck@@AEAA_NXZ @ 0x180019A34
 * Callers:
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x1800546E4 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall AtmosCheck::IsDolbyOEMLicenseCheckEnabledOnCurrentPlatform(AtmosCheck *this)
{
  return *((_DWORD *)this + 40) == 3 && !*((_BYTE *)this + 184);
}
