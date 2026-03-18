/*
 * XREFs of UIPISQMStatus @ 0x1C011B440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UIPISQMStatus()
{
  __int64 v0; // rcx

  FastGetProfileDword(0LL, 50LL, L"EnableMessageSQM");
  if ( gfWinMsgSQMIsOptedIn )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn(v0);
  return WinSqmSetDWORD(gSqmSession, 5715LL);
}
