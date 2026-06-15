/*
 * XREFs of ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002F378
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002EA20 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EB00 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002EDA0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(_QWORD *a1, _QWORD *a2)
{
  __int64 v3; // r11
  _QWORD *v4; // r9
  unsigned __int64 v5; // rcx
  __int64 i; // r8
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // r10
  __int64 v10; // r15
  _QWORD *j; // rax
  _QWORD *v12; // rcx
  char *v13; // r8
  unsigned __int64 v14; // rbp
  char *v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  signed __int64 v18; // r9
  unsigned __int16 v19; // cx
  int v20; // ecx
  _QWORD *v21; // rcx
  signed __int64 v22; // rdx
  unsigned __int16 v23; // r8
  int v24; // ecx

  v3 = a2[2];
  v4 = a2;
  if ( a2[3] >= 8uLL )
    v4 = (_QWORD *)*a2;
  v5 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v5 < 2 * v3; i = 0x100000001B3LL * (v7 ^ i) )
    v7 = *((unsigned __int8 *)v4 + v5++);
  v8 = a1[3];
  v9 = (_QWORD *)a1[1];
  v10 = 2 * (i & a1[6]);
  for ( j = *(_QWORD **)(v8 + 16 * (i & a1[6])); ; j = (_QWORD *)*j )
  {
    if ( *(_QWORD **)(v8 + 8 * v10) == v9 )
      v12 = (_QWORD *)a1[1];
    else
      v12 = **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( j == v12 )
      goto LABEL_34;
    v13 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v13 = (char *)*a2;
    v14 = j[5];
    v15 = (char *)(j + 2);
    if ( v14 >= 8 )
      v15 = (char *)j[2];
    v16 = j[4];
    if ( v16 == v3 )
    {
      v17 = j[4];
      if ( v16 )
      {
        v18 = v15 - v13;
        while ( 1 )
        {
          v19 = *(_WORD *)&v13[v18];
          if ( v19 != *(_WORD *)v13 )
            break;
          v13 += 2;
          if ( !--v17 )
            goto LABEL_19;
        }
        v20 = v19 < *(_WORD *)v13 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v20 = 0;
      }
      if ( !v20 )
        break;
    }
  }
  v21 = j + 2;
  if ( v14 >= 8 )
    v21 = (_QWORD *)*v21;
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  if ( v3 != v16 )
    goto LABEL_34;
  if ( v3 )
  {
    v22 = (char *)a2 - (char *)v21;
    while ( 1 )
    {
      v23 = *(_WORD *)((char *)v21 + v22);
      if ( v23 != *(_WORD *)v21 )
        break;
      v21 = (_QWORD *)((char *)v21 + 2);
      if ( !--v3 )
        goto LABEL_32;
    }
    v24 = v23 < *(_WORD *)v21 ? -1 : 1;
  }
  else
  {
LABEL_32:
    v24 = 0;
  }
  if ( v24 )
LABEL_34:
    j = (_QWORD *)a1[1];
  if ( j == v9 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return j + 6;
}
