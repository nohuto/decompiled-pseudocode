/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D386C
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C00D1EA8 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D34E0 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C0005CB4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0005EC4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1C0005F0C (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0005F74 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000F554 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C000F5E8 (-IsDisplayOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ @ 0x1C004E1E4 (-GetContainingVideoPresentTargetSet@DMMVIDEOPRESENTTARGET@@QEBAPEAVDMMVIDEOPRESENTTARGETSET@@XZ.c)
 *     ColorSpaceTransformCombine @ 0x1C005235C (ColorSpaceTransformCombine.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C00D3FAC (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C020FB2C (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this)
{
  __int64 v2; // r14
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  struct DMMVIDEOPRESENTTARGETSET *ContainingVideoPresentTargetSet; // rax
  DXGADAPTER *ContainingAdapter; // rax
  const struct DXGK_GAMMA_RAMP *DefaultColorSpaceTransform; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  struct DMMVIDEOPRESENTTARGETSET *v11; // rax
  struct DXGADAPTER *v12; // rax
  struct DXGADAPTER *v13; // r15
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  DXGGLOBAL *Global; // rax
  const struct DXGK_GAMMA_RAMP *v21; // rdx
  size_t *v22; // rax
  __int64 v23; // rcx
  size_t *v24; // rbx
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v32; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v2) = 0;
  v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 11) + 96LL) + 128LL);
  if ( v3 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v3 + 16)) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v5);
  }
  ContainingVideoPresentTargetSet = DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12) + 96LL));
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*((VIDPN_MGR **)ContainingVideoPresentTargetSet + 11));
  if ( !DXGADAPTER::IsDisplayOnlyAdapter(ContainingAdapter)
    && v3
    && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v3) )
  {
    v3 = 0LL;
  }
  DefaultColorSpaceTransform = 0LL;
  if ( !v3 || *(_DWORD *)(v3 + 16) != 4 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
    DefaultColorSpaceTransform = *(const struct DXGK_GAMMA_RAMP **)(v9 + 536);
    if ( DefaultColorSpaceTransform )
    {
      if ( *((_DWORD *)DefaultColorSpaceTransform + 4) != 4
        || *((_QWORD *)DefaultColorSpaceTransform + 3) != 49204LL
        || !*((_QWORD *)DefaultColorSpaceTransform + 4) )
      {
        v10 = WdLogNewEntry5_WdAssertion(v9);
        WdLogEvent5_WdAssertion(v10);
      }
    }
  }
  v11 = DMMVIDEOPRESENTTARGET::GetContainingVideoPresentTargetSet(*(DMMVIDEOPRESENTTARGET **)(*((_QWORD *)this + 12)
                                                                                            + 96LL));
  v12 = VIDPN_MGR::GetContainingAdapter(*((VIDPN_MGR **)v11 + 11));
  v13 = v12;
  if ( v3 )
  {
    if ( DefaultColorSpaceTransform )
      goto LABEL_31;
    if ( (*((_DWORD *)v12 + 468) & 0x18) == 0 )
      goto LABEL_30;
    v14 = *((_QWORD *)this + 12);
    v15 = 4;
    v16 = *(_QWORD *)(v14 + 104);
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 96));
      v17 = *(_QWORD *)(v14 + 104);
    }
    else
    {
      v17 = 0LL;
    }
    v18 = *(_QWORD *)(v17 + 144);
    v32 = v17;
    if ( v18 )
      v15 = *(_DWORD *)(v18 + 136);
    if ( (auto_rc<DMMVIDPNTARGETMODESET>::reset(&v32, 0LL), v15 != 12) && v15 != 32
      || (*((_DWORD *)v13 + 468) & 0x10) == 0 )
    {
      if ( v15 != 30 || (*((_DWORD *)v13 + 468) & 8) == 0 )
        goto LABEL_30;
    }
    Global = DXGGLOBAL::GetGlobal(v19);
    DefaultColorSpaceTransform = DXGGLOBAL::GetDefaultColorSpaceTransform(Global);
  }
  if ( !DefaultColorSpaceTransform )
  {
LABEL_30:
    v21 = (const struct DXGK_GAMMA_RAMP *)v3;
LABEL_33:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, v21);
    return (unsigned int)v2;
  }
LABEL_31:
  if ( !v3 )
  {
    v21 = DefaultColorSpaceTransform;
    goto LABEL_33;
  }
  v22 = (size_t *)operator new(0x30uLL, 0x4B677844u, PagedPool);
  v24 = v22;
  if ( v22 )
  {
    *((_WORD *)v22 + 20) = 0;
    *v22 = (size_t)&ReferenceCounted::`vftable';
    v23 = 1LL;
    *((_DWORD *)v22 + 2) = 1;
    *v22 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v22 + 4) = 1;
    v22[3] = 0LL;
    v22[4] = 0LL;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v24 )
  {
    v26 = DXGK_GAMMA_RAMP::Initialize(v24, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
    v2 = v26;
    if ( v26 >= 0 )
    {
      v29 = ColorSpaceTransformCombine(*((char **)DefaultColorSpaceTransform + 4), (int *)(v3 + 16), (_DWORD *)v24[4]);
      v2 = v29;
      if ( v29 >= 0 )
        goto LABEL_44;
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v28[3] = v2;
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v28[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v28[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v28[5] = v2;
    }
    WdLogEvent5_WdError(v28);
    goto LABEL_44;
  }
  v25 = WdLogNewEntry5_WdLowResource(v23);
  *(_QWORD *)(v25 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  *(_QWORD *)(v25 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdLowResource(v25);
  LODWORD(v2) = -1073741801;
LABEL_44:
  if ( (int)v2 >= 0 )
    DefaultColorSpaceTransform = (const struct DXGK_GAMMA_RAMP *)v24;
  DMMVIDPNPRESENTPATH::SetGammaRamp(this, DefaultColorSpaceTransform);
  if ( v24 )
    ReferenceCounted::Release((ReferenceCounted *)v24);
  return (unsigned int)v2;
}
