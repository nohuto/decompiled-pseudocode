/*
 * XREFs of ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_N@Z @ 0x1800B4F20
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x1800B0158 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x1800B0298 (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@$$QEAV12@@Z @ 0x1800B3898 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z_0 @ 0x1800CADA1 (--3@YAXPEAX@Z_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int8 a5,
        char a6)
{
  void *v9; // rbx
  struct std::_Facet_base *v10; // rdi
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  unsigned __int8 *v19; // rsi
  void *Src[2]; // [rsp+50h] [rbp-49h] BYREF
  unsigned __int64 v22; // [rsp+68h] [rbp-31h]
  void *v23[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 v24; // [rsp+80h] [rbp-19h]
  unsigned __int64 v25; // [rsp+88h] [rbp-11h]

  if ( (*(_DWORD *)(a4 + 24) & 0x4000) != 0 )
  {
    v9 = **(void ***)(a4 + 64);
    Src[0] = v9;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
    v10 = std::use_facet<std::numpunct<char>>((__int64 *)Src);
    if ( v9 )
    {
      v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
      v11 = v12;
      if ( v12 )
        (**v12)(v12, 1LL);
    }
    v25 = 15LL;
    v24 = 0LL;
    LOBYTE(v23[0]) = 0;
    v13 = *(_QWORD *)v10;
    if ( a6 )
      (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(v13 + 56))(
        v10,
        Src,
        v11);
    else
      (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(v13 + 48))(
        v10,
        Src,
        v11);
    std::string::assign(v23, Src);
    if ( v22 >= 0x10 )
      operator delete(Src[0]);
    v14 = *(_QWORD *)(a4 + 40);
    v15 = v24;
    if ( v14 <= 0 || v14 <= v24 )
      v16 = 0LL;
    else
      v16 = v14 - v24;
    if ( (*(_DWORD *)(a4 + 24) & 0x1C0) != 0x40 )
    {
      v17 = *a3;
      *(_OWORD *)Src = *a3;
      if ( v16 )
      {
        do
        {
          std::ostreambuf_iterator<char>::operator=((__int64)Src, a5);
          --v16;
        }
        while ( v16 );
        v17 = *(_OWORD *)Src;
      }
      *a3 = v17;
      v16 = 0LL;
    }
    v18 = *a3;
    *(_OWORD *)Src = *a3;
    v19 = (unsigned __int8 *)v23;
    if ( v25 >= 0x10 )
      v19 = (unsigned __int8 *)v23[0];
    if ( v15 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)Src, *v19++);
        --v15;
      }
      while ( v15 );
      v18 = *(_OWORD *)Src;
    }
    *(_QWORD *)(a4 + 40) = 0LL;
    *(_OWORD *)Src = v18;
    if ( v16 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)Src, a5);
        --v16;
      }
      while ( v16 );
      v18 = *(_OWORD *)Src;
    }
    *a2 = v18;
    if ( v25 >= 0x10 )
      operator delete(v23[0]);
  }
  else
  {
    *(_OWORD *)Src = *a3;
    (*(void (__fastcall **)(__int64, _OWORD *, void **))(*(_QWORD *)a1 + 72LL))(a1, a2, Src);
  }
  return a2;
}
