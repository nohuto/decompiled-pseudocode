/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_ @ 0x18010167C
 * Callers:
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@0@Z @ 0x1801014C4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x1801017F4 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_1801017F4.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_65e615be2a453ca0576c979606f46740__char_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size)
{
  size_t v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v9; // rbp
  size_t v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  size_t v13; // rcx
  void *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  char *v18; // r15
  _QWORD *v19; // rbx

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v5 < a2 )
    std::wstring::_Xlen();
  v9 = Src[3];
  v10 = v5 + a2;
  v11 = (v5 + a2) | 0xF;
  if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v12 = v9 >> 1;
    if ( v9 <= 0x7FFFFFFFFFFFFFFFLL - (v9 >> 1) )
    {
      v6 = v11;
      if ( v11 < v12 + v9 )
        v6 = v12 + v9;
    }
  }
  if ( (unsigned __int64)(v6 + 1) < 0x1000 )
  {
    if ( v6 == -1 )
      v17 = 0LL;
    else
      v17 = operator new(v6 + 1);
  }
  else
  {
    v13 = v6 + 40;
    if ( v6 + 40 < (unsigned __int64)(v6 + 1) )
      v13 = -1LL;
    v14 = operator new(v13);
    if ( !v14 )
      goto LABEL_19;
    v17 = (_QWORD *)(((unsigned __int64)v14 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v17 - 1) = v14;
  }
  Src[2] = v10;
  v18 = (char *)v17 + v5;
  Src[3] = v6;
  if ( v9 < 0x10 )
  {
    memcpy_0(v17, Src, v5);
    memcpy_0((char *)v17 + v5, a4, Size);
    v18[Size] = 0;
    goto LABEL_21;
  }
  v19 = (_QWORD *)*Src;
  memcpy_0(v17, (const void *)*Src, v5);
  memcpy_0((char *)v17 + v5, a4, Size);
  v15 = (const struct std::nothrow_t *)(v9 + 1);
  v18[Size] = 0;
  if ( v9 + 1 >= 0x1000 )
  {
    v16 = *(v19 - 1);
    v15 = (const struct std::nothrow_t *)(v9 + 40);
    if ( (unsigned __int64)v19 - v16 - 8 <= 0x1F )
    {
      v19 = (_QWORD *)*(v19 - 1);
      goto LABEL_18;
    }
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v16, v15);
    __debugbreak();
  }
LABEL_18:
  operator delete(v19, v15);
LABEL_21:
  *Src = v17;
  return Src;
}
