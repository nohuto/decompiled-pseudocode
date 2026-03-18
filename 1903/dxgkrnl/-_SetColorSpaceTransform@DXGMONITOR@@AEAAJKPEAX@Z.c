/*
 * XREFs of ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C0128998
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C0127980 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000CF44 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C000D318 (-GetSizeFromGammaRampType@@YA_KW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 *     ColorSpaceTransformConvert @ 0x1C000D914 (ColorSpaceTransformConvert.c)
 *     ?DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0128E18 (-DmmUpdateGammaRampOnVidPnTarget@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0128F18 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C012939C (-_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_SetColorSpaceTransform(DXGMONITOR *this, __int64 a2, int *a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rsi
  int MostCapableColorSpaceTransform; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  bool v28; // zf
  __int64 v29; // rbp
  enum _D3DDDI_GAMMARAMP_TYPE v30; // eax
  char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  ReferenceCounted *v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rdx
  ReferenceCounted *v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  int v59; // [rsp+20h] [rbp-48h]
  struct _D3DKMDT_GAMMA_RAMP v60; // [rsp+30h] [rbp-38h] BYREF
  enum _D3DDDI_GAMMARAMP_TYPE v61; // [rsp+70h] [rbp+8h] BYREF
  ReferenceCounted *v62; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *((_QWORD *)this + 4);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
    v7 = *((_QWORD *)this + 4);
  }
  v9 = *(_QWORD *)(v7 + 8);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !*(_QWORD *)(v9 + 16) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  v61 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v12 = 0LL;
  v62 = 0LL;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_EnableDisplayColorManagementApi__private_propertyCache,
    19574848LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E250,
    1,
    v59);
  MostCapableColorSpaceTransform = DXGMONITOR::_GetMostCapableColorSpaceTransform(this, &v61);
  v17 = MostCapableColorSpaceTransform;
  if ( MostCapableColorSpaceTransform < 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v17;
    goto LABEL_11;
  }
  if ( v4 < 0x18040 )
  {
    LODWORD(v17) = -1073741789;
    return (unsigned int)v17;
  }
  if ( *((_DWORD *)this + 187) != *a3 )
  {
    LODWORD(v17) = -1073741811;
    v21 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v21 + 24) = *a3;
    v22 = *((int *)this + 187);
LABEL_16:
    *(_QWORD *)(v21 + 32) = v22;
LABEL_17:
    WdLogEvent5_WdWarning(v21);
    return (unsigned int)v17;
  }
  v23 = *((_DWORD *)this + 188);
  v24 = 0;
  v25 = (unsigned __int8)v23 >> 2;
  if ( (unsigned __int8)v23 >> 2 && !a3[1]
    || (v25 = (v23 >> 8) & 0x3F, ((v23 >> 8) & 0x3F) != 0) && a3[1] == 1
    || (v25 = (v23 >> 14) & 0x3F, ((v23 >> 14) & 0x3F) != 0) && a3[1] == 2
    || (v25 = (v23 >> 20) & 0x3F, ((v23 >> 20) & 0x3F) != 0) && a3[1] == 3 )
  {
    v24 = v25;
  }
  else
  {
    v26 = v23 >> 26;
    if ( v26 && a3[1] == 4 )
      v24 = v26;
  }
  v27 = v24 - 1;
  if ( (_DWORD)v27 )
  {
    v27 = (unsigned int)(v27 - 1);
    if ( (_DWORD)v27 )
    {
      v27 = (unsigned int)(v27 - 2);
      if ( (_DWORD)v27 )
      {
        v27 = (unsigned int)(v27 - 4);
        if ( (_DWORD)v27 )
        {
          v27 = (unsigned int)(v27 - 8);
          if ( (_DWORD)v27 )
          {
            if ( (_DWORD)v27 != 16 )
            {
LABEL_43:
              LODWORD(v17) = -1073741811;
              v21 = WdLogNewEntry5_WdWarning(v27, v25, v16);
              *(_QWORD *)(v21 + 24) = a3[1];
              v22 = (unsigned int)a3[2];
              goto LABEL_16;
            }
            v28 = a3[2] == 16;
          }
          else
          {
            v28 = a3[2] == 14;
          }
        }
        else
        {
          v28 = a3[2] == 12;
        }
      }
      else
      {
        v28 = a3[2] == 10;
      }
    }
    else
    {
      v28 = a3[2] == 8;
    }
  }
  else
  {
    v28 = a3[2] == 6;
  }
  if ( !v28 )
    goto LABEL_43;
  v29 = v61;
  v30 = a3[3];
  if ( v61 < D3DDDI_GAMMARAMP_MATRIX_3x4 && v30 != v61 && (v61 == D3DDDI_GAMMARAMP_DXGI_1 || v30 > v61) )
  {
    LODWORD(v17) = -1073741811;
    v21 = WdLogNewEntry5_WdWarning(v27, v25, v16);
    *(_QWORD *)(v21 + 24) = a3[3];
    *(_QWORD *)(v21 + 32) = v29;
    goto LABEL_17;
  }
  v31 = (char *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v12 = v31;
  if ( v31 )
  {
    *((_WORD *)v31 + 20) = 0;
    *((_QWORD *)v31 + 3) = 0LL;
    *((_QWORD *)v31 + 4) = 0LL;
    *(_QWORD *)v31 = &ReferenceCounted::`vftable';
    *(_QWORD *)v31 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v31 + 2) = 1;
    *((_DWORD *)v31 + 4) = 1;
  }
  else
  {
    v12 = 0LL;
  }
  if ( !v12 )
  {
    v36 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
    *(_QWORD *)(v36 + 24) = a3;
    WdLogEvent5_WdLowResource(v36);
    LODWORD(v17) = -1073741801;
    return (unsigned int)v17;
  }
  LODWORD(v17) = DXGK_GAMMA_RAMP::Initialize((size_t *)v12, (unsigned int)v29, 0LL);
  if ( (int)v17 >= 0 )
  {
    v40 = (unsigned int)a3[3];
    *(_QWORD *)&v60.Type = (unsigned int)v40;
    v60.DataSize = GetSizeFromGammaRampType(v40, v37, v39);
    v60.Data.pRgb256x3x16 = (D3DDDI_GAMMA_RAMP_RGB256x3x16 *)(a3 + 4);
    LODWORD(v17) = ColorSpaceTransformConvert(&v60, (struct _D3DKMDT_GAMMA_RAMP *)(v12 + 16));
    if ( (int)v17 >= 0 )
    {
      v44 = DXGMONITOR::_CombineDXGIGammaRamp(this, (struct DXGK_GAMMA_RAMP *)v12, &v62);
      v48 = v62;
      LODWORD(v17) = v44;
      if ( v44 >= 0 )
      {
        if ( !v62 )
        {
          v50 = WdLogNewEntry5_WdAssertion(v46, v45);
          WdLogEvent5_WdAssertion(v50);
        }
        LODWORD(v17) = DmmUpdateGammaRampOnVidPnTarget(
                         *(void *const *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL),
                         *((_DWORD *)this + 11),
                         v48);
        if ( this == (DXGMONITOR *)-1144LL )
        {
          v53 = WdLogNewEntry5_WdAssertion(v52, v51);
          WdLogEvent5_WdAssertion(v53);
        }
        KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1144));
        if ( (int)v17 >= 0 )
        {
          v55 = (ReferenceCounted *)*((_QWORD *)this + 150);
          if ( v55 )
            ReferenceCounted::Release(v55, v54, v56);
          *((_QWORD *)this + 150) = v12;
        }
        if ( this == (DXGMONITOR *)-1144LL )
        {
          v57 = WdLogNewEntry5_WdAssertion(v55, v54);
          WdLogEvent5_WdAssertion(v57);
        }
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1144));
      }
      else
      {
        v49 = WdLogNewEntry5_WdWarning(v46, v45, v47);
        WdLogEvent5_WdWarning(v49);
      }
      if ( v48 )
        ReferenceCounted::Release(v48, v19, v20);
      goto LABEL_73;
    }
    v18 = WdLogNewEntry5_WdWarning(v42, v41, v43);
  }
  else
  {
    v18 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v18 + 24) = a3;
  }
LABEL_11:
  WdLogEvent5_WdWarning(v18);
LABEL_73:
  if ( (int)v17 < 0 && v12 )
    ReferenceCounted::Release((ReferenceCounted *)v12, v19, v20);
  return (unsigned int)v17;
}
