/*
 * XREFs of ?OnIdleStateFlagsChanged@CToastCenterExperienceManager@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801A6840
 * Callers:
 *     <none>
 * Callees:
 *     ?SetZBand@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A8B84 (-SetZBand@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnIdleStateFlagsChanged(__int64 a1, char a2)
{
  char v2; // dl
  bool v3; // zf

  v2 = (a2 & 2) != 0;
  if ( v2 != *(_BYTE *)(a1 + 392) )
  {
    v3 = *(_DWORD *)(a1 + 120) == 2;
    *(_BYTE *)(a1 + 392) = v2;
    if ( v3 )
      CToastCenterExperienceManager::SetZBand((CToastCenterExperienceManager *)(a1 - 24));
  }
  return 0LL;
}
