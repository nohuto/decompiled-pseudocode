/*
 * XREFs of KiRestoreThreadIptState @ 0x1402AB1D0
 * Callers:
 *     SwapContext @ 0x1401CAB40 (SwapContext.c)
 * Callees:
 *     KiInitIptState @ 0x1402AB01C (KiInitIptState.c)
 *     KiRestoreIptState @ 0x1402AB0E0 (KiRestoreIptState.c)
 */

unsigned __int64 __fastcall KiRestoreThreadIptState(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 592) & 0x100LL) != 0 )
    return KiRestoreIptState((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + (unsigned int)KeXStateLength));
  else
    return KiInitIptState();
}
