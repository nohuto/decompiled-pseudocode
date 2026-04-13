/*
 * XREFs of ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800AC544
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x1800B09F0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B09F0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DO@Z @ 0x1800B0BB0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B0BB0.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800339E8 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800ABE1C (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800AC1DC (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800AC31C (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B1418 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800C6EA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        char a5,
        char *Str,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        size_t Size)
{
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
  __int64 v25; // r9
  size_t v26; // rbx
  __int64 v27; // r9
  char v28; // al
  void **v29; // rcx
  size_t v30; // r14
  __int64 v31; // r9
  void **v32; // rbx
  char i; // al
  char *v34; // rax
  unsigned __int64 v35; // r14
  __int64 v36; // rbx
  unsigned __int64 v37; // rbx
  int v38; // eax
  __int128 v39; // xmm0
  unsigned __int8 *v40; // r15
  __int64 v41; // r12
  unsigned __int8 *v42; // r15
  __int64 v43; // r12
  unsigned __int8 *v44; // r15
  __int64 v45; // r12
  void **v46; // rax
  __int64 v47; // r14
  unsigned __int8 *v48; // rdi
  __int128 v49; // xmm0
  _OWORD *v50; // rbx
  char v52; // [rsp+39h] [rbp-78h]
  char v53; // [rsp+3Ah] [rbp-77h]
  char Control[12]; // [rsp+3Ch] [rbp-75h] BYREF
  __int128 v55; // [rsp+48h] [rbp-69h] BYREF
  struct std::_Facet_base *v56; // [rsp+58h] [rbp-59h] BYREF
  _OWORD *v57; // [rsp+60h] [rbp-51h]
  __int64 v58; // [rsp+68h] [rbp-49h]
  void *v59[2]; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v60; // [rsp+80h] [rbp-31h]
  unsigned __int64 v61; // [rsp+88h] [rbp-29h]
  void *v62[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-9h]

  v58 = -2LL;
  v57 = a2;
  v12 = Size && ((*Str - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x3000 )
  {
    v13 = "pP";
    if ( v12 + 2 <= Size && Str[v12] == 48 && ((Str[v12 + 1] - 88) & 0xDF) == 0 )
      v12 += 2LL;
  }
  else
  {
    v13 = "eE";
  }
  v14 = strcspn(Str, v13);
  strcpy(Control, ".");
  Control[0] = *localeconv()->decimal_point;
  *(_QWORD *)&v55 = strcspn(Str, Control);
  v15 = **(_QWORD **)(a4 + 64);
  v56 = (struct std::_Facet_base *)v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v56 = std::use_facet<std::ctype<char>>((__int64 *)&v56);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = (__int64)v56;
  LOBYTE(v16) = 48;
  v52 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v56 + 64LL))(
          v56,
          v16,
          v17);
  v61 = 15LL;
  v60 = 0LL;
  LOBYTE(v59[0]) = 0;
  std::string::assign(v59, Size, 0);
  v20 = v59;
  if ( v61 >= 0x10 )
    v20 = (void **)v59[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 56LL))(v19, Str, &Str[Size], v20);
  v21 = **(_QWORD **)(a4 + 64);
  v56 = (struct std::_Facet_base *)v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v23 = std::use_facet<std::numpunct<char>>((__int64 *)&v56);
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
  v53 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 32LL))(v23);
  v26 = v55;
  if ( (_QWORD)v55 != Size )
  {
    LOBYTE(v25) = v52;
    std::string::insert(v59, v14, a9, v25);
    LOBYTE(v27) = v52;
    std::string::insert(v59, v26 + 1, a8, v27);
    v28 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 24LL))(v23);
    v29 = v59;
    if ( v61 >= 0x10 )
      v29 = (void **)v59[0];
    *((_BYTE *)v29 + v26) = v28;
    v14 = v26;
  }
  v30 = v14 + a7;
  LOBYTE(v25) = v52;
  std::string::insert(v59, v14, a7, v25);
  v32 = v62;
  if ( v63 >= 0x10 )
    v32 = (void **)v62[0];
  for ( i = *(_BYTE *)v32; i != 127; i = *v34 )
  {
    if ( i <= 0 || i >= v30 - v12 )
      break;
    v30 -= i;
    LOBYTE(v31) = v53;
    std::string::insert(v59, v30, 1LL, v31);
    v34 = (char *)v32 + 1;
    if ( *((char *)v32 + 1) <= 0 )
      v34 = (char *)v32;
    v32 = (void **)v34;
  }
  v35 = v60;
  v36 = *(_QWORD *)(a4 + 40);
  if ( v36 <= 0 || v36 <= v60 )
    v37 = 0LL;
  else
    v37 = v36 - v60;
  v38 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v39 = *a3;
  v55 = *a3;
  if ( v38 == 64 )
  {
    v44 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v44 = (unsigned __int8 *)v59[0];
    v45 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v44++);
        --v45;
      }
      while ( v45 );
      goto LABEL_58;
    }
  }
  else if ( v38 == 256 )
  {
    v42 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v42 = (unsigned __int8 *)v59[0];
    v43 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v42++);
        --v43;
      }
      while ( v43 );
      v39 = v55;
    }
    *a3 = v39;
    v55 = v39;
    if ( v37 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
        --v37;
      }
      while ( v37 );
      v39 = v55;
    }
    v37 = 0LL;
  }
  else
  {
    if ( v37 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
        --v37;
      }
      while ( v37 );
      v39 = v55;
    }
    *a3 = v39;
    v37 = 0LL;
    v55 = v39;
    v40 = (unsigned __int8 *)v59;
    if ( v61 >= 0x10 )
      v40 = (unsigned __int8 *)v59[0];
    v41 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v40++);
        --v41;
      }
      while ( v41 );
LABEL_58:
      v39 = v55;
    }
  }
  *a3 = v39;
  v55 = v39;
  v46 = v59;
  if ( v61 >= 0x10 )
    v46 = (void **)v59[0];
  v47 = v35 - v12;
  v48 = (unsigned __int8 *)v46 + v12;
  if ( v47 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v48++);
      --v47;
    }
    while ( v47 );
    v39 = v55;
  }
  *a3 = v39;
  *(_QWORD *)(a4 + 40) = 0LL;
  v49 = *a3;
  v55 = *a3;
  if ( v37 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
      --v37;
    }
    while ( v37 );
    v49 = v55;
  }
  v50 = v57;
  *v57 = v49;
  if ( v63 >= 0x10 )
    operator delete(v62[0]);
  v63 = 15LL;
  v62[2] = 0LL;
  LOBYTE(v62[0]) = 0;
  if ( v61 >= 0x10 )
    operator delete(v59[0]);
  return v50;
}
