/*
 * XREFs of PspSetProcessCacheIsolationCallback @ 0x14013AF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspSetProcessCacheIsolationCallback(__int64 a1, _BYTE *a2)
{
  if ( (*(_DWORD *)(a1 + 780) & 0x40000008) == 0 && (*(_DWORD *)(a1 + 776) & 1) == 0 )
  {
    if ( *a2 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 440), 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 440), 6u);
  }
  return 0LL;
}
