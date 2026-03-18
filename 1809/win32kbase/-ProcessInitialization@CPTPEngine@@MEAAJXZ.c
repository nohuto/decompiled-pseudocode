/*
 * XREFs of ?ProcessInitialization@CPTPEngine@@MEAAJXZ @ 0x1C015D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z @ 0x1C015F298 (-TPAAPSetCurtainState@CPTPEngine@@AEAAXH@Z.c)
 */

__int64 __fastcall CPTPEngine::ProcessInitialization(CPTPEngine *this)
{
  *((_DWORD *)this + 825) |= 1u;
  *((_DWORD *)this + 751) = 1;
  CPTPEngine::TPAAPSetCurtainState(this, 0);
  return 0LL;
}
