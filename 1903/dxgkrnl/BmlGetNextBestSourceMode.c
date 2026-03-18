/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00DB424
 * Callers:
 *     BmlFunctionalizePath @ 0x1C00D2718 (BmlFunctionalizePath.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00DD958 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002D34 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x1C00039F0 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x1C0005B78 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00DB7C4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C00DB7F8 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00DB9EC (BmlDoesSourceModeObeyConstraint.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rdx
  _QWORD *v20; // rsi
  int v21; // eax
  __int64 v22; // rcx
  unsigned int BitsPerPixel; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rax
  int v28; // r10d
  __int64 *v29; // rsi
  bool v30; // bp
  __int64 v31; // r10
  __int64 v32; // rax
  unsigned __int16 v33; // bp
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+70h] [rbp+8h]

  if ( !a4 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v41);
  }
  if ( !a6 )
  {
    v42 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !a2 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v43);
  }
  v10 = WdLogNewEntry5_WdTrace(a1, a2);
  v12 = a5;
  v13 = 0LL;
  *(_QWORD *)(v10 + 24) = a4;
  *(_QWORD *)(v10 + 32) = a5;
  v14 = 104LL * a3;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v44 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v13 = v44;
    if ( !v44 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, a3, v44) )
    {
      WdLogNewEntry5_WdTrace(v11, v12);
      return 3223192336LL;
    }
  }
  v15 = a4 + 48;
  *(_QWORD *)(v14 + a1 + 92) = 0LL;
  v16 = *(_QWORD *)(a4 + 48);
  v17 = 0LL;
  v49 = v15;
  if ( v16 == v15 )
    return 3223192326LL;
  v18 = v16 - 8;
  if ( !v18 )
    return 3223192326LL;
  do
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v12);
    v20[3] = *(unsigned int *)(v18 + 24);
    v20[4] = *(unsigned int *)(v18 + 76);
    v20[5] = *(unsigned int *)(v18 + 80);
    v21 = *(_DWORD *)(v18 + 72);
    v22 = (unsigned int)(v21 - 1);
    if ( (v22 & 0xFFFFFFFC) != 0 || v21 == 2 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v22, v19);
      WdLogEvent5_WdAssertion(v45);
    }
    BitsPerPixel = GetBitsPerPixel(*(_DWORD *)(v18 + 96));
    v26 = BitsPerPixel;
    if ( !BitsPerPixel )
    {
      v27 = WdLogNewEntry5_WdTrace(v25, v24);
      v25 = *(int *)(v18 + 96);
      *(_QWORD *)(v27 + 24) = v25;
    }
    v20[6] = v26;
    v20[7] = *(int *)(v18 + 96);
    ++*(_DWORD *)(v14 + a1 + 92);
    if ( v13 == v18 )
    {
LABEL_38:
      WdLogNewEntry5_WdTrace(v25, v24);
      v34 = a2;
      v33 = a3;
      goto LABEL_39;
    }
    v28 = *(_DWORD *)(a1 + 4);
    if ( (v28 & 0x20000) != 0
      || (*(_DWORD *)(a1 + 8) & 4) != 0
      || (v29 = *(__int64 **)(v14 + a1 + 16), (*v29 & 0x80000000000000LL) != 0) )
    {
      v29 = *(__int64 **)(v14 + a1 + 16);
    }
    else if ( (unsigned int)BmlCompareModeExtents(v18 + 76, v14 + a1 + 36) == 1 )
    {
      goto LABEL_38;
    }
    v25 = *v29;
    v30 = (v28 & 0x40000) == 0 && (*v29 & 0x18000000100LL) == 0;
    if ( (*v29 & 0x10000000100LL) != 0 )
    {
      if ( !*((_BYTE *)v29 + 128) )
        goto LABEL_21;
      v25 = *(unsigned int *)(v18 + 72);
      if ( (unsigned int)(v25 - 3) > 1 )
        goto LABEL_38;
LABEL_63:
      if ( (((_DWORD)v25 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v25 == 2 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v25, v24);
        WdLogEvent5_WdAssertion(v47);
      }
      goto LABEL_22;
    }
    if ( (v28 & 0x40000) != 0 )
    {
      v46 = *(_DWORD *)(v18 + 72);
      v25 = v46;
      if ( v46 != 1 && v46 != 3 && v46 != 4 )
        goto LABEL_38;
      goto LABEL_63;
    }
LABEL_21:
    if ( *(_DWORD *)(v18 + 72) != 1 )
      goto LABEL_38;
LABEL_22:
    if ( v30 )
    {
      v40 = *(_DWORD *)(v18 + 96);
      if ( v40 < 20 || v40 > 23 && v40 != 32 && v40 != 41 )
        goto LABEL_38;
    }
    v31 = *v29;
    if ( (*v29 & 0x4000000000LL) != 0 )
    {
      if ( (unsigned int)BmlCompareModeExtents(v14 + a1 + 52, v18 + 76) )
        goto LABEL_38;
    }
    if ( (v31 & 0x8000000100LL) != 0 )
    {
      v35 = *((_DWORD *)v29 + 29);
      if ( v35 )
      {
        if ( *(_DWORD *)(v18 + 96) != v35 )
          goto LABEL_38;
      }
    }
    if ( (v29[1] & 0x100) != 0
      && (*(_DWORD *)(v18 + 76) != *((_DWORD *)v29 + 24)
       || *(_DWORD *)(v18 + 80) != *((_DWORD *)v29 + 25)
       || *(_DWORD *)(v18 + 96) != *((_DWORD *)v29 + 29)) )
    {
      goto LABEL_38;
    }
    v32 = *(_QWORD *)(v14 + a1 + 16);
    if ( *(_BYTE *)(v32 + 129) )
    {
      if ( (*(_DWORD *)v32 & 0x20008) == 0x20000LL && *(_DWORD *)(v18 + 96) != 21 )
        goto LABEL_38;
    }
    v33 = a3;
    v34 = a2;
    ++*(_DWORD *)(v14 + a1 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, a3, v18, (__int64)v17) == 1
      && (!v13 || (unsigned int)BmlCompareSourceModes(a1, a2, a3, v18, v13) == -1) )
    {
      WdLogNewEntry5_WdTrace(v11, v12);
      v17 = (_DWORD *)v18;
    }
LABEL_39:
    v36 = *(_QWORD *)(v18 + 8);
    v18 = v36 - 8;
    if ( v36 == v49 )
      v18 = 0LL;
  }
  while ( v18 );
  if ( !v17 )
    return 3223192326LL;
  v37 = *(_QWORD *)(v34 + 48);
  *a6 = v17[6];
  v38 = *(_QWORD *)(v37 + 8);
  if ( !v38 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a6, v12);
    WdLogEvent5_WdAssertion(v48);
    v38 = *(_QWORD *)(v37 + 8);
  }
  DxgkLogCodePointPacket(0x20u, v33, v17[19], v17[20], *(_QWORD *)(*(_QWORD *)(v38 + 16) + 276LL));
  return 0LL;
}
