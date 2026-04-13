/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x180031F20
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x180033200 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800347C8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180035848 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180036CCC (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180036FFC (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x1800375E4 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _Stoulx @ 0x1800AE5E0 (_Stoulx.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
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
  _OWORD *v9; // r13
  int v10; // esi
  __int64 v11; // rbx
  __int64 v12; // r13
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  _OWORD *v20; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v21; // [rsp+38h] [rbp-99h] BYREF
  __int64 v22; // [rsp+40h] [rbp-91h]
  __int64 v23; // [rsp+48h] [rbp-89h]
  _BYTE *v24; // [rsp+50h] [rbp-81h] BYREF
  bool *v25; // [rsp+58h] [rbp-79h]
  __int64 v26; // [rsp+60h] [rbp-71h]
  void *v27[3]; // [rsp+68h] [rbp-69h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-51h]
  void *v29[3]; // [rsp+88h] [rbp-49h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp-31h]
  _BYTE v31[32]; // [rsp+A8h] [rbp-29h] BYREF

  v26 = -2LL;
  v7 = a4;
  v22 = a4;
  v9 = a2;
  v20 = a2;
  v23 = a1;
  v25 = a7;
  v10 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v11 = **(_QWORD **)(a5 + 64);
    v21 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = std::use_facet<std::numpunct<unsigned short>>(&v21);
    if ( v11 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v13 )
        (**v13)(v13, 1LL);
    }
    v28 = 7LL;
    LODWORD(v27[0]) = 0;
    v27[2] = (void *)1;
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 48LL))(v12, v29);
    std::wstring::append(v27, v29, 0LL, -1LL);
    if ( v30 >= 8 )
      operator delete(v29[0]);
    std::wstring::append(v27, 1LL, 0LL);
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 56LL))(v12, v29);
    std::wstring::append(v27, v29, 0LL, -1LL);
    if ( v30 >= 8 )
      operator delete(v29[0]);
    v14 = v27;
    if ( v28 >= 8 )
      v14 = (void **)v27[0];
    v15 = v22;
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>(a3, v22, 2LL, v14);
    if ( v28 >= 8 )
      operator delete(v27[0]);
    v9 = v20;
  }
  else
  {
    LODWORD(v21) = 0;
    v20 = **(_OWORD ***)(a5 + 64);
    (*(void (__fastcall **)(_OWORD *))(*(_QWORD *)v20 + 8LL))(v20);
    v16 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
            v23,
            (unsigned int)v31,
            (_DWORD)a3,
            v7,
            *(_DWORD *)(a5 + 24),
            (__int64)&v20);
    v17 = Stoulx(v31, &v24, v16, &v21);
    if ( v20 )
    {
      v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_OWORD *))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v18 )
        (**v18)(v18, 1LL);
    }
    if ( v24 != v31 && !(_DWORD)v21 && v17 <= 1 )
      v10 = v17;
    v15 = v22;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v15) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *v25 = v10 != 0;
  else
    *a6 |= 2u;
  *v9 = *a3;
  return v9;
}
