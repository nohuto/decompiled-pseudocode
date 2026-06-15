/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F170
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EDA0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001A6EC (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18002F650 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18002F650.c)
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXXZ @ 0x18002F718 (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r15
  __int64 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 v10; // rax
  __int64 v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // r13
  _QWORD *v14; // r14
  _QWORD *v15; // r11
  _QWORD *v16; // rax
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  int v19; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // r11
  unsigned __int16 v24; // ax
  int v25; // eax
  _QWORD *j; // rax
  _QWORD *v27; // r8
  char v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2[2];
  v5 = (__int64)a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v5 = *a2;
  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  v8 = 0LL;
  for ( i = 2 * v4; v8 < i; ++v8 )
    v7 = 0x100000001B3LL * (*(unsigned __int8 *)(v8 + v5) ^ (unsigned __int64)v7);
  v10 = v7 & a1[6];
  v11 = a1[3];
  v12 = *(_QWORD **)(v11 + 16 * v10);
  v13 = 2 * v10;
  v14 = a1 + 1;
  v15 = v12;
  while ( 1 )
  {
    if ( v15 == (_QWORD *)*v14 )
      v16 = (_QWORD *)*v14;
    else
      v16 = **(_QWORD ***)(v11 + 8 * v13 + 8);
    if ( v12 == v16 )
      goto LABEL_42;
    v17 = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v17 = *a2;
    v7 = (__int64)(v12 + 2);
    if ( v12[5] >= 8uLL )
      v7 = v12[2];
    i = v12[4];
    if ( i == v4 )
    {
      if ( i )
      {
        v7 -= v17;
        while ( 1 )
        {
          v18 = *(_WORD *)(v7 + v17);
          v5 = *(unsigned __int16 *)v17;
          if ( v18 != (_WORD)v5 )
            break;
          v17 += 2LL;
          if ( !--i )
            goto LABEL_19;
        }
        v19 = v18 < (unsigned __int16)v5 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v19 = 0;
      }
      if ( !v19 )
        break;
    }
    v12 = (_QWORD *)*v12;
  }
  v20 = v12;
  v21 = v12;
  while ( 1 )
  {
    v22 = v15 == (_QWORD *)*v14 ? (_QWORD *)*v14 : **(_QWORD ***)(v11 + 8 * v13 + 8);
    if ( v12 == v22 )
      break;
    i = (unsigned __int64)(v12 + 2);
    if ( v12[5] >= 8uLL )
      i = v12[2];
    v7 = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v7 = *a2;
    if ( v4 != v12[4] )
      break;
    v23 = v4;
    if ( v4 )
    {
      v7 -= i;
      while ( 1 )
      {
        v24 = *(_WORD *)(v7 + i);
        v5 = *(unsigned __int16 *)i;
        if ( v24 != (_WORD)v5 )
          break;
        i += 2LL;
        if ( !--v23 )
          goto LABEL_37;
      }
      v25 = v24 < (unsigned __int16)v5 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v25 = 0;
    }
    if ( v25 )
      break;
    v12 = (_QWORD *)*v12;
    v15 = *(_QWORD **)(v11 + 8 * v13);
  }
  if ( v20 == v12 )
  {
LABEL_42:
    v21 = (_QWORD *)*v14;
    v12 = (_QWORD *)*v14;
  }
  for ( j = v21; j != v12; j = (_QWORD *)*j )
    ++v6;
  if ( v21 == *(_QWORD **)*v14 && v12 == (_QWORD *)*v14 )
  {
    std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::clear(a1 + 1, i, v7, v5, -2LL);
    std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v21 != v12 )
    {
      v27 = v21;
      v21 = (_QWORD *)*v21;
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        a1,
        &v29,
        v27);
    }
  }
  return v6;
}
