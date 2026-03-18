/*
 * XREFs of ?AnimationScenarioReference@CTelemetryInfo@DirectComposition@@QEAAJPEBU_GUID@@PEA_K@Z @ 0x1C0081024
 * Callers:
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C007EF20 (NtDCompositionTelemetryAnimationScenarioReference.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 */

__int64 __fastcall DirectComposition::CTelemetryInfo::AnimationScenarioReference(
        DirectComposition::CTelemetryInfo *this,
        const struct _GUID *a2,
        unsigned __int64 *a3)
{
  __int64 v6; // rax
  DirectComposition::CTelemetryInfo **v7; // rcx

  v6 = Win32AllocPoolWithQuota(52LL, 0x6F744344u);
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 32;
    *(_DWORD *)(v6 + 20) = 32;
    *(_DWORD *)(v6 + 24) = 299;
    *(struct _GUID *)(v6 + 28) = *a2;
    *(_QWORD *)(v6 + 44) = *a3;
    v7 = (DirectComposition::CTelemetryInfo **)*((_QWORD *)this + 7);
    if ( *v7 != (DirectComposition::CTelemetryInfo *)((char *)this + 48) )
      __fastfail(3u);
    *(_QWORD *)v6 = (char *)this + 48;
    *(_QWORD *)(v6 + 8) = v7;
    *v7 = (DirectComposition::CTelemetryInfo *)v6;
    *((_QWORD *)this + 7) = v6;
  }
  return v6 == 0 ? 0xC0000017 : 0;
}
