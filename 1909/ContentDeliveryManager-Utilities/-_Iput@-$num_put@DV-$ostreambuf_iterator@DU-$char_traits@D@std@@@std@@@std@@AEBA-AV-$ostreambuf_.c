/*
 * XREFs of ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x1800B2F10
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DJ@Z @ 0x1800B49A0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DK@Z @ 0x1800B4A60 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4A60.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBX@Z @ 0x1800B4E80 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4E80.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_J@Z @ 0x1800B4F30 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4F30.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_K@Z @ 0x1800B4FF0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_1800B4FF0.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800348D0 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800AFF28 (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B02E8 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800B0428 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x1800B5548 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CAF31 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        char a5,
        _BYTE *a6,
        size_t Size)
{
  size_t v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  __int64 v19; // r9
  char v20; // r15
  char i; // cl
  char *v22; // rax
  unsigned __int64 v23; // r14
  __int64 v24; // rbx
  unsigned __int64 v25; // rbx
  int v26; // eax
  __int128 v27; // xmm0
  unsigned __int8 *v28; // r15
  __int64 v29; // r12
  unsigned __int8 *v30; // r15
  __int64 v31; // r12
  unsigned __int8 *v32; // r15
  __int64 v33; // r12
  void **v34; // rax
  __int64 v35; // r14
  unsigned __int8 *v36; // rdi
  _OWORD *v37; // rbx
  __int128 v39; // [rsp+48h] [rbp-61h] BYREF
  _OWORD *v40; // [rsp+58h] [rbp-51h]
  __int64 v41; // [rsp+60h] [rbp-49h]
  void *v42[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v43; // [rsp+78h] [rbp-31h]
  unsigned __int64 v44; // [rsp+80h] [rbp-29h]
  void *v45[3]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v46; // [rsp+A0h] [rbp-9h]

  v41 = -2LL;
  v40 = a2;
  v9 = Size;
  v10 = Size && ((*a6 - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= Size && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v39 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>((__int64 *)&v39);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v44 = 15LL;
  v43 = 0LL;
  LOBYTE(v42[0]) = 0;
  std::string::assign(v42, Size, 0);
  v14 = v42;
  if ( v44 >= 0x10 )
    v14 = (void **)v42[0];
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, _BYTE *, void **))(*(_QWORD *)v12 + 56LL))(
    v12,
    a6,
    &a6[Size],
    v14);
  v15 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v39 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<char>>((__int64 *)&v39);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v16 + 40LL))(v16, v45);
  v18 = v45;
  if ( v46 >= 0x10 )
    v18 = (void **)v45[0];
  if ( (unsigned __int8)(*(_BYTE *)v18 - 1) <= 0x7Du )
  {
    v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v16 + 32LL))(v16);
    for ( i = *(_BYTE *)v18; i != 127 && i > 0 && i < v9 - v10; i = *v22 )
    {
      v9 -= i;
      LOBYTE(v19) = v20;
      std::string::insert(v42, v9, 1LL, v19);
      v22 = (char *)v18 + 1;
      if ( *((char *)v18 + 1) <= 0 )
        v22 = (char *)v18;
      v18 = (void **)v22;
    }
  }
  v23 = v43;
  v24 = *(_QWORD *)(a4 + 40);
  if ( v24 <= 0 || v24 <= v43 )
    v25 = 0LL;
  else
    v25 = v24 - v43;
  v26 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v27 = *a3;
  v39 = *a3;
  if ( v26 == 64 )
  {
    v32 = (unsigned __int8 *)v42;
    if ( v44 >= 0x10 )
      v32 = (unsigned __int8 *)v42[0];
    v33 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v39, *v32++);
        --v33;
      }
      while ( v33 );
      goto LABEL_55;
    }
  }
  else if ( v26 == 256 )
  {
    v30 = (unsigned __int8 *)v42;
    if ( v44 >= 0x10 )
      v30 = (unsigned __int8 *)v42[0];
    v31 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v39, *v30++);
        --v31;
      }
      while ( v31 );
      v27 = v39;
    }
    *a3 = v27;
    v39 = v27;
    if ( v25 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v39, a5);
        --v25;
      }
      while ( v25 );
      v27 = v39;
    }
    v25 = 0LL;
  }
  else
  {
    if ( v25 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v39, a5);
        --v25;
      }
      while ( v25 );
      v27 = v39;
    }
    *a3 = v27;
    v25 = 0LL;
    v39 = v27;
    v28 = (unsigned __int8 *)v42;
    if ( v44 >= 0x10 )
      v28 = (unsigned __int8 *)v42[0];
    v29 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v39, *v28++);
        --v29;
      }
      while ( v29 );
LABEL_55:
      v27 = v39;
    }
  }
  *a3 = v27;
  v39 = v27;
  v34 = v42;
  if ( v44 >= 0x10 )
    v34 = (void **)v42[0];
  v35 = v23 - v10;
  v36 = (unsigned __int8 *)v34 + v10;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v39, *v36++);
      --v35;
    }
    while ( v35 );
    v27 = v39;
  }
  *(_QWORD *)(a4 + 40) = 0LL;
  v39 = v27;
  if ( v25 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v39, a5);
      --v25;
    }
    while ( v25 );
    v27 = v39;
  }
  v37 = v40;
  *v40 = v27;
  if ( v46 >= 0x10 )
    operator delete(v45[0]);
  v46 = 15LL;
  v45[2] = 0LL;
  LOBYTE(v45[0]) = 0;
  if ( v44 >= 0x10 )
    operator delete(v42[0]);
  return v37;
}
