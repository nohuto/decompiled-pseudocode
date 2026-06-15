/*
 * XREFs of ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002C2E8
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18002B970 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BA50 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002BCF0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at(
        _QWORD *a1,
        unsigned __int64 *a2)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int8 *v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // r15
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  char *v15; // r8
  unsigned __int64 v16; // rbp
  char *v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdi
  signed __int64 v20; // r9
  unsigned __int16 v21; // cx
  int v22; // ecx
  _QWORD *v23; // rcx
  signed __int64 v24; // rdx
  unsigned __int16 v25; // r8
  int v26; // ecx

  v3 = a2[2];
  v4 = (unsigned __int64)a2;
  if ( a2[3] >= 8 )
    v4 = *a2;
  v5 = 2 * v3;
  v6 = 0xCBF29CE484222325uLL;
  v7 = (unsigned __int8 *)v4;
  if ( v4 > 2 * v3 + v4 )
    v5 = 0LL;
  if ( v5 )
  {
    do
    {
      v8 = *v7++ ^ (unsigned __int64)v6;
      v6 = 0x100000001B3LL * v8;
    }
    while ( &v7[-v4] != (unsigned __int8 *)v5 );
  }
  v9 = a1[3];
  v11 = (_QWORD *)a1[1];
  v10 = v6 & a1[6];
  v12 = 2 * v10;
  for ( i = *(_QWORD **)(v9 + 16 * v10); ; i = (_QWORD *)*i )
  {
    if ( *(_QWORD **)(v9 + 8 * v12) == v11 )
      v14 = (_QWORD *)a1[1];
    else
      v14 = **(_QWORD ***)(v9 + 8 * v12 + 8);
    if ( i == v14 )
      goto LABEL_36;
    v15 = (char *)a2;
    if ( a2[3] >= 8 )
      v15 = (char *)*a2;
    v16 = i[5];
    v17 = (char *)(i + 2);
    if ( v16 >= 8 )
      v17 = (char *)i[2];
    v18 = i[4];
    if ( v18 == v3 )
    {
      v19 = i[4];
      if ( v18 )
      {
        v20 = v17 - v15;
        while ( 1 )
        {
          v21 = *(_WORD *)&v15[v20];
          if ( v21 != *(_WORD *)v15 )
            break;
          v15 += 2;
          if ( !--v19 )
            goto LABEL_21;
        }
        v22 = v21 < *(_WORD *)v15 ? -1 : 1;
      }
      else
      {
LABEL_21:
        v22 = 0;
      }
      if ( !v22 )
        break;
    }
  }
  v23 = i + 2;
  if ( v16 >= 8 )
    v23 = (_QWORD *)*v23;
  if ( a2[3] >= 8 )
    a2 = (unsigned __int64 *)*a2;
  if ( v3 != v18 )
    goto LABEL_36;
  if ( v3 )
  {
    v24 = (char *)a2 - (char *)v23;
    while ( 1 )
    {
      v25 = *(_WORD *)((char *)v23 + v24);
      if ( v25 != *(_WORD *)v23 )
        break;
      v23 = (_QWORD *)((char *)v23 + 2);
      if ( !--v3 )
        goto LABEL_34;
    }
    v26 = v25 < *(_WORD *)v23 ? -1 : 1;
  }
  else
  {
LABEL_34:
    v26 = 0;
  }
  if ( v26 )
LABEL_36:
    i = (_QWORD *)a1[1];
  if ( i == v11 )
  {
    std::_Xout_of_range("invalid unordered_map<K, T> key");
    __debugbreak();
  }
  return i + 6;
}
