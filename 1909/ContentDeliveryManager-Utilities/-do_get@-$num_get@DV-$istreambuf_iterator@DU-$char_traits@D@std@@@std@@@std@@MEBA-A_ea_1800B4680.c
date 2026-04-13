/*
 * XREFs of ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x1800B4680
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034990 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004AD1C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     _Stoulx @ 0x1800AE5E0 (_Stoulx.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x1800AFBE0 (--$_Getloctxt@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B02E8 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getifld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1HAEBVlocale@2@@Z @ 0x1800B26C0 (-_Getifld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800B5464 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v11; // edi
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  void **v15; // r9
  __int64 v16; // rbx
  int v17; // eax
  unsigned int v18; // ebx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  int v21; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v22; // [rsp+38h] [rbp-99h]
  __int64 v23; // [rsp+40h] [rbp-91h] BYREF
  char *v24; // [rsp+48h] [rbp-89h] BYREF
  bool *v25; // [rsp+50h] [rbp-81h]
  __int64 v26; // [rsp+58h] [rbp-79h]
  void *v27[3]; // [rsp+60h] [rbp-71h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-59h]
  void *v29[3]; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-39h]
  char v31[32]; // [rsp+A0h] [rbp-31h] BYREF

  v26 = -2LL;
  v22 = a4;
  v25 = a7;
  v11 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = **(_QWORD **)(a5 + 64);
    v23 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::numpunct<char>>(&v23);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
    v28 = 15LL;
    LOWORD(v27[0]) = 0;
    v27[2] = (void *)1;
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v29);
    std::string::append((char *)v27, v29, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v30 >= 0x10 )
      operator delete(v29[0]);
    std::string::append((char *)v27, 1uLL, 0);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v29);
    std::string::append((char *)v27, v29, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    if ( v30 >= 0x10 )
      operator delete(v29[0]);
    v15 = v27;
    if ( v28 >= 0x10 )
      v15 = (void **)v27[0];
    v16 = v22;
    v11 = std::_Getloctxt<char,std::istreambuf_iterator<char>>(a3, v22, 2uLL, v15);
    if ( v28 >= 0x10 )
      operator delete(v27[0]);
  }
  else
  {
    v21 = 0;
    v23 = **(_QWORD **)(a5 + 64);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
    v17 = std::num_get<char,std::istreambuf_iterator<char>>::_Getifld(a1, v31, a3, a4, *(_DWORD *)(a5 + 24), &v23);
    v18 = Stoulx(v31, &v24, v17, &v21);
    if ( v23 )
    {
      v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v19 )
        (**v19)(v19, 1LL);
    }
    if ( v24 != v31 && !v21 && v18 <= 1 )
      v11 = v18;
    v16 = v22;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v16) )
    *a6 |= 1u;
  if ( v11 >= 0 )
    *v25 = v11 != 0;
  else
    *a6 |= 2u;
  *a2 = *(_OWORD *)a3;
  return a2;
}
