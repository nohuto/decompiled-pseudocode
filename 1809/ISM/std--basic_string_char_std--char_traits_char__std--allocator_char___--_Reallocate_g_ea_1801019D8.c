/*
 * XREFs of std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_ @ 0x1801019D8
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@M@Z @ 0x180101B4C (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@M@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_grow_by__lambda_e1befb086ad3257e3f042a63030725f7__unsigned___int64_char_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        size_t a4)
{
  size_t v4; // r14
  __int64 v5; // rbx
  unsigned __int64 v8; // rbp
  size_t v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t v12; // rcx
  void *v13; // rax
  const struct std::nothrow_t *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  char *v17; // r15
  _QWORD *v18; // rbx

  v4 = Src[2];
  v5 = 0x7FFFFFFFFFFFFFFFLL;
  if ( 0x7FFFFFFFFFFFFFFFLL - v4 < a2 )
    std::wstring::_Xlen();
  v8 = Src[3];
  v9 = v4 + a2;
  v10 = (v4 + a2) | 0xF;
  if ( v10 <= 0x7FFFFFFFFFFFFFFFLL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFFLL - (v8 >> 1) )
    {
      v5 = v10;
      if ( v10 < v11 + v8 )
        v5 = v11 + v8;
    }
  }
  if ( (unsigned __int64)(v5 + 1) < 0x1000 )
  {
    if ( v5 == -1 )
      v16 = 0LL;
    else
      v16 = operator new(v5 + 1);
  }
  else
  {
    v12 = v5 + 40;
    if ( v5 + 40 < (unsigned __int64)(v5 + 1) )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_19;
    v16 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v16 - 1) = v13;
  }
  Src[2] = v9;
  v17 = (char *)v16 + v4;
  Src[3] = v5;
  if ( v8 < 0x10 )
  {
    memcpy_0(v16, Src, v4);
    memset_0((char *)v16 + v4, 0, a4);
    v17[a4] = 0;
    goto LABEL_21;
  }
  v18 = (_QWORD *)*Src;
  memcpy_0(v16, (const void *)*Src, v4);
  memset_0((char *)v16 + v4, 0, a4);
  v14 = (const struct std::nothrow_t *)(v8 + 1);
  v17[a4] = 0;
  if ( v8 + 1 >= 0x1000 )
  {
    v15 = *(v18 - 1);
    v14 = (const struct std::nothrow_t *)(v8 + 40);
    if ( (unsigned __int64)v18 - v15 - 8 <= 0x1F )
    {
      v18 = (_QWORD *)*(v18 - 1);
      goto LABEL_18;
    }
LABEL_19:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
    __debugbreak();
  }
LABEL_18:
  operator delete(v18, v14);
LABEL_21:
  *Src = v16;
  return Src;
}
