/*
 * XREFs of ?ReportSpatialLicenseChangedCallback@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D3B80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z @ 0x1800D6220 (-UpdateRenderingEndpointsSpatialSettings@CPolicyConfig@@SAXPEAU_TP_CALLBACK_INSTANCE@@PEAX@Z.c)
 *     ?RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z @ 0x18013B55C (-RefreshLicenseStatus@AtmosCheck@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CPolicyConfig::ReportSpatialLicenseChangedCallback(
        PTP_CALLBACK_INSTANCE Instance,
        CPolicyConfig::ReportSpatialChangeContext *Context)
{
  const unsigned __int16 *v3; // rdi
  __int64 v4; // rsi

  v3 = (const unsigned __int16 *)*((_QWORD *)Context + 1);
  v4 = *(_QWORD *)Context;
  EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
  if ( CSpatialAudioTech::s_spAtmosCheck )
    AtmosCheck::RefreshLicenseStatus(CSpatialAudioTech::s_spAtmosCheck, v3);
  LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
  CPolicyConfig::UpdateRenderingEndpointsSpatialSettings(0LL, 0LL);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  CPolicyConfig::ReportSpatialChangeContext::`scalar deleting destructor'(Context);
}
