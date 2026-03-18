/*
 * XREFs of ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C000E598
 * Callers:
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C012E888 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 * Callees:
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0003E38 (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005690 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C000575C (-SetScalingSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00057AC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z @ 0x1C000683C (-SetImportanceOrdinal@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D24C (-IsValidGammaRamp@@YAEAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z @ 0x1C000D888 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJAEBU_D3DKMDT_GAMMA_RAMP@@@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C000E770 (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE@@@Z @ 0x1C000E7A4 (-SetCopyProtectionScheme@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_.c)
 *     ?_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ @ 0x1C00F18B4 (-_SetIsSupportSetTargetPathProperties@DMMVIDPNPRESENTPATH@@AEAAXXZ.c)
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 Scaling; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION Rotation; // edx
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rax
  DXGK_GAMMA_RAMP *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  DXGK_GAMMA_RAMP *v36; // rsi
  _QWORD *v37; // rax
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r14
  __int64 v42; // rdx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
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
    v29 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !a3 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v30);
  }
  *((_QWORD *)this + 16) = a4->VisibleFromActiveTLOffset;
  *((_QWORD *)this + 17) = a4->VisibleFromActiveBROffset;
  *((_DWORD *)this + 36) = a4->VidPnTargetColorBasis;
  *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148) = a4->VidPnTargetColorCoeffDynamicRanges;
  if ( IsValidGammaRamp(&a4->GammaRamp) && a4->GammaRamp.Type != D3DDDI_GAMMARAMP_DEFAULT )
  {
    v31 = (DXGK_GAMMA_RAMP *)operator new[](0x30uLL, 0x4B677844u, PagedPool);
    v36 = v31;
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
      v36 = 0LL;
    }
    if ( !v36 )
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdLowResource(v33, v32, v34, v35);
      v37[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v37[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v37[5] = -1073741801LL;
      WdLogEvent5_WdLowResource(v37);
      *((_DWORD *)this + 16) = -1073741801;
      return this;
    }
    v38 = DXGK_GAMMA_RAMP::Initialize(v36, &a4->GammaRamp, v34);
    v41 = v38;
    if ( v38 < 0 )
    {
      ReferenceCounted::Release(v36, v39, v40);
      v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v43, v42);
      v44[3] = *(unsigned int *)(*((_QWORD *)this + 11) + 24LL);
      v44[4] = *(unsigned int *)(*((_QWORD *)this + 12) + 24LL);
      v44[5] = v41;
      *((_DWORD *)this + 16) = v41;
      return this;
    }
    *((_QWORD *)this + 23) = v36;
  }
  *((_DWORD *)this + 42) = a4->CopyProtection.CopyProtectionSupport;
  v8 = DMMVIDPNPRESENTPATH::SetCopyProtectionScheme(this, a4->CopyProtection.CopyProtectionType);
  v12 = v8;
  if ( v8 < 0 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v45[3] = a4->CopyProtection.CopyProtectionType;
    v45[4] = this;
    v45[5] = v12;
    WdLogEvent5_WdError(v45);
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
    v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    Content = a4->Content;
LABEL_26:
    v46[3] = Content;
    v46[4] = *((unsigned int *)a2 + 6);
    v46[5] = *((unsigned int *)a3 + 6);
    v46[6] = v12;
    goto LABEL_27;
  }
  Scaling = (unsigned int)a4->ContentTransformation.Scaling;
  if ( (_DWORD)Scaling != 254 )
  {
    v18 = DMMVIDPNPRESENTPATH::PinContentScaling(this, Scaling, v16);
    v12 = v18;
    if ( v18 < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
      Content = a4->ContentTransformation.Scaling;
      goto LABEL_26;
    }
  }
  Rotation = a4->ContentTransformation.Rotation;
  if ( Rotation != D3DKMDT_VPPR_UNPINNED )
  {
    v22 = DMMVIDPNPRESENTPATH::PinContentRotation(this, Rotation);
    v12 = v22;
    if ( v22 < 0 )
    {
      v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23);
      Content = a4->ContentTransformation.Rotation;
      goto LABEL_26;
    }
  }
  v25 = DMMVIDPNPRESENTPATH::SetImportanceOrdinal(this, (unsigned int)a4->ImportanceOrdinal, v16);
  v12 = v25;
  if ( v25 < 0 )
  {
    v46 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v26);
    Content = a4->ImportanceOrdinal;
    goto LABEL_26;
  }
  DMMVIDPNPRESENTPATH::_SetIsSupportSetTargetPathProperties(this);
  *((_DWORD *)this + 20) = 2;
  return this;
}
