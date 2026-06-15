/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x180018EF8
 * Callers:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180018290 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x18002596C (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180019080 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001AB44 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18003806F (memcpy_0.c)
 */

__int64 __fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        const void *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T v11; // rcx
  _WORD *v12; // rax
  _WORD *v13; // rbp
  char *v14; // rcx
  const struct std::nothrow_t *v15; // rdx
  char *v16; // r8
  char *v17; // rcx
  __int64 result; // rax

  v4 = 0x7FFFFFFFFFFFFFFELL;
  if ( a2 > 0x7FFFFFFFFFFFFFFELL )
    std::wstring::_Xlen();
  v8 = *(_QWORD *)(a1 + 24);
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
  v12 = (_WORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v11);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v13 = v12;
  memcpy_0(v12, a4, 2 * a2);
  v13[a2] = 0;
  if ( v8 >= 8 )
  {
    v14 = *(char **)a1;
    v15 = (const struct std::nothrow_t *)(2 * v8 + 2);
    if ( (unsigned __int64)v15 >= 0x1000 )
    {
      v16 = (char *)*((_QWORD *)v14 - 1);
      v15 = (const struct std::nothrow_t *)(2 * v8 + 41);
      v17 = (char *)(v14 - v16);
      if ( (unsigned __int64)(v17 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v17, v15);
        __debugbreak();
      }
      v14 = v16;
    }
    operator delete(v14, v15);
  }
  result = a1;
  *(_QWORD *)a1 = v13;
  return result;
}
