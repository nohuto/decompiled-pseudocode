/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180031050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180032320 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800338E0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180034800 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180035D90 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x1800360C0 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800366A4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _Stoulx @ 0x1800AA4D0 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v7; // r14d
  _OWORD *v9; // r12
  int v10; // esi
  _QWORD *v11; // rcx
  _OWORD *v12; // rbx
  __int64 v13; // r12
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  void **v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  void (__fastcall ***v19)(_QWORD, __int64); // rax
  _OWORD *v21; // [rsp+30h] [rbp-A1h] BYREF
  _OWORD *v22; // [rsp+38h] [rbp-99h] BYREF
  __int64 v23; // [rsp+40h] [rbp-91h]
  __int64 v24; // [rsp+48h] [rbp-89h]
  _BYTE *v25; // [rsp+50h] [rbp-81h] BYREF
  bool *v26; // [rsp+58h] [rbp-79h]
  __int64 v27; // [rsp+60h] [rbp-71h]
  void *v28[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v29; // [rsp+80h] [rbp-51h]
  void *v30[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v31; // [rsp+A0h] [rbp-31h]
  _BYTE v32[32]; // [rsp+A8h] [rbp-29h] BYREF

  v27 = -2LL;
  v7 = a4;
  v23 = a4;
  v9 = a2;
  v21 = a2;
  v24 = a1;
  v26 = a7;
  v10 = -1;
  v11 = *(_QWORD **)(a5 + 64);
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = (_OWORD *)*v11;
    v22 = v12;
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::numpunct<unsigned short>>(&v22);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
    v29 = 7LL;
    LODWORD(v28[0]) = 0;
    v28[2] = (void *)1;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 48LL))(v13, v30);
    std::wstring::append(v28, v30, 0LL, -1LL);
    if ( v31 >= 8 )
      operator delete(v30[0]);
    std::wstring::append(v28, 1LL, 0LL);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v13 + 56LL))(v13, v30);
    std::wstring::append(v28, v30, 0LL, -1LL);
    if ( v31 >= 8 )
      operator delete(v30[0]);
    v15 = v28;
    if ( v29 >= 8 )
      v15 = (void **)v28[0];
    v16 = v23;
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, v23, 2LL, v15);
    if ( v29 >= 8 )
      operator delete(v28[0]);
    v9 = v21;
  }
  else
  {
    LODWORD(v22) = 0;
    v21 = (_OWORD *)*v11;
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 8LL))(v21);
    v17 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            v24,
            (unsigned int)v32,
            (_DWORD)a3,
            v7,
            *(_DWORD *)(a5 + 24),
            (__int64)&v21);
    v18 = Stoulx(v32, &v25, v17, &v22);
    if ( v21 )
    {
      v19 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( v19 )
        (**v19)(v19, 1LL);
    }
    if ( v25 != v32 && !(_DWORD)v22 && v18 <= 1 )
      v10 = v18;
    v16 = v23;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v16) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *v26 = v10 != 0;
  else
    *a6 |= 2u;
  *v9 = *a3;
  return v9;
}
