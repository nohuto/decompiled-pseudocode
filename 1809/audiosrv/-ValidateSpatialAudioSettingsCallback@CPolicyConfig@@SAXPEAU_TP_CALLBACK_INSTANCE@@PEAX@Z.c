/*
 * XREFs of ?ValidateSpatialAudioSettingsCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D65C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180016490 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D6220 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::ValidateSpatialAudioSettingsCallback(PTP_CALLBACK_INSTANCE Instance, PVOID Context)
{
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( CSpatialAudioTech::s_spAtmosCheck )
    AtmosCheck::PerformLicenseCheck(CSpatialAudioTech::s_spAtmosCheck, 0);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(0LL, 0LL);
  (*(void (__fastcall **)(PVOID))(*(_QWORD *)Context + 16LL))(Context);
}
