/*
 * XREFs of PspSetAffinityLimitCallback @ 0x1408C8100
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckJobAccessState @ 0x1408C78AC (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspSetAffinityLimitCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 780) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 776) & 1) != 0 )
    return 0LL;
  else
    return PspCheckJobAccessState(a2, a1);
}
