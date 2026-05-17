/*
 * XREFs of LdrQueryImageFileExecutionOptions @ 0x1800799A0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     LdrQueryImageFileExecutionOptionsEx @ 0x1800799E0 (LdrQueryImageFileExecutionOptionsEx.c)
 */

__int64 __fastcall LdrQueryImageFileExecutionOptions(int a1, int a2, int a3, int a4, int a5, __int64 a6)
{
  if ( byte_180165430 )
    return 3221225524LL;
  else
    return LdrQueryImageFileExecutionOptionsEx(a1, a2, a3, a4, a5, a6);
}
