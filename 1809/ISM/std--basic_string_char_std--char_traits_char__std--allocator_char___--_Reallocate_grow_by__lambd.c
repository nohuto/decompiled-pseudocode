/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_ @ 0x180101364
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1801014C4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

void **__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_f3a66ab6a0570788f31503db83886f49__unsigned___int64_char_const_____ptr64_unsigned___int64_(
        void **Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Srca,
        size_t Size)
{
  char *v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  char *v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  char *v18; // r15
  void *v19; // rdi

  v6 = (char *)Src[2];
  v7 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - (__int64)v6 < a2 )
    std::wstring::_Xlen();
  v9 = (unsigned __int64)Src[3];
  v10 = &v6[a2];
  v11 = (unsigned __int64)&v6[a2] | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v7 = v11;
      if ( v11 < v12 + v9 )
        v7 = v12 + v9;
    }
  }
  if ( (unsigned __int64)(v7 + 1) < 0x1000 )
  {
    v17 = 0LL;
    if ( v7 != -1 )
      v17 = operator new(v7 + 1);
  }
  else
  {
    v13 = v7 + 40;
    if ( v7 + 40 < (unsigned __int64)(v7 + 1) )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_18;
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  Src[2] = v10;
  Src[3] = (void *)v7;
  v18 = (char *)v17 + Size;
  if ( v9 < 0x10 )
  {
    memcpy_0(v17, Srca, Size);
    memcpy_0(v18, Src, (size_t)(v6 + 1));
    goto LABEL_20;
  }
  v19 = *Src;
  memcpy_0(v17, Srca, Size);
  memcpy_0(v18, v19, (size_t)(v6 + 1));
  v15 = (const struct std::nothrow_t *)(v9 + 1);
  if ( v9 + 1 >= 0x1000 )
  {
    v16 = *((_QWORD *)v19 - 1);
    v15 = (const struct std::nothrow_t *)(v9 + 40);
    if ( (unsigned __int64)v19 - v16 - 8 <= 0x1F )
    {
      v19 = (void *)*((_QWORD *)v19 - 1);
      goto LABEL_17;
    }
LABEL_18:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_17:
  operator delete(v19, v15);
LABEL_20:
  *Src = v17;
  return Src;
}
