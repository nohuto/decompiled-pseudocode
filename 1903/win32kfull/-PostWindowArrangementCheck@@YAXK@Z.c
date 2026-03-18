/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C0139E28
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C03223BC & 1) || (dword_1C03223BC & 1) != 0 && ((a1 ^ dword_1C03223BC) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
