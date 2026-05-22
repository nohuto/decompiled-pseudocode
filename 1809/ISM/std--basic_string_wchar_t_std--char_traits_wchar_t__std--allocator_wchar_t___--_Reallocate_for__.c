/*
 * XREFs of std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x1800A3318
 * Callers:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z @ 0x1800A3268 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W@Z.c)
 *     ??4?$TimestampedProperty@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Holographic@Internal@Windows@@QEAAAEAU0123@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800A3478 (--4-$TimestampedProperty@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Holog.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

char **__fastcall std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
        char **a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rdx
  size_t v12; // rcx
  void *v13; // rax
  const struct std::nothrow_t *v14; // rdx
  char *v15; // rcx
  _QWORD *v16; // rdi
  char *v17; // rcx
  char *v18; // r8

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v8 = (unsigned __int64)a1[3];
  v9 = a2 | 7;
  if ( (a2 | 7) <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v4 = v9;
      if ( v9 < v10 + v8 )
        v4 = v10 + v8;
    }
  }
  v11 = 2 * (v4 + 1);
  if ( (unsigned __int64)(v4 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
      v16 = operator new(v11);
    else
      v16 = 0LL;
  }
  else
  {
    v12 = v11 + 39;
    if ( v11 + 39 < v11 )
      v12 = -1LL;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_22;
    v16 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
    *(v16 - 1) = v13;
  }
  a1[3] = (char *)v4;
  a1[2] = (char *)a2;
  memcpy_0(v16, a4, 2 * a2);
  *((_WORD *)v16 + a2) = 0;
  if ( v8 >= 8 )
  {
    v17 = *a1;
    v14 = (const struct std::nothrow_t *)(2 * v8 + 2);
    if ( (unsigned __int64)v14 < 0x1000 )
    {
LABEL_20:
      operator delete(v17, v14);
      goto LABEL_21;
    }
    v18 = (char *)*((_QWORD *)v17 - 1);
    v14 = (const struct std::nothrow_t *)(2 * v8 + 41);
    v15 = (char *)(v17 - v18);
    if ( (unsigned __int64)(v15 - 8) <= 0x1F )
    {
      v17 = v18;
      goto LABEL_20;
    }
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v15, v14);
    __debugbreak();
  }
LABEL_21:
  *a1 = (char *)v16;
  return a1;
}
