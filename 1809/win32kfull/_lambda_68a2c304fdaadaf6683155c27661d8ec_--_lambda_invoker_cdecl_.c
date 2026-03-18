/*
 * XREFs of _lambda_68a2c304fdaadaf6683155c27661d8ec_::_lambda_invoker_cdecl_ @ 0x1C000BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_68a2c304fdaadaf6683155c27661d8ec_::_lambda_invoker_cdecl_(_QWORD *a1, _OWORD *a2)
{
  int v5; // ecx
  const struct tagWND *v6; // rdi
  __int128 v7; // [rsp+20h] [rbp-18h]

  v7 = 0uLL;
  *a2 = 0uLL;
  if ( gpqForeground == *(_QWORD *)(a1[2] + 432LL) )
  {
    v5 = *(_DWORD *)(a1[5] + 236LL);
    if ( v5 != 2 && v5 != 16 )
    {
      v6 = *(const struct tagWND **)(a1[3] + 296LL);
      if ( IsWindowActivateable(v6) )
      {
        *(_QWORD *)&v7 = v6;
        DWORD2(v7) = 5;
        *a2 = v7;
      }
    }
  }
  return *(_QWORD *)a2 != 0LL;
}
