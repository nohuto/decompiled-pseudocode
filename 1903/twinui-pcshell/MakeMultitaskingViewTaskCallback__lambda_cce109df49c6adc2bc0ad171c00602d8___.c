/*
 * XREFs of MakeMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___ @ 0x180347F94
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180348B0C (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___::CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___ @ 0x180348030 (CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___--CMultitaskingViewTask.c)
 */

__int64 __fastcall MakeMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8_(__int64 *a1, __int64 a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5
    && (v6 = CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___::CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___(
               v5,
               a2)) != 0 )
  {
    v7 = v6 + 32;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = v7;
  if ( v7 )
  {
    v10 = 0LL;
    *a1 = v7;
  }
  else
  {
    v2 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39,
      (__int64)"internal\\shell\\private\\inc\\MultitaskingViewTask.h",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  return v2;
}
