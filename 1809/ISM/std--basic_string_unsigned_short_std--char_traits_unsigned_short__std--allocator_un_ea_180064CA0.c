/*
 * XREFs of std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_ @ 0x180064CA0
 * Callers:
 *     GetHolographicInputSession @ 0x180061970 (GetHolographicInputSession.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@SAXXZ @ 0x180027A4C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@SAXXZ.c)
 *     ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x180027A64 (-allocate@-$allocator@G@std@@QEAAPEAG_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

_QWORD *__fastcall std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7030d12a21dba11210293044e97fe9c7__unsigned_short_const_____ptr64_unsigned___int64_(
        _QWORD *Src,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rax
  size_t v13; // r8
  __int64 v14; // r14
  _QWORD *v15; // rsi
  char *v16; // r12
  size_t v17; // r15
  _QWORD *v18; // rbx
  const struct std::nothrow_t *v19; // rdx
  __int64 v20; // rcx
  _QWORD *result; // rax

  v5 = Src[2];
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( 0x7FFFFFFFFFFFFFFELL - v5 < a2 )
    std::wstring::_Xlen();
  v8 = Src[3];
  v9 = v5 + a2;
  v10 = (v5 + a2) | 7;
  if ( v10 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = v8 >> 1;
    if ( v8 <= 0x7FFFFFFFFFFFFFFELL - (v8 >> 1) )
    {
      v6 = v10;
      if ( v10 < v11 + v8 )
        v6 = v11 + v8;
    }
  }
  v12 = std::allocator<unsigned short>::allocate(v10, v6 + 1);
  v13 = 2 * v5;
  v14 = a5 + v5;
  Src[2] = v9;
  Src[3] = v6;
  v15 = v12;
  v16 = (char *)v12 + v13;
  v17 = 2 * a5;
  if ( v8 < 8 )
  {
    memcpy_0(v12, Src, v13);
    memcpy_0(v16, L"\\Temp\\HolographicInput.etl", v17);
    *((_WORD *)v15 + v14) = 0;
  }
  else
  {
    v18 = (_QWORD *)*Src;
    memcpy_0(v12, (const void *)*Src, v13);
    memcpy_0(v16, L"\\Temp\\HolographicInput.etl", v17);
    v19 = (const struct std::nothrow_t *)(2 * v8 + 2);
    *((_WORD *)v15 + v14) = 0;
    if ( (unsigned __int64)v19 >= 0x1000 )
    {
      v20 = *(v18 - 1);
      v19 = (const struct std::nothrow_t *)(2 * v8 + 41);
      if ( (unsigned __int64)v18 - v20 - 8 > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v20, v19);
        __debugbreak();
      }
      v18 = (_QWORD *)*(v18 - 1);
    }
    operator delete(v18, v19);
  }
  result = Src;
  *Src = v15;
  return result;
}
