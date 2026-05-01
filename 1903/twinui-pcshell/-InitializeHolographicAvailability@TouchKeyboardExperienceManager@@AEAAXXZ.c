/*
 * XREFs of ?InitializeHolographicAvailability@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18009E364
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1803129F0 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18009E3A4 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 *     ??$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@PEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x18020B914 (--$wnf_query_nothrow@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@wil@@YAJAEBU_WNF_.c)
 */

void __fastcall TouchKeyboardExperienceManager::InitializeHolographicAvailability(TouchKeyboardExperienceManager *this)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF
  int v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v2 = 0;
  if ( (int)wil::wnf_query_nothrow<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(this, &v2, &v3) >= 0 )
    TouchKeyboardExperienceManager::OnHolographicDisplayChanged(
      this,
      (const enum Windows::Internal::Shell::Holographic::UserDisplayContext *)&v3);
}
