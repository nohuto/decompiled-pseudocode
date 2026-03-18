/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C006504C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C031D794 & 1) || (dword_1C031D794 & 1) != 0 && ((a1 ^ dword_1C031D794) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
