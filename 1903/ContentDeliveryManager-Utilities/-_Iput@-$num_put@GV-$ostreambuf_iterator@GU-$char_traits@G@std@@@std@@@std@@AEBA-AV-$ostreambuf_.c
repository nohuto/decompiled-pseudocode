/*
 * XREFs of ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x1800BD7F8
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GJ@Z @ 0x1800C27E0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GK@Z @ 0x1800C28A0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C28A0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBX@Z @ 0x1800C2CC0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2CC0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_J@Z @ 0x1800C2D70 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2D70.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_K@Z @ 0x1800C2E30 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_1800C2E30.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x1800342A8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180035574 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x18003688C (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z @ 0x1800B9E30 (--4-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@_W@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x1800C3DDC (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CADA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  __int64 v7; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  unsigned __int16 v19; // r15
  char i; // cl
  char *v21; // rax
  unsigned __int64 v22; // r14
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm0
  unsigned __int16 *v27; // r15
  __int64 v28; // r12
  unsigned __int16 *v29; // r15
  __int64 v30; // r12
  unsigned __int16 *v31; // r15
  __int64 v32; // r12
  void **v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int16 *v35; // rdi
  _OWORD *v36; // rbx
  __int128 v38; // [rsp+48h] [rbp-61h] BYREF
  __int64 v39; // [rsp+58h] [rbp-51h]
  _OWORD *v40; // [rsp+60h] [rbp-49h]
  __int64 v41; // [rsp+68h] [rbp-41h]
  void *v42[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int64 v43; // [rsp+80h] [rbp-29h]
  unsigned __int64 v44; // [rsp+88h] [rbp-21h]
  void *v45[3]; // [rsp+90h] [rbp-19h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp-1h]

  v41 = -2LL;
  v7 = a4;
  v39 = a4;
  v40 = a2;
  v9 = a7;
  if ( !a7 || (v10 = 1LL, ((*a6 - 43) & 0xFD) != 0) )
    v10 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= a7 && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v38 = v11;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>((__int64 *)&v38);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v11 + 16LL))(v11);
    v11 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v44 = 7LL;
  v43 = v11;
  LOWORD(v42[0]) = v11;
  std::wstring::assign((__int64)v42, a7, 0);
  v14 = v42;
  if ( v44 >= 8 )
    v14 = (void **)v42[0];
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, _BYTE *, void **))(*(_QWORD *)v12 + 88LL))(
    v12,
    a6,
    &a6[a7],
    v14);
  v15 = **(_QWORD **)(v7 + 64);
  *(_QWORD *)&v38 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<unsigned short>>((__int64 *)&v38);
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
    v19 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v16 + 32LL))(v16);
    for ( i = *(_BYTE *)v18; i != 127 && i > 0 && i < v9 - v10; i = *v21 )
    {
      v9 -= i;
      std::wstring::insert(v42, v9, 1LL, v19);
      v21 = (char *)v18 + 1;
      if ( *((char *)v18 + 1) <= 0 )
        v21 = (char *)v18;
      v18 = (void **)v21;
    }
  }
  v22 = v43;
  v23 = *(_QWORD *)(v7 + 40);
  if ( v23 <= 0 || v23 <= v43 )
    v24 = 0LL;
  else
    v24 = v23 - v43;
  v25 = *(_DWORD *)(v7 + 24) & 0x1C0;
  v26 = *a3;
  v38 = *a3;
  if ( v25 == 64 )
  {
    v31 = (unsigned __int16 *)v42;
    if ( v44 >= 8 )
      v31 = (unsigned __int16 *)v42[0];
    v32 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, *v31++);
        --v32;
      }
      while ( v32 );
      goto LABEL_54;
    }
  }
  else if ( v25 == 256 )
  {
    v29 = (unsigned __int16 *)v42;
    if ( v44 >= 8 )
      v29 = (unsigned __int16 *)v42[0];
    v30 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, *v29++);
        --v30;
      }
      while ( v30 );
      v26 = v38;
      v7 = v39;
    }
    *a3 = v26;
    v38 = v26;
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, a5);
        --v24;
      }
      while ( v24 );
      v26 = v38;
    }
    v24 = 0LL;
  }
  else
  {
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, a5);
        --v24;
      }
      while ( v24 );
      v26 = v38;
    }
    *a3 = v26;
    v24 = 0LL;
    v38 = v26;
    v27 = (unsigned __int16 *)v42;
    if ( v44 >= 8 )
      v27 = (unsigned __int16 *)v42[0];
    v28 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, *v27++);
        --v28;
      }
      while ( v28 );
LABEL_54:
      v26 = v38;
      v7 = v39;
    }
  }
  *a3 = v26;
  v38 = v26;
  v33 = v42;
  if ( v44 >= 8 )
    v33 = (void **)v42[0];
  v34 = v22 - v10;
  v35 = (unsigned __int16 *)v33 + v10;
  if ( v34 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, *v35++);
      --v34;
    }
    while ( v34 );
    v26 = v38;
    v7 = v39;
  }
  *(_QWORD *)(v7 + 40) = 0LL;
  v38 = v26;
  if ( v24 )
  {
    do
    {
      std::ostreambuf_iterator<wchar_t>::operator=((__int64)&v38, a5);
      --v24;
    }
    while ( v24 );
    v26 = v38;
  }
  v36 = v40;
  *v40 = v26;
  if ( v46 >= 0x10 )
    operator delete(v45[0]);
  v46 = 15LL;
  v45[2] = 0LL;
  LOBYTE(v45[0]) = 0;
  if ( v44 >= 8 )
    operator delete(v42[0]);
  return v36;
}
