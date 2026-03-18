/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1C02C1A78
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C0127230 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C00547CC (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlAreRawModesEnabled @ 0x1C00DB678 (BmlAreRawModesEnabled.c)
 *     BmlIsSupportedSourceMode @ 0x1C00DC114 (BmlIsSupportedSourceMode.c)
 *     BmlCompareRegionsWithPivot @ 0x1C00DC3AC (BmlCompareRegionsWithPivot.c)
 *     BmlGetModeCategoryForRegion @ 0x1C00DD2E8 (BmlGetModeCategoryForRegion.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r13
  unsigned __int16 v6; // di
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  _QWORD *v14; // rcx
  _QWORD *v15; // rbp
  UINT v16; // r14d
  UINT v17; // eax
  UINT v18; // r15d
  __int64 v19; // rax
  const struct DMMVIDPNSOURCEMODE *v20; // rdi
  __int64 v21; // rax
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  _QWORD *v28; // rax
  struct _D3DKMDT_2DREGION v30; // [rsp+20h] [rbp-58h] BYREF
  char v31; // [rsp+80h] [rbp+8h]
  unsigned __int16 v32; // [rsp+88h] [rbp+10h]

  v32 = a2;
  v5 = a3;
  v6 = a2;
  if ( !a1 || (unsigned __int16)a2 >= *a1 || !a3 || !a4 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    v9 = WdLogNewEntry5_WdAssertion(0x20000000020000LL, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(_QWORD *)(v5 + 88);
  v11 = *(_QWORD *)(v10 + 104);
  if ( !v11 )
  {
    v12 = 0LL;
LABEL_11:
    v13 = -1071774968;
    goto LABEL_36;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 96));
  v12 = *(_QWORD **)(v10 + 104);
  if ( !v12 )
    goto LABEL_11;
  v14 = v12 + 6;
  v15 = (_QWORD *)v12[6];
  if ( v15 == v12 + 6 )
  {
    v13 = -1071774970;
    goto LABEL_36;
  }
  v16 = *(_DWORD *)(a4 + 152);
  v17 = *(_DWORD *)(a4 + 156);
  LOBYTE(a2) = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  v31 = a2;
  if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
  {
    v18 = *(_DWORD *)(a4 + 152);
    v30.cx = v18;
    v16 = v17;
    v30.cy = v17;
  }
  else
  {
    v18 = *(_DWORD *)(a4 + 156);
    v30.cx = v18;
    v30.cy = v16;
  }
  v19 = v6;
  v20 = 0LL;
  v21 = 104 * v19;
  if ( v15 == v14 )
    goto LABEL_35;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v15 - 1);
  if ( !NextMode )
    goto LABEL_35;
  v23 = v21;
  do
  {
    if ( BmlIsSupportedSourceMode(NextMode, 1, 1)
      && (BmlAreRawModesEnabled((__int64)a1, v32)
       || (unsigned int)BmlGetModeCategoryForRegion((int *)NextMode + 19, &a1[v23 + 36]) != 1) )
    {
      if ( v20 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v20 + 76),
                             &v30) != 1 )
          goto LABEL_29;
        if ( *((_DWORD *)v20 + 19) == v18 && *((_DWORD *)v20 + 20) == v16 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v25, v24);
          WdLogEvent5_WdAssertion(v26);
        }
      }
      v20 = NextMode;
    }
LABEL_29:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode((DMMVIDPNSOURCEMODESET *)v12, NextMode);
  }
  while ( NextMode );
  v5 = a3;
  if ( v20 )
  {
    if ( v31 )
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v20 + 20);
      v27 = *((_DWORD *)v20 + 19);
    }
    else
    {
      *(_DWORD *)(a4 + 160) = *((_DWORD *)v20 + 19);
      v27 = *((_DWORD *)v20 + 20);
    }
    *(_DWORD *)(a4 + 164) = v27;
    v13 = 0;
    goto LABEL_36;
  }
LABEL_35:
  v28 = (_QWORD *)WdLogNewEntry5_WdError(v14, a2, a3);
  v13 = -1071774970;
  v28[3] = v18;
  v28[4] = v16;
  v28[5] = v5;
  v28[6] = -1071774970LL;
  WdLogEvent5_WdError(v28);
LABEL_36:
  if ( v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 11), a2, a3);
  return v13;
}
