/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800AF508
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1800E00F8 (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

void *__fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax

  v4 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 96),
         *(unsigned __int16 **)(a2 + 104),
         a3);
  *(_DWORD *)(a2 + 96) = v4;
  if ( v4 >= 0 )
    return &loc_18008110E;
  else
    return &loc_180081105;
}
