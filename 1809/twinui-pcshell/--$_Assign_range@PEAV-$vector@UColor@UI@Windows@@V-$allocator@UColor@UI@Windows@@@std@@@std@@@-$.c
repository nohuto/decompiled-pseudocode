/*
 * XREFs of ??$_Assign_range@PEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAAXPEAV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0Uforward_iterator_tag@1@@Z @ 0x18039D334
 * Callers:
 *     ??4?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18039D954 (--4-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$allocato.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180083574 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Assign_range@PEAUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXPEAUColor@UI@Windows@@0Uforward_iterator_tag@1@@Z @ 0x18039D214 (--$_Assign_range@PEAUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windo.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18039D654 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Buy@?$vector@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x18039DE24 (-_Buy@-$vector@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@V-$alloc.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::vector<std::vector<Windows::UI::Color>>::_Assign_range<std::vector<Windows::UI::Color> *>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // r15
  void **v7; // rsi
  void **v8; // rdi
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  void **v13; // rdi
  __int64 v14; // rbp
  void **v15; // rbp
  __int64 i; // rbx

  v4 = a2;
  v6 = (a3 - a2) / 24;
  v7 = *(void ***)(a1 + 8);
  v8 = *(void ***)a1;
  v9 = ((__int64)v7 - *(_QWORD *)a1) / 24;
  v10 = (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 24LL;
  if ( v6 <= v10 )
  {
    if ( v6 <= v9 )
    {
      v15 = &v8[3 * v6];
      if ( a2 != a3 )
      {
        do
        {
          if ( v8 != (void **)v4 )
            std::vector<Windows::UI::Color>::_Assign_range<Windows::UI::Color *>(v8, *(char **)v4, *(_QWORD *)(v4 + 8));
          v8 += 3;
          v4 += 24LL;
        }
        while ( v4 != a3 );
        v7 = *(void ***)(a1 + 8);
      }
      for ( i = (__int64)v15; (void **)i != v7; i += 24LL )
        std::vector<Windows::UI::Color>::_Tidy(i);
      *(_QWORD *)(a1 + 8) = v15;
    }
    else
    {
      v14 = a2 + 24 * v9;
      if ( a2 != v14 )
      {
        do
        {
          if ( v8 != (void **)v4 )
            std::vector<Windows::UI::Color>::_Assign_range<Windows::UI::Color *>(v8, *(char **)v4, *(_QWORD *)(v4 + 8));
          v8 += 3;
          v4 += 24LL;
        }
        while ( v4 != v14 );
        v7 = *(void ***)(a1 + 8);
      }
      while ( v14 != a3 )
      {
        std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v7, v14);
        v7 += 3;
        v14 += 24LL;
      }
      *(_QWORD *)(a1 + 8) = v7;
    }
  }
  else
  {
    if ( v6 > 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("vector<T> too long");
    v11 = v10 >> 1;
    if ( v10 <= 0xAAAAAAAAAAAAAAALL - (v10 >> 1) )
    {
      v12 = v11 + v10;
      if ( v11 + v10 < v6 )
        v12 = v6;
      v6 = v12;
    }
    if ( v8 )
    {
      if ( v8 != v7 )
      {
        do
        {
          std::vector<Windows::UI::Color>::_Tidy((__int64)v8);
          v8 += 3;
        }
        while ( v8 != v7 );
        v8 = *(void ***)a1;
      }
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)(24 * v10));
    }
    std::vector<std::vector<Windows::UI::Color>>::_Buy(a1, v6, v9);
    v13 = *(void ***)a1;
    while ( v4 != a3 )
    {
      std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v13, v4);
      v13 += 3;
      v4 += 24LL;
    }
    *(_QWORD *)(a1 + 8) = v13;
  }
}
