/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C01953B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C01972A4 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 814) |= 0x80000000;
  *((_DWORD *)this + 743) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}
