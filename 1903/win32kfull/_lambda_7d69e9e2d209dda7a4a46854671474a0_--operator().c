/*
 * XREFs of _lambda_7d69e9e2d209dda7a4a46854671474a0_::operator() @ 0x1C0100F9C
 * Callers:
 *     _lambda_7d69e9e2d209dda7a4a46854671474a0_::_lambda_invoker_cdecl_ @ 0x1C0100F80 (_lambda_7d69e9e2d209dda7a4a46854671474a0_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0101044 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall lambda_7d69e9e2d209dda7a4a46854671474a0_::operator()(__int64 a1, __int64 a2, _OWORD *a3)
{
  unsigned int v5; // edi
  __int64 TopWindow; // rax
  __int64 v7; // rbx
  __int64 *v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-18h]

  v10 = 0uLL;
  v5 = 6;
  *a3 = 0uLL;
  while ( 1 )
  {
    TopWindow = FindNextTopWindow::NextTopWindow(a2, a2, v5);
    v7 = TopWindow;
    if ( TopWindow )
      break;
    if ( (v5 & 2) == 0 )
      return *(_QWORD *)a3 != 0LL;
    v5 &= ~2u;
  }
  v8 = (__int64 *)(TopWindow + 200);
  if ( IsWindowActivateable(*(const struct tagWND **)(TopWindow + 200)) )
    v7 = *v8;
  if ( v7 )
  {
    *(_QWORD *)&v10 = v7;
    DWORD2(v10) = 3;
    *a3 = v10;
  }
  return *(_QWORD *)a3 != 0LL;
}
