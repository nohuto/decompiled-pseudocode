/*
 * XREFs of KiRestoreThreadIptState @ 0x1402948F0
 * Callers:
 *     SwapContext @ 0x1401C42C0 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x14029473C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x140294800 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
  else
    return KiInitIptState();
}
