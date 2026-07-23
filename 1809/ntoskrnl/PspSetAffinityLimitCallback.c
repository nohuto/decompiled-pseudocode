/*
 * XREFs of PspSetAffinityLimitCallback @ 0x14088B410
 * Callers:
 *     <none>
 * Callees:
 *     PspCheckJobAccessState @ 0x14088ABC8 (PspCheckJobAccessState.c)
 */

__int64 __fastcall PspSetAffinityLimitCallback(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 772) & 0x4000000) == 0 || (*(_DWORD *)(a1 + 768) & 1) != 0 )
    return 0LL;
  else
    return PspCheckJobAccessState(a2, a1);
}
