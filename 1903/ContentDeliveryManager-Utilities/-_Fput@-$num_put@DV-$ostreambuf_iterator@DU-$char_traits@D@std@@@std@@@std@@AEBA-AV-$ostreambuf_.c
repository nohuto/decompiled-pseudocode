/*
 * XREFs of ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x1800B04B4
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x1800B4990 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4990.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DO@Z @ 0x1800B4B50 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4B50.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180034490 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFD98 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B0158 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800B0298 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B53B8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CADA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
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
  __int64 v26; // rbx
  __int64 v27; // r9
  size_t v28; // r15
  __int64 v29; // r9
  char v30; // al
  __int64 v31; // r9
  void **v32; // rcx
  size_t v33; // r14
  void **v34; // rbx
  char i; // al
  char *v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rbx
  unsigned __int64 v39; // rbx
  int v40; // eax
  __int128 v41; // xmm0
  unsigned __int8 *v42; // r15
  __int64 v43; // r12
  unsigned __int8 *v44; // r15
  __int64 v45; // r12
  unsigned __int8 *v46; // r15
  __int64 v47; // r12
  void **v48; // rax
  __int64 v49; // r14
  unsigned __int8 *v50; // rdi
  _OWORD *v51; // rbx
  char v53; // [rsp+39h] [rbp-88h]
  char v54; // [rsp+3Ah] [rbp-87h]
  __int128 v55; // [rsp+48h] [rbp-79h] BYREF
  char Control[8]; // [rsp+58h] [rbp-69h] BYREF
  size_t v57; // [rsp+60h] [rbp-61h]
  _OWORD *v58; // [rsp+68h] [rbp-59h]
  __int64 v59; // [rsp+70h] [rbp-51h]
  void *v60[2]; // [rsp+78h] [rbp-49h] BYREF
  unsigned __int64 v61; // [rsp+88h] [rbp-39h]
  unsigned __int64 v62; // [rsp+90h] [rbp-31h]
  void *v63[3]; // [rsp+98h] [rbp-29h] BYREF
  unsigned __int64 v64; // [rsp+B0h] [rbp-11h]

  v59 = -2LL;
  v58 = a2;
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
  v57 = strcspn(Str, Control);
  v15 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v55 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  *(_QWORD *)&v55 = std::use_facet<std::ctype<char>>((__int64 *)&v55);
  if ( v15 )
  {
    v18 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    v17 = v18;
    if ( v18 )
      (**v18)(v18, 1LL);
  }
  v19 = v55;
  LOBYTE(v16) = 48;
  v53 = (*(__int64 (__fastcall **)(_QWORD, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v55 + 64LL))(
          v55,
          v16,
          v17);
  v62 = 15LL;
  v61 = 0LL;
  LOBYTE(v60[0]) = 0;
  std::string::assign(v60, Size, 0);
  v20 = v60;
  if ( v62 >= 0x10 )
    v20 = (void **)v60[0];
  (*(void (__fastcall **)(__int64, char *, char *, void **))(*(_QWORD *)v19 + 56LL))(v19, Str, &Str[Size], v20);
  v21 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v55 = v21;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  v23 = std::use_facet<std::numpunct<char>>((__int64 *)&v55);
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
  v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 32LL))(v23);
  if ( v57 == Size )
  {
    LOBYTE(v25) = v53;
    v26 = a7;
    std::string::insert(v60, v14, a7, v25);
  }
  else
  {
    LOBYTE(v25) = v53;
    std::string::insert(v60, v14, a9, v25);
    v28 = v57;
    LOBYTE(v29) = v53;
    std::string::insert(v60, v57 + 1, a8, v29);
    v30 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v23 + 24LL))(v23);
    v32 = v60;
    if ( v62 >= 0x10 )
      v32 = (void **)v60[0];
    *((_BYTE *)v32 + v28) = v30;
    LOBYTE(v31) = v53;
    v26 = a7;
    std::string::insert(v60, v28, a7, v31);
    v14 = v28;
  }
  v33 = v14 + v26;
  v34 = v63;
  if ( v64 >= 0x10 )
    v34 = (void **)v63[0];
  for ( i = *(_BYTE *)v34; i != 127; i = *v36 )
  {
    if ( i <= 0 || i >= v33 - v12 )
      break;
    v33 -= i;
    LOBYTE(v27) = v54;
    std::string::insert(v60, v33, 1LL, v27);
    v36 = (char *)v34 + 1;
    if ( *((char *)v34 + 1) <= 0 )
      v36 = (char *)v34;
    v34 = (void **)v36;
  }
  v37 = v61;
  v38 = *(_QWORD *)(a4 + 40);
  if ( v38 <= 0 || v38 <= v61 )
    v39 = 0LL;
  else
    v39 = v38 - v61;
  v40 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v41 = *a3;
  v55 = *a3;
  if ( v40 == 64 )
  {
    v46 = (unsigned __int8 *)v60;
    if ( v62 >= 0x10 )
      v46 = (unsigned __int8 *)v60[0];
    v47 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v46++);
        --v47;
      }
      while ( v47 );
      goto LABEL_59;
    }
  }
  else if ( v40 == 256 )
  {
    v44 = (unsigned __int8 *)v60;
    if ( v62 >= 0x10 )
      v44 = (unsigned __int8 *)v60[0];
    v45 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v44++);
        --v45;
      }
      while ( v45 );
      v41 = v55;
    }
    *a3 = v41;
    v55 = v41;
    if ( v39 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
        --v39;
      }
      while ( v39 );
      v41 = v55;
    }
    v39 = 0LL;
  }
  else
  {
    if ( v39 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
        --v39;
      }
      while ( v39 );
      v41 = v55;
    }
    *a3 = v41;
    v39 = 0LL;
    v55 = v41;
    v42 = (unsigned __int8 *)v60;
    if ( v62 >= 0x10 )
      v42 = (unsigned __int8 *)v60[0];
    v43 = v12;
    if ( v12 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v42++);
        --v43;
      }
      while ( v43 );
LABEL_59:
      v41 = v55;
    }
  }
  *a3 = v41;
  v55 = v41;
  v48 = v60;
  if ( v62 >= 0x10 )
    v48 = (void **)v60[0];
  v49 = v37 - v12;
  v50 = (unsigned __int8 *)v48 + v12;
  if ( v49 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v55, *v50++);
      --v49;
    }
    while ( v49 );
    v41 = v55;
  }
  *(_QWORD *)(a4 + 40) = 0LL;
  v55 = v41;
  if ( v39 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v55, a5);
      --v39;
    }
    while ( v39 );
    v41 = v55;
  }
  v51 = v58;
  *v58 = v41;
  if ( v64 >= 0x10 )
    operator delete(v63[0]);
  v64 = 15LL;
  v63[2] = 0LL;
  LOBYTE(v63[0]) = 0;
  if ( v62 >= 0x10 )
    operator delete(v60[0]);
  return v51;
}
