/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x180027C50
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180027BE8 (-_Init@-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x180056488 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAVI.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>::assign(
        __int64 a1,
        __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  __int64 v4; // rbx
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 *v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r10

  v3 = *(unsigned __int64 **)a1;
  v4 = 16LL;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( v7 < 0x10 )
  {
    v14 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v15 = v14 + v7;
      if ( v14 + v7 < 0x10 )
        v15 = 16LL;
    }
    else
    {
      v15 = 16LL;
    }
    if ( v3 )
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)(8 * v7));
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>::_Buy(
      a1,
      v15);
    v11 = *(unsigned __int64 **)a1;
    do
    {
      *v11++ = *a3;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    v9 = 0LL;
    if ( v6 >= 0x10 )
    {
      v11 = v3 + 16;
      v17 = -(__int64)(v3 + 16 >= v3) & 0x10;
      if ( v3 < v3 + 16 && (v3 > a3 || &v3[v17 - 1] < a3) )
      {
        do
          v9 += 2LL;
        while ( v9 != v17 );
        memset64(v3, *a3, v17);
        v3 += v17;
      }
      while ( v9 != v17 )
      {
        ++v9;
        *v3++ = *a3;
      }
    }
    else
    {
      v10 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
      if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
        v10 = 0LL;
      if ( v10 )
      {
        if ( v10 >= 2 && (v3 > a3 || &v3[v10 - 1] < a3) )
        {
          v13 = v10 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v9 += 2LL;
          while ( v9 != v13 );
          v16 = 8 * v13;
          memset64(v3, *a3, v16 >> 3);
          v3 = (unsigned __int64 *)((char *)v3 + v16);
        }
        while ( v9 != v10 )
        {
          ++v9;
          *v3++ = *a3;
        }
      }
      v11 = *(unsigned __int64 **)(a1 + 8);
      v12 = 16 - v6;
      if ( 16 != v6 )
      {
        do
        {
          *v11++ = *a3;
          --v12;
        }
        while ( v12 );
      }
    }
  }
  *(_QWORD *)(a1 + 8) = v11;
}
