/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D38B4
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D3184 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C012B8B4 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000265C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00026A4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0002BA0 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00044DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0058D6C (ColorSpaceTransformCombine.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C00D2804 (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C02441D4 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  const void **DefaultColorSpaceTransform; // r14
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // r15d
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  DXGGLOBAL *Global; // rax
  const struct DXGK_GAMMA_RAMP *v28; // rdx
  DXGK_GAMMA_RAMP *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  DXGK_GAMMA_RAMP *v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v48; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(*((_QWORD *)this + 11) + 96LL);
  v4 = *(_QWORD *)(v3 + 128);
  if ( v4 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v4 + 16)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v7 = *(_QWORD *)(v6 + 40);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v8);
    v7 = *(_QWORD *)(v6 + 40);
  }
  v9 = *(_QWORD *)(v7 + 88);
  v10 = *(_QWORD *)(v9 + 8);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v11);
    v10 = *(_QWORD *)(v9 + 8);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 2560LL) && v4 && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v4) )
    v4 = 0LL;
  DefaultColorSpaceTransform = 0LL;
  v13 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v14 = *(_QWORD *)(v13 + 40);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v15);
    v14 = *(_QWORD *)(v13 + 40);
  }
  v16 = *(_QWORD *)(v14 + 88);
  v17 = *(_QWORD *)(v16 + 8);
  if ( !v17 )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, v3);
    WdLogEvent5_WdAssertion(v18);
    v17 = *(_QWORD *)(v16 + 8);
  }
  v19 = *(_QWORD *)(v17 + 16);
  if ( v4 && (*(_DWORD *)(v19 + 1896) & 0x18) != 0 )
  {
    v20 = *((_QWORD *)this + 12);
    v21 = 4;
    v22 = *(_QWORD *)(v20 + 104);
    if ( v22 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
      v23 = *(_QWORD *)(v20 + 104);
    }
    else
    {
      v23 = 0LL;
    }
    v24 = *(_QWORD *)(v23 + 144);
    v48 = v23;
    if ( v24 )
      v21 = *(_DWORD *)(v24 + 136);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v48, 0LL);
    if ( (v21 == 12 || v21 == 32) && (*(_DWORD *)(v19 + 1896) & 0x10) != 0
      || v21 == 30 && (*(_DWORD *)(v19 + 1896) & 8) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v26, v25);
      DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global);
    }
  }
  if ( !DefaultColorSpaceTransform )
  {
    v28 = (const struct DXGK_GAMMA_RAMP *)v4;
LABEL_33:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, v28);
    return (unsigned int)v2;
  }
  if ( !v4 )
  {
    v28 = (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform;
    goto LABEL_33;
  }
  v29 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v34 = v29;
  if ( v29 )
  {
    *((_WORD *)v29 + 20) = 0;
    *(_QWORD *)v29 = &ReferenceCounted::`vftable';
    *(_QWORD *)v29 = &DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v29 + 2) = 1;
    *((_DWORD *)v29 + 4) = 1;
    *((_QWORD *)v29 + 3) = 0LL;
    *((_QWORD *)v29 + 4) = 0LL;
  }
  else
  {
    v34 = 0LL;
  }
  if ( v34 )
  {
    v36 = DXGK_GAMMA_RAMP::Initialize(v34, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    v2 = v36;
    if ( v36 >= 0 )
    {
      v41 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v4 + 16), (__int64)v34 + 16);
      v2 = v41;
      if ( v41 >= 0 )
        goto LABEL_44;
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42, v44);
      v40[3] = v2;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v38, v37, v39);
      v40[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v40[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v40[5] = v2;
    }
    WdLogEvent5_WdError(v40);
    goto LABEL_44;
  }
  v35 = WdLogNewEntry5_WdLowResource(v31, v30, v32, v33);
  *(_QWORD *)(v35 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  *(_QWORD *)(v35 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdLowResource(v35);
  LODWORD(v2) = -1073741801;
LABEL_44:
  if ( (int)v2 >= 0 )
    DefaultColorSpaceTransform = (const void **)v34;
  DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform);
  if ( v34 )
    ReferenceCounted::Release(v34, v45, v46);
  return (unsigned int)v2;
}
