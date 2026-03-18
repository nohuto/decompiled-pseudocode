/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000ED50
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0132400 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000202C (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000265C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003F38 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005650 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000571C (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C000576C (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C0005C70 (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000EF28 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000EF5C (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00F5BB4 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
 */

DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
        DMMVIDPNPRESENTPATH *this,
        struct DMMVIDPNSOURCE *a2,
        struct DMMVIDPNTARGET *a3,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // r8
  __int64 Scaling; // rdx
  int v16; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v18; // eax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  DXGK_GAMMA_RAMP *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  DXGK_GAMMA_RAMP *v28; // rsi
  _QWORD *v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r14
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 Content; // rcx

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 8) = 1833173003;
  *((_QWORD *)this + 6) = 0LL;
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
    v21 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a3 )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v23 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
    v28 = v23;
    if ( v23 )
    {
      *((_WORD *)v23 + 20) = 0;
      *((_QWORD *)v23 + 3) = 0LL;
      *((_QWORD *)v23 + 4) = 0LL;
      *(_QWORD *)v23 = &ReferenceCounted::`vftable';
      *(_QWORD *)v23 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v23 + 2) = 1;
      *((_DWORD *)v23 + 4) = 1;
    }
    else
    {
      v28 = 0LL;
    }
    if ( !v28 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
      v29[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v29[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v29[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v30 = DXGK_GAMMA_RAMP::Initialize(v28, &a4->GammaRamp);
    v33 = v30;
    if ( v30 < 0 )
    {
      ReferenceCounted::Release(v28, v31, v32);
      v34 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v34[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v34[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v34[5] = v33;
      *((_DWORD *)this + 16) = v33;
      return this;
    }
    *((_QWORD *)this + 23) = v28;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v8 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v12 = v8;
  if ( v8 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v35[3] = a4->CopyProtection.CopyProtectionType;
    v35[4] = this;
    v35[5] = v12;
    WdLogEvent5_WdError(v35);
LABEL_27:
    *((_DWORD *)this + 16) = v12;
    return this;
  }
  *((_DWORD *)this + 44) = a4->CopyProtection.APSTriggerBits;
  DMMVIDPNPRESENTPATH::SetScalingSupport(
    (struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT *)this,
    &a4->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::SetRotationSupport(this, &a4->ContentTransformation.RotationSupport);
  v13 = DMMVIDPNPRESENTPATH::SetContentType(this, a4->Content);
  v12 = v13;
  if ( v13 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->Content;
LABEL_26:
    v36[3] = Content;
    v36[4] = *((unsigned int *)a2 + 6);
    v36[5] = *((unsigned int *)a3 + 6);
    v36[6] = v12;
    goto LABEL_27;
  }
  Scaling = (unsigned int)a4->ContentTransformation.Scaling;
  if ( (_DWORD)Scaling != 254 )
  {
    v16 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling, v14);
    v12 = v16;
    if ( v16 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_26;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v18 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v12 = v18;
    if ( v18 < 0 )
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace();
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_26;
    }
  }
  v19 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, (unsigned int)a4->ImportanceOrdinal, v14);
  v12 = v19;
  if ( v19 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdTrace();
    Content = a4->ImportanceOrdinal;
    goto LABEL_26;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
