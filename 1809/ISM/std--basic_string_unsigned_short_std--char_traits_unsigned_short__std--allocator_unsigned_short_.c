/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_for__lambda_05cef1f6fdf474c9f3ed207deba0f73b__unsigned_short_const_____ptr64_ @ 0x180027954
 * Callers:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180027824 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18004B650 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z @ 0x180060EF4 (-StartOrStop@TracingSessionHelper@@SAJAEBUTraceSessionConfig@@_N@Z.c)
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x180027A64 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
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
  _WORD *v11; // rax
  _WORD *v12; // rbp
  char *v13; // rcx
  const struct std::nothrow_t *v14; // rdx
  char *v15; // r8
  char *v16; // rcx
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
  v11 = (_WORD *)std::allocator<unsigned short>::allocate(v9, v4 + 1);
  *(_QWORD *)(a1 + 24) = v4;
  *(_QWORD *)(a1 + 16) = a2;
  v12 = v11;
  memcpy_0(v11, a4, 2 * a2);
  v12[a2] = 0;
  if ( v8 >= 8 )
  {
    v13 = *(char **)a1;
    v14 = (const struct std::nothrow_t *)(2 * v8 + 2);
    if ( (unsigned __int64)v14 >= 0x1000 )
    {
      v15 = (char *)*((_QWORD *)v13 - 1);
      v14 = (const struct std::nothrow_t *)(2 * v8 + 41);
      v16 = (char *)(v13 - v15);
      if ( (unsigned __int64)(v16 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v16, v14);
        __debugbreak();
      }
      v13 = v15;
    }
    operator delete(v13, v14);
  }
  result = a1;
  *(_QWORD *)a1 = v12;
  return result;
}
