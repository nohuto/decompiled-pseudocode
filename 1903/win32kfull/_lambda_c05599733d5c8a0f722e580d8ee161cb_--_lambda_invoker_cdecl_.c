/*
 * XREFs of _lambda_c05599733d5c8a0f722e580d8ee161cb_::_lambda_invoker_cdecl_ @ 0x1C0100AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_c05599733d5c8a0f722e580d8ee161cb_::_lambda_invoker_cdecl_(__int64 a1, _OWORD *a2)
{
  __int128 v5; // [rsp+20h] [rbp-18h]

  v5 = 0uLL;
  *a2 = 0uLL;
  if ( (((*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0xC0) + 0x80) & 0xBF) == 0
    && IsWindowActivateable(*(const struct tagWND **)(a1 + 120)) )
  {
    *(_QWORD *)&v5 = *(_QWORD *)(a1 + 120);
    DWORD2(v5) = 2;
    *a2 = v5;
  }
  return *(_QWORD *)a2 != 0LL;
}
