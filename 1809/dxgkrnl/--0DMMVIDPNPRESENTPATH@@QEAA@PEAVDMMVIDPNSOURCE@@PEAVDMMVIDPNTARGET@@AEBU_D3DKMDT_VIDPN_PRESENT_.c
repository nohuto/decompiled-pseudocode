/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0002C44
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00BB28C (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0002E30 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C0002E64 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C0005F74 (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C000611C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000A71C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C000B328 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C000F840 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000F980 (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C004E5A8 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00D9FDC (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  int v8; // eax
  __int64 v9; // rsi
  int v10; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING Scaling; // edx
  int v12; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v14; // eax
  int v15; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  DXGK_GAMMA_RAMP *v19; // rax
  DXGK_GAMMA_RAMP *v20; // rsi
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // r14
  _QWORD *v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 Content; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 5) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *(_QWORD *)this = &DMMVIDPNPRESENTPATH::`vftable'{for `SetElement'};
  *((_QWORD *)this + 3) = &DMMVIDPNPRESENTPATH::`vftable'{for `SignedWithClassSignature<DMMVIDPNPRESENTPATH>'};
  *((_QWORD *)this + 5) = &DMMVIDPNPRESENTPATH::`vftable'{for `ContainedBy<DMMVIDPNTOPOLOGY>'};
  *((_QWORD *)this + 7) = &DMMVIDPNSOURCE::`vftable'{for `FallibleConstruction'};
  *((_QWORD *)this + 9) = &DMMVIDPNPRESENTPATH::`vftable'{for `NonReferenceCounted'};
  *((_DWORD *)this + 28) = 254;
  *((_DWORD *)this + 29) = 254;
  *((_QWORD *)this + 11) = a2;
  *((_QWORD *)this + 12) = a3;
  *((_DWORD *)this + 41) = 255;
  *((_DWORD *)this + 20) = 1;
  if ( !a2 )
  {
    v17 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a3 )
  {
    v18 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v18);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v19 = (DXGK_GAMMA_RAMP *)operator new(0x30uLL, 0x4B677844u, PagedPool);
    v20 = v19;
    if ( v19 )
    {
      *((_WORD *)v19 + 20) = 0;
      *((_QWORD *)v19 + 3) = 0LL;
      *((_QWORD *)v19 + 4) = 0LL;
      *(_QWORD *)v19 = &ReferenceCounted::`vftable';
      *(_QWORD *)v19 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v19 + 2) = 1;
      *((_DWORD *)v19 + 4) = 1;
    }
    else
    {
      v20 = 0LL;
    }
    if ( !v20 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdLowResource();
      v21[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v21[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v21[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v22 = DXGK_GAMMA_RAMP::Initialize(v20, &a4->GammaRamp);
    v23 = v22;
    if ( v22 < 0 )
    {
      ReferenceCounted::Release(v20);
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v24[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v24[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v24[5] = v23;
      *((_DWORD *)this + 16) = v23;
      return this;
    }
    *((_QWORD *)this + 23) = v20;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v8 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v9 = v8;
  if ( v8 < 0 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdError();
    v25[3] = a4->CopyProtection.CopyProtectionType;
    v25[4] = this;
    v25[5] = v9;
    WdLogEvent5_WdError(v25);
LABEL_27:
    *((_DWORD *)this + 16) = v9;
    return this;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(this, &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v10 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v9 = v10;
  if ( v10 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->Content;
LABEL_26:
    v26[3] = Content;
    v26[4] = *((unsigned int *)a2 + 6);
    v26[5] = *((unsigned int *)a3 + 6);
    v26[6] = v9;
    goto LABEL_27;
  }
  Scaling = a4->ContentTransformation.Scaling;
  if ( Scaling != D3DKMDT_VPPS_UNPINNED )
  {
    v12 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling);
    v9 = v12;
    if ( v12 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_26;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v14 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v9 = v14;
    if ( v14 < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_26;
    }
  }
  v15 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, a4->ImportanceOrdinal);
  v9 = v15;
  if ( v15 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->ImportanceOrdinal;
    goto LABEL_26;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
