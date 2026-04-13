/*
 * XREFs of ?_Fput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBD_K333@Z @ 0x1800BA270
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GN@Z @ 0x1800C2AF0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2AF0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GO@Z @ 0x1800C2CB0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2CB0.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800346E8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x1800359B4 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180036CCC (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800B9FC0 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800C3F6C (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Fput(
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
  __int64 v25; // rbx
  unsigned __int16 v26; // bx
  size_t v27; // r15
  __int16 v28; // ax
  void **v29; // rcx
  __int64 v30; // r9
  size_t v31; // r14
  void **v32; // rbx
  char v33; // al
  unsigned __int16 v34; // r15
  void **v35; // rax
  unsigned __int64 v36; // r14
  __int64 v37; // rbx
  unsigned __int64 v38; // rbx
  int v39; // eax
  __int128 v40; // xmm0
  unsigned __int16 *v41; // r15
  __int64 v42; // r12
  unsigned __int16 *v43; // r15
  __int64 v44; // r12
  unsigned __int16 *v45; // r15
  __int64 v46; // r12
  void **v47; // rax
  unsigned __int64 v48; // r14
  unsigned __int16 *v49; // rdi
  _OWORD *v50; // rbx
  __int128 v52; // [rsp+48h] [rbp-79h] BYREF
  char Control[4]; // [rsp+58h] [rbp-69h] BYREF
  unsigned __int16 v54; // [rsp+5Ch] [rbp-65h]
  unsigned __int16 v55; // [rsp+5Eh] [rbp-63h]
  __int64 v56; // [rsp+60h] [rbp-61h]
  size_t v57; // [rsp+68h] [rbp-59h]
  _OWORD *v58; // [rsp+70h] [rbp-51h]
  __int64 v59; // [rsp+78h] [rbp-49h]
  void *v60[2]; // [rsp+80h] [rbp-41h] BYREF
  unsigned __int64 v61; // [rsp+90h] [rbp-31h]
  unsigned __int64 v62; // [rsp+98h] [rbp-29h]
  void *v63[3]; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int64 v64; // [rsp+B8h] [rbp-9h]

  v59 = -2LL;
  v10 = a4;
  v56 = a4;
  v58 = a2;
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
  strcpy(Control, ".");
  Control[0] = *localeconv()->decimal_point;
  v57 = strcspn(Str, Control);
  v15 = **(_QWORD **)(v10 + 64);
  *(_QWORD *)&v52 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  *(_QWORD *)&v52 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v52);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = v52;
  LOBYTE(v16) = 48;
  v54 = (*(__int64 (__fastcall **)(_QWORD, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v52 + 96LL))(
          v52,
          v16,
          v17);
  v62 = 7LL;
  v61 = 0LL;
  LOWORD(v60[0]) = 0;
  std::wstring::assign((__int64)v60, a10, 0);
  v20 = v60;
  if ( v62 >= 8 )
    v20 = (void **)v60[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 88LL))(v19, Str, &Str[a10], v20);
  v21 = **(_QWORD **)(v10 + 64);
  *(_QWORD *)&v52 = v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v23 = std::use_facet<std::numpunct<unsigned short>>((__int64 *)&v52);
  if ( v21 )
  {
    v24 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v22 = v24;
    if ( v24 )
      (**v24)(v24, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v23 + 40LL))(
    v23,
    v63,
    v22);
  v55 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 32LL))(v23);
  if ( v57 == a10 )
  {
    v25 = a7;
    std::wstring::insert(v60, v14, a7, v54);
  }
  else
  {
    v26 = v54;
    std::wstring::insert(v60, v14, a9, v54);
    v27 = v57;
    std::wstring::insert(v60, v57 + 1, a8, v26);
    v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 24LL))(v23);
    v29 = v60;
    if ( v62 >= 8 )
      v29 = (void **)v60[0];
    *((_WORD *)v29 + v27) = v28;
    v30 = v26;
    v25 = a7;
    std::wstring::insert(v60, v27, a7, v30);
    v14 = v27;
  }
  v31 = v14 + v25;
  v32 = v63;
  if ( v64 >= 0x10 )
    v32 = (void **)v63[0];
  v33 = *(_BYTE *)v32;
  if ( *(_BYTE *)v32 != 127 )
  {
    v34 = v55;
    do
    {
      if ( v33 <= 0 || v33 >= v31 - v12 )
        break;
      v31 -= v33;
      std::wstring::insert(v60, v31, 1LL, v34);
      v35 = (void **)((char *)v32 + 1);
      if ( *((char *)v32 + 1) <= 0 )
        v35 = v32;
      v32 = v35;
      v33 = *(_BYTE *)v35;
    }
    while ( v33 != 127 );
  }
  v36 = v61;
  v37 = *(_QWORD *)(v10 + 40);
  if ( v37 <= 0 || v37 <= v61 )
    v38 = 0LL;
  else
    v38 = v37 - v61;
  v39 = *(_DWORD *)(v10 + 24) & 0x1C0;
  v40 = *a3;
  v52 = *a3;
  if ( v39 == 64 )
  {
    v45 = (unsigned __int16 *)v60;
    if ( v62 >= 8 )
      v45 = (unsigned __int16 *)v60[0];
    v46 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, *v45++);
        --v46;
      }
      while ( v46 );
      goto LABEL_59;
    }
  }
  else if ( v39 == 256 )
  {
    v43 = (unsigned __int16 *)v60;
    if ( v62 >= 8 )
      v43 = (unsigned __int16 *)v60[0];
    v44 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, *v43++);
        --v44;
      }
      while ( v44 );
      v40 = v52;
      v10 = v56;
    }
    *a3 = v40;
    v52 = v40;
    if ( v38 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, a5);
        --v38;
      }
      while ( v38 );
      v40 = v52;
    }
    v38 = 0LL;
  }
  else
  {
    if ( v38 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, a5);
        --v38;
      }
      while ( v38 );
      v40 = v52;
    }
    *a3 = v40;
    v38 = 0LL;
    v52 = v40;
    v41 = (unsigned __int16 *)v60;
    if ( v62 >= 8 )
      v41 = (unsigned __int16 *)v60[0];
    v42 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, *v41++);
        --v42;
      }
      while ( v42 );
LABEL_59:
      v40 = v52;
      v10 = v56;
    }
  }
  *a3 = v40;
  v52 = v40;
  v47 = v60;
  if ( v62 >= 8 )
    v47 = (void **)v60[0];
  v48 = v36 - v12;
  v49 = (unsigned __int16 *)v47 + v12;
  if ( v48 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, *v49++);
      --v48;
    }
    while ( v48 );
    v40 = v52;
    v10 = v56;
  }
  *(_QWORD *)(v10 + 40) = 0LL;
  v52 = v40;
  if ( v38 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v52, a5);
      --v38;
    }
    while ( v38 );
    v40 = v52;
  }
  v50 = v58;
  *v58 = v40;
  if ( v64 >= 0x10 )
    operator delete(v63[0]);
  v64 = 15LL;
  v63[2] = 0LL;
  LOBYTE(v63[0]) = 0;
  if ( v62 >= 8 )
    operator delete(v60[0]);
  return v50;
}
