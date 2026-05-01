/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1800AF112
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1800E00F8 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax

  v4 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 112),
         *(unsigned __int16 **)(a2 + 120),
         a3);
  *(_DWORD *)(a2 + 136) = v4;
  if ( v4 >= 0 )
    return &loc_18007A55F;
  else
    return &loc_18007A553;
}
