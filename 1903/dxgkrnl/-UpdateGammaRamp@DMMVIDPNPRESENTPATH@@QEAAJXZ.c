/*
 * XREFs of ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C0124574
 * Callers:
 *     ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0123E44 (-DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C01261FC (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C00043DC (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C000D1C4 (-SetGammaRamp@DMMVIDPNPRESENTPATH@@QEAAXPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D24C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C000D294 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ColorSpaceTransformCombine @ 0x1C0058D2C (ColorSpaceTransformCombine.c)
 *     ?IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ @ 0x1C0124B28 (-IsDefaultGammaRamp@DXGK_GAMMA_RAMP@@QEBAEXZ.c)
 *     ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C0243B54 (-GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::UpdateGammaRamp(DMMVIDPNPRESENTPATH *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  const void **DefaultColorSpaceTransform; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  DXGGLOBAL *Global; // rax
  const struct DXGK_GAMMA_RAMP *v30; // rdx
  size_t *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  size_t *v36; // rbx
  __int64 v37; // rax
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  _QWORD *v43; // rax
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v50; // [rsp+50h] [rbp+8h] BYREF

  LODWORD(v4) = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 11) + 96LL);
  v6 = *(_QWORD *)(v5 + 128);
  if ( v6 && !IsValidGammaRamp((const struct _D3DKMDT_GAMMA_RAMP *)(v6 + 16)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, v5);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v9 = *(_QWORD *)(v8 + 40);
  if ( !v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, v5);
    WdLogEvent5_WdAssertion(v10);
    v9 = *(_QWORD *)(v8 + 40);
  }
  v11 = *(_QWORD *)(v9 + 88);
  v12 = *(_QWORD *)(v11 + 8);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, v5);
    WdLogEvent5_WdAssertion(v13);
    v12 = *(_QWORD *)(v11 + 8);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v12 + 16) + 2560LL) && v6 && DXGK_GAMMA_RAMP::IsDefaultGammaRamp((DXGK_GAMMA_RAMP *)v6) )
    v6 = 0LL;
  DefaultColorSpaceTransform = 0LL;
  v15 = *(_QWORD *)(*((_QWORD *)this + 12) + 96LL);
  v16 = *(_QWORD *)(v15 + 40);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, v5);
    WdLogEvent5_WdAssertion(v17);
    v16 = *(_QWORD *)(v15 + 40);
  }
  v18 = *(_QWORD *)(v16 + 88);
  v19 = *(_QWORD *)(v18 + 8);
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this, v5);
    WdLogEvent5_WdAssertion(v20);
    v19 = *(_QWORD *)(v18 + 8);
  }
  v21 = *(_QWORD *)(v19 + 16);
  if ( v6 && (*(_DWORD *)(v21 + 1896) & 0x18) != 0 )
  {
    v22 = *((_QWORD *)this + 12);
    v23 = 4;
    v24 = *(_QWORD *)(v22 + 104);
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 96));
      v25 = *(_QWORD *)(v22 + 104);
    }
    else
    {
      v25 = 0LL;
    }
    v26 = *(_QWORD *)(v25 + 144);
    v50 = v25;
    if ( v26 )
      v23 = *(_DWORD *)(v26 + 136);
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v50, 0LL);
    if ( (v23 == 12 || v23 == 32) && (*(_DWORD *)(v21 + 1896) & 0x10) != 0
      || v23 == 30 && (*(_DWORD *)(v21 + 1896) & 8) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v28, v27);
      DefaultColorSpaceTransform = (const void **)DXGGLOBAL::GetDefaultColorSpaceTransform(Global);
    }
  }
  if ( !DefaultColorSpaceTransform )
  {
    v30 = (const struct DXGK_GAMMA_RAMP *)v6;
LABEL_33:
    DMMVIDPNPRESENTPATH::SetGammaRamp(this, v30, a3);
    return (unsigned int)v4;
  }
  if ( !v6 )
  {
    v30 = (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform;
    goto LABEL_33;
  }
  v31 = (size_t *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v36 = v31;
  if ( v31 )
  {
    *((_WORD *)v31 + 20) = 0;
    *v31 = (size_t)&ReferenceCounted::`vftable';
    *v31 = (size_t)&DXGK_GAMMA_RAMP::`vftable';
    *((_DWORD *)v31 + 2) = 1;
    *((_DWORD *)v31 + 4) = 1;
    v31[3] = 0LL;
    v31[4] = 0LL;
  }
  else
  {
    v36 = 0LL;
  }
  if ( v36 )
  {
    v39 = DXGK_GAMMA_RAMP::Initialize(v36, 4LL, 0LL);
    v4 = v39;
    if ( v39 >= 0 )
    {
      v44 = ColorSpaceTransformCombine(DefaultColorSpaceTransform + 2, (int *)(v6 + 16), (__int64)(v36 + 2));
      v4 = v44;
      if ( v44 >= 0 )
        goto LABEL_44;
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v46, v45, v38);
      v43[3] = v4;
    }
    else
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40, v42);
      v43[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v43[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v43[5] = v4;
    }
    WdLogEvent5_WdError(v43);
    goto LABEL_44;
  }
  v37 = WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
  *(_QWORD *)(v37 + 24) = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
  *(_QWORD *)(v37 + 32) = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
  WdLogEvent5_WdLowResource(v37);
  LODWORD(v4) = -1073741801;
LABEL_44:
  if ( (int)v4 >= 0 )
    DefaultColorSpaceTransform = (const void **)v36;
  DMMVIDPNPRESENTPATH::SetGammaRamp(this, (const struct DXGK_GAMMA_RAMP *)DefaultColorSpaceTransform, v38);
  if ( v36 )
    ReferenceCounted::Release((ReferenceCounted *)v36, v47, v48);
  return (unsigned int)v4;
}
