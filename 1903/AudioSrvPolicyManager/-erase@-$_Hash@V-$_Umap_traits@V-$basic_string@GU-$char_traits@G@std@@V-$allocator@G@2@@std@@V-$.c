/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002C0D0
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BCF0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18001760C (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18002C5C0 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18002C5C0.c)
 *     ?clear@?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXXZ @ 0x18002C69C (-clear@-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$uniqu.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int8 *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r12
  _QWORD *v12; // rbx
  __int64 v13; // r13
  _QWORD *v14; // r14
  __int64 v15; // r11
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int16 v18; // cx
  int v19; // eax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdi
  _QWORD *v22; // rax
  unsigned __int64 v23; // r11
  unsigned __int16 v24; // ax
  int v25; // eax
  _QWORD *i; // rax
  _QWORD *v27; // r8
  char v29; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2[2];
  v5 = (unsigned __int64)a2;
  if ( a2[3] >= 8 )
    v5 = *a2;
  v6 = 0xCBF29CE484222325uLL;
  v7 = (unsigned __int8 *)v5;
  v8 = 2 * v4;
  v9 = 0LL;
  if ( v5 > 2 * v4 + v5 )
    v8 = 0LL;
  if ( v8 )
  {
    do
      v6 = 0x100000001B3LL * (*v7++ ^ (unsigned __int64)v6);
    while ( &v7[-v5] != (unsigned __int8 *)v8 );
  }
  v10 = v6 & a1[6];
  v11 = a1[3];
  v12 = *(_QWORD **)(v11 + 16 * (v6 & a1[6]));
  v13 = 2 * v10;
  v14 = a1 + 1;
  v15 = *(_QWORD *)(v11 + 16 * v10);
  while ( 1 )
  {
    if ( v15 == *v14 )
      v16 = (_QWORD *)*v14;
    else
      v16 = **(_QWORD ***)(v11 + 8 * v13 + 8);
    if ( v12 == v16 )
      goto LABEL_44;
    v17 = (unsigned __int64)a2;
    if ( a2[3] >= 8 )
      v17 = *a2;
    v5 = (unsigned __int64)(v12 + 2);
    if ( v12[5] >= 8uLL )
      v5 = v12[2];
    v8 = v12[4];
    if ( v8 == v4 )
    {
      if ( v8 )
      {
        v5 -= v17;
        while ( 1 )
        {
          v18 = *(_WORD *)(v5 + v17);
          v7 = (unsigned __int8 *)*(unsigned __int16 *)v17;
          if ( v18 != (_WORD)v7 )
            break;
          v17 += 2LL;
          if ( !--v8 )
            goto LABEL_21;
        }
        v19 = v18 < (unsigned __int16)v7 ? -1 : 1;
      }
      else
      {
LABEL_21:
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
    v22 = v15 == *v14 ? (_QWORD *)*v14 : **(_QWORD ***)(v11 + 8 * v13 + 8);
    if ( v12 == v22 )
      break;
    v8 = (__int64)(v12 + 2);
    if ( v12[5] >= 8uLL )
      v8 = v12[2];
    v5 = (unsigned __int64)a2;
    if ( a2[3] >= 8 )
      v5 = *a2;
    if ( v4 != v12[4] )
      break;
    v23 = v4;
    if ( v4 )
    {
      v5 -= v8;
      while ( 1 )
      {
        v24 = *(_WORD *)(v5 + v8);
        v7 = (unsigned __int8 *)*(unsigned __int16 *)v8;
        if ( v24 != (_WORD)v7 )
          break;
        v8 += 2LL;
        if ( !--v23 )
          goto LABEL_39;
      }
      v25 = v24 < (unsigned __int16)v7 ? -1 : 1;
    }
    else
    {
LABEL_39:
      v25 = 0;
    }
    if ( v25 )
      break;
    v12 = (_QWORD *)*v12;
    v15 = *(_QWORD *)(v11 + 8 * v13);
  }
  if ( v20 == v12 )
  {
LABEL_44:
    v21 = (_QWORD *)*v14;
    v12 = (_QWORD *)*v14;
  }
  for ( i = v21; i != v12; i = (_QWORD *)*i )
    ++v9;
  if ( v21 == *(_QWORD **)*v14 && v12 == (_QWORD *)*v14 )
  {
    std::list<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::clear(a1 + 1, v8, v5, v7, -2LL);
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
  return v9;
}
