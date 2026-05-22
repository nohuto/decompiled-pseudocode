/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_ @ 0x1801018A8
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180101B4C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

char **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_138c3d7c38c85abb84c7fc7bfe5747b7__char_(
        char **a1,
        size_t a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  size_t v8; // rcx
  void *v9; // rax
  const struct std::nothrow_t *v10; // rdx
  char *v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // rcx
  char *v14; // r8

  v2 = 0x7FFFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::wstring::_Xlen();
  v5 = (unsigned __int64)a1[3];
  v6 = a2 | 0xF;
  if ( (a2 | 0xF) <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v7 = v5 >> 1;
    if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
    {
      v2 = v6;
      if ( v6 < v7 + v5 )
        v2 = v7 + v5;
    }
  }
  if ( (unsigned __int64)(v2 + 1) < 0x1000 )
  {
    if ( v2 == -1 )
      v12 = 0LL;
    else
      v12 = operator new(v2 + 1);
  }
  else
  {
    v8 = v2 + 40;
    if ( v2 + 40 < (unsigned __int64)(v2 + 1) )
      v8 = -1LL;
    v9 = operator new(v8);
    if ( !v9 )
      goto LABEL_20;
    v12 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v12 - 1) = v9;
  }
  a1[2] = (char *)a2;
  a1[3] = (char *)v2;
  memset_0(v12, 0, a2);
  *((_BYTE *)v12 + a2) = 0;
  if ( v5 >= 0x10 )
  {
    v13 = *a1;
    v10 = (const struct std::nothrow_t *)(v5 + 1);
    if ( v5 + 1 < 0x1000 )
    {
LABEL_18:
      operator delete(v13, v10);
      goto LABEL_19;
    }
    v14 = (char *)*((_QWORD *)v13 - 1);
    v10 = (const struct std::nothrow_t *)(v5 + 40);
    v11 = (char *)(v13 - v14);
    if ( (unsigned __int64)(v11 - 8) <= 0x1F )
    {
      v13 = v14;
      goto LABEL_18;
    }
LABEL_20:
    _o__invalid_parameter_noinfo_noreturn(v11, v10);
    __debugbreak();
  }
LABEL_19:
  *a1 = (char *)v12;
  return a1;
}
