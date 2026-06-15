/*
 * XREFs of ?count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002BF08
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002B970 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BA50 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BCF0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rax
  unsigned __int8 *v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r13
  __int64 v15; // rdi
  _QWORD *v16; // r12
  _QWORD *i; // rax
  _QWORD *v18; // rcx
  char *v19; // rdx
  char *v20; // r10
  __int64 v21; // r8
  signed __int64 v22; // r10
  unsigned __int16 v23; // cx
  int v24; // ecx
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // rdx
  char *v28; // r10
  unsigned __int64 *v29; // rbx
  unsigned __int64 v30; // rsi
  signed __int64 v31; // rbx
  unsigned __int16 v32; // dx
  int v33; // edx

  v3 = a2[2];
  v5 = (unsigned __int64)a2;
  if ( a2[3] >= 8 )
    v5 = *a2;
  v6 = 0LL;
  v7 = 2 * v3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = (unsigned __int8 *)v5;
  if ( v5 > 2 * v3 + v5 )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      v10 = *v9++ ^ (unsigned __int64)v8;
      v8 = 0x100000001B3LL * v10;
    }
    while ( &v9[-v5] != (unsigned __int8 *)v7 );
  }
  v11 = a1[3];
  v12 = (_QWORD *)a1[1];
  v13 = v8 & a1[6];
  v14 = 2 * (v8 & a1[6]);
  v15 = 2 * v13;
  v16 = *(_QWORD **)(v11 + 16 * v13);
  for ( i = *(_QWORD **)(v11 + 16 * (v8 & a1[6])); ; i = (_QWORD *)*i )
  {
    if ( v16 == v12 )
      v18 = v12;
    else
      v18 = **(_QWORD ***)(v11 + 8 * v15 + 8);
    if ( i == v18 )
      goto LABEL_44;
    v19 = (char *)a2;
    if ( a2[3] >= 8 )
      v19 = (char *)*a2;
    v20 = (char *)(i + 2);
    if ( i[5] >= 8uLL )
      v20 = (char *)i[2];
    v21 = i[4];
    if ( v21 == v3 )
    {
      if ( v21 )
      {
        v22 = v20 - v19;
        while ( 1 )
        {
          v23 = *(_WORD *)&v19[v22];
          if ( v23 != *(_WORD *)v19 )
            break;
          v19 += 2;
          if ( !--v21 )
            goto LABEL_21;
        }
        v24 = v23 < *(_WORD *)v19 ? -1 : 1;
      }
      else
      {
LABEL_21:
        v24 = 0;
      }
      if ( !v24 )
        break;
    }
  }
  v25 = i;
  v26 = i;
  while ( 1 )
  {
    v27 = v16 == v12 ? v12 : **(_QWORD ***)(v11 + 8 * v14 + 8);
    if ( i == v27 )
      break;
    v28 = (char *)(i + 2);
    if ( i[5] >= 8uLL )
      v28 = (char *)i[2];
    v29 = a2;
    if ( a2[3] >= 8 )
      v29 = (unsigned __int64 *)*a2;
    if ( v3 != i[4] )
      break;
    v30 = v3;
    if ( v3 )
    {
      v31 = (char *)v29 - v28;
      while ( 1 )
      {
        v32 = *(_WORD *)&v28[v31];
        if ( v32 != *(_WORD *)v28 )
          break;
        v28 += 2;
        if ( !--v30 )
          goto LABEL_39;
      }
      v33 = v32 < *(_WORD *)v28 ? -1 : 1;
    }
    else
    {
LABEL_39:
      v33 = 0;
    }
    if ( v33 )
      break;
    i = (_QWORD *)*i;
  }
  if ( v25 == i )
  {
LABEL_44:
    v26 = v12;
    i = v12;
  }
  while ( v26 != i )
  {
    v26 = (_QWORD *)*v26;
    ++v6;
  }
  return v6;
}
