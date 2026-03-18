/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C012DF64
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C030D4B4 & 1) || (dword_1C030D4B4 & 1) != 0 && ((a1 ^ dword_1C030D4B4) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
