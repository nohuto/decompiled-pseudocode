/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1C00D7494
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AFA74 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1C00D6368 (BmlFunctionalizePath.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C00051F4 (DxgkLogCodePointPacket.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x1C000651C (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000718C (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00AFA38 (BmlAreRawModesEnabled.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1C00D76C4 (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1C00D784C (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlCompareSourceModes @ 0x1C00D7880 (BmlCompareSourceModes.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbp
  unsigned __int16 v8; // r14
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 BitsPerPixel; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+60h] [rbp+8h]

  v6 = 0LL;
  v8 = a3;
  if ( !a4 )
  {
    v30 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !a6 )
  {
    v31 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v31);
  }
  if ( !a2 )
  {
    v32 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v32);
  }
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v14 = a5;
  v15 = 0LL;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a5;
  v16 = 104LL * v8;
  *a6 = -1;
  if ( a5 == -1
    || (v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a4 + 24, a5)) != 0
    && (unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v8) )
  {
    v17 = 0LL;
    *(_QWORD *)(v16 + a1 + 92) = 0LL;
    v18 = *(_QWORD *)(a4 + 48);
    v35 = a4 + 48;
    if ( v18 == a4 + 48 )
      return 3223192326LL;
    v19 = v18 - 8;
    if ( !v19 )
      return 3223192326LL;
    do
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v14, v12, v13);
      v20[3] = *(unsigned int *)(v19 + 24);
      v20[4] = *(unsigned int *)(v19 + 76);
      v20[5] = *(unsigned int *)(v19 + 80);
      BitsPerPixel = (unsigned int)DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v19);
      v20[6] = BitsPerPixel;
      v24 = *(int *)(v19 + 96);
      v20[7] = v24;
      ++*(_DWORD *)(v16 + a1 + 92);
      if ( v15 == v19
        || !BmlAreRawModesEnabled(a1, v8) && (unsigned int)BmlCompareModeExtents(v19 + 76, v16 + a1 + 36) == 1
        || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, v8)
        || (v29 = *(_QWORD *)(v16 + a1 + 16), *(_BYTE *)(v29 + 129))
        && (*(_DWORD *)v29 & 0x20008) == 0x20000LL
        && *(_DWORD *)(v19 + 96) != 21 )
      {
        WdLogNewEntry5_WdTrace(BitsPerPixel, v24, v22, v23);
      }
      else
      {
        ++*(_DWORD *)(v16 + a1 + 96);
        if ( (unsigned int)BmlCompareSourceModes(a1, a2, v8, v19, (__int64)v6) == 1
          && (!v15 || (unsigned int)BmlCompareSourceModes(a1, a2, v8, v19, v15) == -1) )
        {
          WdLogNewEntry5_WdTrace(v17, v14, v12, v13);
          v6 = (_DWORD *)v19;
        }
      }
      v25 = *(_QWORD *)(v19 + 8);
      v19 = v25 - 8;
      if ( v25 == v35 )
        v19 = 0LL;
    }
    while ( v19 );
    if ( v6 )
    {
      v26 = *(_QWORD *)(a2 + 48);
      *a6 = v6[6];
      v27 = *(_QWORD *)(v26 + 8);
      if ( !v27 )
      {
        v34 = WdLogNewEntry5_WdAssertion(a6);
        WdLogEvent5_WdAssertion(v34);
        v27 = *(_QWORD *)(v26 + 8);
      }
      DxgkLogCodePointPacket(0x20u, v8, v6[19], v6[20], *(_QWORD *)(*(_QWORD *)(v27 + 16) + 276LL));
      return 0LL;
    }
    else
    {
      return 3223192326LL;
    }
  }
  else
  {
    WdLogNewEntry5_WdTrace(v33, v14, v12, v13);
    return 3223192336LL;
  }
}
