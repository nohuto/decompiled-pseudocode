/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18001A4B0
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001A6EC (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Xlength@?$vector@PEAUIAudioAppVolumePolicyChange@@V?$allocator@PEAUIAudioAppVolumePolicyChange@@@std@@@std@@CAXXZ @ 0x180019068 (-_Xlength@-$vector@PEAUIAudioAppVolumePolicyChange@@V-$allocator@PEAUIAudioAppVolumePolicyChange.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001AB44 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r9
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  const struct std::nothrow_t *v11; // rdx
  __int64 v12; // rcx
  SIZE_T v13; // rdi
  __int64 v14; // rax
  unsigned __int64 *i; // rcx
  __int64 v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  unsigned __int64 j; // rsi
  unsigned __int64 *v21; // r8
  unsigned __int64 v22; // rsi
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx

  v3 = *(unsigned __int64 **)a1;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = a2;
  if ( a2 > v7 )
  {
    if ( a2 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v9 = v7 >> 1;
      if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
      {
        v10 = v9 + v7;
        if ( v9 + v7 < v8 )
          v10 = v8;
      }
      else
      {
        v10 = v8;
      }
      if ( v3 )
      {
        v11 = (const struct std::nothrow_t *)(8 * v7);
        if ( 8 * v7 >= 0x1000 )
        {
          v12 = *(v3 - 1);
          v11 = (const struct std::nothrow_t *)((char *)v11 + 39);
          if ( (unsigned __int64)v3 - v12 - 8 > 0x1F )
          {
            _o__invalid_parameter_noinfo_noreturn(v12, v11);
            __debugbreak();
          }
          v3 = (unsigned __int64 *)*(v3 - 1);
        }
        operator delete(v3, v11);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v10 )
        goto LABEL_15;
      if ( v10 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v13 = 8 * v10;
        v14 = std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
        *(_QWORD *)a1 = v14;
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)(a1 + 16) = v13 + *(_QWORD *)a1;
LABEL_15:
        for ( i = *(unsigned __int64 **)a1; v8; --v8 )
          *i++ = *a3;
LABEL_33:
        *(_QWORD *)(a1 + 8) = i;
        return;
      }
    }
    std::vector<IAudioAppVolumePolicyChange *>::_Xlength();
  }
  v16 = 0LL;
  if ( a2 > v6 )
  {
    v17 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v3 + 7LL) >> 3;
    if ( (unsigned __int64)v3 > *(_QWORD *)(a1 + 8) )
      v17 = 0LL;
    if ( v17 )
    {
      if ( v17 >= 2 && (v3 > a3 || &v3[v17 - 1] < a3) )
      {
        v18 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v16 += 2LL;
        while ( v16 != v18 );
        v19 = 8 * v18;
        memset64(v3, *a3, v19 >> 3);
        v3 = (unsigned __int64 *)((char *)v3 + v19);
      }
      while ( v16 != v17 )
      {
        ++v16;
        *v3++ = *a3;
      }
    }
    i = *(unsigned __int64 **)(a1 + 8);
    for ( j = v8 - v6; j; --j )
      *i++ = *a3;
    goto LABEL_33;
  }
  v21 = &v3[a2];
  v22 = a2 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v3 > v21 )
    v22 = 0LL;
  if ( v22 )
  {
    if ( v22 >= 2 && (v3 > a3 || &v3[v22 - 1] < a3) )
    {
      v23 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      do
        v16 += 2LL;
      while ( v16 != v23 );
      v24 = 8 * v23;
      memset64(v3, *a3, v24 >> 3);
      v3 = (unsigned __int64 *)((char *)v3 + v24);
    }
    while ( v16 != v22 )
    {
      ++v16;
      *v3++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v21;
}
