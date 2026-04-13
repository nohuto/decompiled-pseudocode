/*
 * XREFs of ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800BDF70
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18003135C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800328FC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800338E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x18003496C (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x1800BB9D8 (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char *a7)
{
  char *v10; // rdi
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char v14; // bl
  __int64 v15; // rdx
  unsigned __int64 v16; // r11
  char *v17; // rcx
  unsigned __int64 i; // r8
  char *v19; // rcx
  __int16 *v20; // rax
  __int16 v21; // r9
  __int16 v22; // cx
  __int128 v25; // [rsp+68h] [rbp-71h] BYREF
  void *v26[5]; // [rsp+78h] [rbp-61h] BYREF
  void *v27[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-21h]
  __int16 v30[12]; // [rsp+C0h] [rbp-19h] BYREF

  v26[4] = (void *)-2LL;
  v10 = a7;
  v11 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v25 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v25);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, __int16 *))(*(_QWORD *)v12 + 88LL))(
    v12,
    "0123456789-",
    "",
    v30);
  v14 = 0;
  v15 = 0LL;
  v16 = *((_QWORD *)a7 + 2);
  if ( v16 )
  {
    v17 = *((_QWORD *)a7 + 3) < 8uLL ? a7 : *(char **)a7;
    if ( *(_WORD *)v17 == v30[10] )
    {
      v14 = 1;
      v15 = 1LL;
    }
  }
  for ( i = v15; i < v16; ++i )
  {
    if ( *((_QWORD *)a7 + 3) < 8uLL )
      v19 = a7;
    else
      v19 = *(char **)a7;
    v20 = v30;
    if ( v30[0] )
    {
      v21 = *(_WORD *)&v19[2 * i];
      v22 = v30[0];
      do
      {
        if ( v22 == v21 )
          break;
        v22 = *++v20;
      }
      while ( *v20 );
    }
    if ( (unsigned __int64)(v20 - v30) >= 0xA )
      break;
  }
  if ( *((_QWORD *)a7 + 3) >= 8uLL )
    v10 = *(char **)a7;
  v29 = 7LL;
  v28 = 0LL;
  LOWORD(v27[0]) = 0;
  std::wstring::assign(v27, &v10[2 * v15], i - v15);
  if ( !v28 )
    std::wstring::append((char *)v27, 1uLL, v30[0]);
  v26[3] = (void *)7;
  v26[2] = 0LL;
  LOWORD(v26[0]) = 0;
  std::wstring::assign(v26, v27, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v25 = *a3;
  std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
    a1,
    a2,
    &v25,
    a4,
    a5,
    a6,
    v14,
    (__int64)v26,
    v30[0]);
  if ( v29 >= 8 )
    operator delete(v27[0]);
  return a2;
}
