/*
 * XREFs of ?RuntimeClassInitialize@CSpatialAudioResourceManager@Sarm@@QEAAJPEAUIAudioPolicyManager@@@Z @ 0x180063090
 * Callers:
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x18005822C (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 * Callees:
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800665D8 (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall Sarm::CSpatialAudioResourceManager::RuntimeClassInitialize(
        Sarm::CSpatialAudioResourceManager *this,
        struct IAudioPolicyManager *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceFrequency(&Frequency);
  g_u64QPCFrequency = Frequency.QuadPart;
  *((_QWORD *)this + 42) = a2;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v5, v4, v6, v7) )
    *((_BYTE *)this + 145) = (unsigned int)IsSpatialAllowedOnPlatform() != 0;
  result = 0LL;
  *((_BYTE *)this + 144) = 1;
  return result;
}
