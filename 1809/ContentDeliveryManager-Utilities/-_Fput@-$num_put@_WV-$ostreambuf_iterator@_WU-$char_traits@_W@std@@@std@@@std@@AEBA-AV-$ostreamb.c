/*
 * XREFs of ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x1800B6674
 * Callers:
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WN@Z @ 0x1800BF330 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800BF330.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WO@Z @ 0x1800BF4F0 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_1800BF4F0.c)
 * Callees:
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180075004 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x180091CC0 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x180092168 (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800B5EBC (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z @ 0x1800BFFF8 (-insert@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0_W@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        unsigned __int64 a10)
{
  __int64 v10; // r13
  __int64 v12; // rdi
  const char *v13; // rdx
  size_t v14; // r12
  __int64 v15; // rbx
  __int64 v16; // rdx
  void (__fastcall ***v17)(_QWORD, __int64); // r8
  void (__fastcall ***v18)(_QWORD, __int64); // rax
  __int64 v19; // rbx
  void **v20; // r9
  __int64 v21; // rbx
  void (__fastcall ***v22)(_QWORD, __int64); // r8
  struct std::_Facet_base *v23; // r14
  void (__fastcall ***v24)(_QWORD, __int64); // rax
  size_t v25; // rbx
  unsigned __int16 v26; // r15
  __int16 v27; // ax
  void **v28; // rcx
  size_t v29; // r14
  void **v30; // rbx
  char v31; // al
  unsigned __int16 v32; // r15
  void **v33; // rax
  unsigned __int64 v34; // r14
  __int64 v35; // rbx
  unsigned __int64 v36; // rbx
  int v37; // eax
  __int128 v38; // xmm0
  unsigned __int16 *v39; // r15
  __int64 v40; // r12
  unsigned __int16 *v41; // r15
  __int64 v42; // r12
  unsigned __int16 *v43; // r15
  __int64 v44; // r12
  void **v45; // rax
  unsigned __int64 v46; // r14
  unsigned __int16 *v47; // rdi
  __int128 v48; // xmm0
  _OWORD *v49; // rbx
  __int16 Control; // [rsp+3Ch] [rbp-85h] BYREF
  unsigned __int16 v52; // [rsp+40h] [rbp-81h]
  __int128 v53; // [rsp+48h] [rbp-79h] BYREF
  unsigned __int16 v54; // [rsp+58h] [rbp-69h]
  struct std::_Facet_base *v55; // [rsp+60h] [rbp-61h] BYREF
  __int64 v56; // [rsp+68h] [rbp-59h]
  _OWORD *v57; // [rsp+70h] [rbp-51h]
  __int64 v58; // [rsp+78h] [rbp-49h]
  void *v59[2]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v60; // [rsp+90h] [rbp-31h]
  unsigned __int64 v61; // [rsp+98h] [rbp-29h]
  void *v62[3]; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int64 v63; // [rsp+B8h] [rbp-9h]

  v58 = -2LL;
  v10 = a4;
  v56 = a4;
  v57 = a2;
  if ( !a10 || (v12 = 1LL, ((*Str - 43) & 0xFD) != 0) )
    v12 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= a10 && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
      v12 += 2LL;
  }
  else
  {
    v13 = "eE";
  }
  v14 = strcspn(Str, v13);
  Control = 46;
  LOBYTE(Control) = *localeconv()->decimal_point;
  *(_QWORD *)&v53 = strcspn(Str, (const char *)&Control);
  v15 = **(_QWORD **)(v10 + 64);
  v55 = (struct std::_Facet_base *)v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v55 = std::use_facet<std::ctype<wchar_t>>((__int64 *)&v55);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = (__int64)v55;
  LOBYTE(v16) = 48;
  v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v55 + 96LL))(
          v55,
          v16,
          v17);
  v61 = 7LL;
  v60 = 0LL;
  LOWORD(v59[0]) = 0;
  std::wstring::assign((__int64)v59, a10, 0);
  v20 = v59;
  if ( v61 >= 8 )
    v20 = (void **)v59[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 88LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(v10 + 64);
  v55 = (struct std::_Facet_base *)v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v23 = std::use_facet<std::numpunct<wchar_t>>((__int64 *)&v55);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v23 + 40LL))(
    v23,
    v62,
    v22);
  v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 32LL))(v23);
  v25 = v53;
  v26 = v52;
  if ( (_QWORD)v53 != a10 )
  {
    std::wstring::insert(v59, v14, a9, v52);
    std::wstring::insert(v59, v25 + 1, a8, v26);
    v27 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 24LL))(v23);
    v28 = v59;
    if ( v61 >= 8 )
      v28 = (void **)v59[0];
    *((_WORD *)v28 + v25) = v27;
    v14 = v25;
  }
  v29 = v14 + a7;
  std::wstring::insert(v59, v14, a7, v26);
  v30 = v62;
  if ( v63 >= 0x10 )
    v30 = (void **)v62[0];
  v31 = *(_BYTE *)v30;
  if ( *(_BYTE *)v30 != 127 )
  {
    v32 = v54;
    do
    {
      if ( v31 <= 0 || v31 >= v29 - v12 )
        break;
      v29 -= v31;
      std::wstring::insert(v59, v29, 1LL, v32);
      v33 = (void **)((char *)v30 + 1);
      if ( *((char *)v30 + 1) <= 0 )
        v33 = v30;
      v30 = v33;
      v31 = *(_BYTE *)v33;
    }
    while ( v31 != 127 );
  }
  v34 = v60;
  v35 = *(_QWORD *)(v10 + 40);
  if ( v35 <= 0 || v35 <= v60 )
    v36 = 0LL;
  else
    v36 = v35 - v60;
  v37 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v38 = *a3;
  v53 = *a3;
  if ( v37 == 64 )
  {
    v43 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v43 = (unsigned __int16 *)v59[0];
    v44 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, *v43++);
        --v44;
      }
      while ( v44 );
      goto LABEL_58;
    }
  }
  else if ( v37 == 256 )
  {
    v41 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v41 = (unsigned __int16 *)v59[0];
    v42 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, *v41++);
        --v42;
      }
      while ( v42 );
      v38 = v53;
      v10 = v56;
    }
    *a3 = v38;
    v53 = v38;
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, a5);
        --v36;
      }
      while ( v36 );
      v38 = v53;
    }
    v36 = 0LL;
  }
  else
  {
    if ( v36 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, a5);
        --v36;
      }
      while ( v36 );
      v38 = v53;
    }
    *a3 = v38;
    v36 = 0LL;
    v53 = v38;
    v39 = (unsigned __int16 *)v59;
    if ( v61 >= 8 )
      v39 = (unsigned __int16 *)v59[0];
    v40 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, *v39++);
        --v40;
      }
      while ( v40 );
LABEL_58:
      v38 = v53;
      v10 = v56;
    }
  }
  *a3 = v38;
  v53 = v38;
  v45 = v59;
  if ( v61 >= 8 )
    v45 = (void **)v59[0];
  v46 = v34 - v12;
  v47 = (unsigned __int16 *)v45 + v12;
  if ( v46 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, *v47++);
      --v46;
    }
    while ( v46 );
    v38 = v53;
    v10 = v56;
  }
  *a3 = v38;
  *(_QWORD *)(v10 + 40) = 0LL;
  v48 = *a3;
  v53 = *a3;
  if ( v36 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v53, a5);
      --v36;
    }
    while ( v36 );
    v48 = v53;
  }
  v49 = v57;
  *v57 = v48;
  if ( v63 >= 0x10 )
    operator delete(v62[0]);
  v63 = 15LL;
  v62[2] = 0LL;
  LOBYTE(v62[0]) = 0;
  if ( v61 >= 8 )
    operator delete(v59[0]);
  return v49;
}
