/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0113E28
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C03203BC & 1) || (dword_1C03203BC & 1) != 0 && ((a1 ^ dword_1C03203BC) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
