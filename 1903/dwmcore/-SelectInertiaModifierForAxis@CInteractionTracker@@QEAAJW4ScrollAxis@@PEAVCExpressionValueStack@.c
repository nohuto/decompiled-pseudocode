/*
 * XREFs of ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DBE20
 * Callers:
 *     ?SelectInertiaModifier@CScrollAnimation@@QEAAJXZ @ 0x180207590 (-SelectInertiaModifier@CScrollAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z @ 0x1801D46D4 (-GetSampledConditionAnimation@CConditionalExpression@@QEBAXPEAPEAVCBaseExpression@@@Z.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D4740 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1801D48C4 (-IsAnyConditionSatisfied@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x1801D4DF4 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCExpressionForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForce@@@Z @ 0x1801D826C (--$-4VCExpressionForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@PEAVCExpressionForc.c)
 *     ??$?4VCScalarForce@@@?$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV?$ComPtr@VCScalarForce@@@12@@Z @ 0x1801D8304 (--$-4VCScalarForce@@@-$ComPtr@UIScalarForce@@@WRL@Microsoft@@QEAAAEAV012@AEBV-$ComPtr@VCScalarFo.c)
 *     ?GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z @ 0x1801DA43C (-GetAnimationForAxis@CInteractionTracker@@AEBAXW4ScrollAxis@@PEAPEAVCScrollAnimation@@@Z.c)
 *     ?SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z @ 0x1801DCB6C (-SetDebugTargetInfo@CConditionalExpression@@AEAAXUDebugTargetInfo@1@@Z.c)
 *     ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1801E5AFC (-GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z.c)
 *     ?GetCurrentVelocity@CMotion@@QEBAMXZ @ 0x18020FCCC (-GetCurrentVelocity@CMotion@@QEBAMXZ.c)
 *     ?IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z @ 0x18021EF54 (-IsInertiaEnabledForAxis@InteractionSourceManager@@QEBA_NW4ScrollAxis@@@Z.c)
 *     ??0CScalarForce@@QEAA@PEAUIAccelerator@@@Z @ 0x180220354 (--0CScalarForce@@QEAA@PEAUIAccelerator@@@Z.c)
 *     ?Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z @ 0x1802204F8 (-Initialize@CScalarForce@@QEAAXW4ThresholdKind@ForceThreshold@@MMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180220650 (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CInteractionTracker::SelectInertiaModifierForAxis(
        __int64 a1,
        unsigned int a2,
        struct CExpressionValueStack *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v6; // r12
  __int64 v9; // rsi
  int v10; // r15d
  __int64 v11; // rax
  signed int IsAnyConditionSatisfied; // eax
  __int64 v13; // rcx
  int v14; // edi
  signed int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // ebx
  int v20; // ebx
  struct CBaseExpression *v21; // rbx
  __int64 v22; // rdi
  CMotion *v23; // rax
  signed int v24; // eax
  __int64 v25; // rcx
  signed int ForceForAxis; // eax
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD); // rax
  LPVOID v30; // rax
  LPVOID v31; // rdi
  _DWORD *v32; // rbx
  CMotion *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  signed int Value; // eax
  __int64 v38; // rcx
  struct IAccelerator *v39; // rax
  __int64 v40; // rcx
  struct IAccelerator *v41; // rdi
  int v42; // xmm1_4
  int v43; // xmm0_4
  void (__fastcall **v44)(_QWORD); // rax
  CScalarForce *v45; // rax
  CScalarForce *v46; // rsi
  _DWORD *v47; // rbx
  CMotion *v48; // rax
  bool v49; // [rsp+38h] [rbp-51h] BYREF
  _DWORD *v50; // [rsp+40h] [rbp-49h] BYREF
  __int64 (__fastcall ***v51)(_QWORD); // [rsp+48h] [rbp-41h] BYREF
  struct CBaseExpression *v52; // [rsp+50h] [rbp-39h] BYREF
  float v53; // [rsp+58h] [rbp-31h] BYREF
  CScalarForce *v54; // [rsp+60h] [rbp-29h] BYREF
  CScalarForce *v55; // [rsp+78h] [rbp-11h] BYREF
  int v56; // [rsp+80h] [rbp-9h]
  _DWORD **v57; // [rsp+88h] [rbp-1h]
  bool v58; // [rsp+E8h] [rbp+5Fh] BYREF
  struct CExpressionValueStack *v59; // [rsp+F8h] [rbp+6Fh]

  v59 = a3;
  v51 = 0LL;
  v50 = 0LL;
  v6 = (int)a2;
  if ( !(unsigned __int8)InteractionSourceManager::IsInertiaEnabledForAxis(a1 + 192, a2) )
    goto LABEL_35;
  v9 = *(_QWORD *)(a1 + 8 * v6 + 376);
  v10 = 0;
  v11 = v6;
  if ( v9 )
  {
    CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 8 * v6 + 376));
    v58 = 0;
    IsAnyConditionSatisfied = CConditionalExpression::IsAnyConditionSatisfied(
                                (CConditionalExpression *)v9,
                                a3,
                                a4,
                                &v58);
    v14 = IsAnyConditionSatisfied;
    if ( IsAnyConditionSatisfied < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, IsAnyConditionSatisfied, 0xDE1u, 0LL);
      goto LABEL_36;
    }
    v11 = v6;
    v10 = v58;
  }
  if ( (unsigned int)v6 > 1 )
  {
    if ( !v10 )
      goto LABEL_35;
    goto LABEL_15;
  }
  if ( v10 )
  {
LABEL_15:
    v17 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v11 + 408) + 4LL * *(int *)(v9 + 356));
    goto LABEL_16;
  }
  v9 = *(_QWORD *)(a1 + 400);
  if ( !v9 )
    goto LABEL_35;
  CConditionalExpression::Reset(*(CConditionalExpression **)(a1 + 400));
  v49 = 0;
  v15 = CConditionalExpression::IsAnyConditionSatisfied((CConditionalExpression *)v9, a3, a4, &v49);
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xDF8u, 0LL);
    goto LABEL_36;
  }
  if ( !v49 )
    goto LABEL_35;
  v17 = 3;
  v10 = 2;
LABEL_16:
  v57 = &v50;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v50);
  CInteractionTracker::GetAnimationForAxis((__int64 *)a1, v6, (__int64 *)&v50);
  if ( (*(_BYTE *)(v9 + 208) & 0x20) != 0 )
  {
    LODWORD(v54) = *(_DWORD *)(v9 + 200);
    v56 = v17;
    HIDWORD(v54) = v50[46];
    v55 = v54;
    CConditionalExpression::SetDebugTargetInfo(v9, &v55);
  }
  v19 = v17 - 1;
  if ( !v19 )
  {
    Value = CConditionalExpression::GetValue((CConditionalExpression *)v9, v59, a4, &v53);
    v14 = Value;
    if ( Value < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, Value, 0xE21u, 0LL);
      goto LABEL_36;
    }
    v39 = (struct IAccelerator *)operator new(0x30uLL);
    v41 = v39;
    if ( v39 )
    {
      *((_DWORD *)v39 + 4) = 0;
      *(_QWORD *)v39 = &CSpringAccelerator::`vftable'{for `IAccelerator'};
      *((_QWORD *)v39 + 1) = &CSpringAccelerator::`vftable'{for `CMILRefCountBase'};
    }
    else
    {
      v41 = 0LL;
    }
    if ( !v41 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, 0x8007000E, 0xE27u, 0LL);
      goto LABEL_37;
    }
    (**(void (__fastcall ***)(struct IAccelerator *))v41)(v41);
    v42 = *(_DWORD *)(a1 + 552);
    v43 = *(_DWORD *)(a1 + 548);
    *((_DWORD *)v41 + 6) = *(_DWORD *)(a1 + 536);
    v44 = *(void (__fastcall ***)(_QWORD))v41;
    *((_DWORD *)v41 + 8) = v42;
    *((_DWORD *)v41 + 7) = v43;
    ((void (__fastcall **)(struct IAccelerator *))v44)[4](v41);
    v45 = (CScalarForce *)operator new(0x78uLL);
    if ( v45 )
      v46 = CScalarForce::CScalarForce(v45, v41);
    else
      v46 = 0LL;
    v54 = v46;
    if ( v46 )
      (**(void (__fastcall ***)(CScalarForce *))v46)(v46);
    v47 = v50;
    v48 = (CMotion *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v50 + 312LL))(v50);
    CMotion::GetCurrentVelocity(v48);
    (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v47 + 312LL))(v47);
    CScalarForce::Initialize(v46, (_DWORD)v6 == 2);
    *(_DWORD *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v50 + 312LL))(v50) + 144) = 1114636288;
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CScalarForce>(&v51, (__int64 (__fastcall ****)(_QWORD))&v54);
    if ( v46 )
      (*(void (__fastcall **)(CScalarForce *))(*(_QWORD *)v46 + 8LL))(v46);
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v41 + 8LL))(v41);
LABEL_35:
    v28 = v51;
    v51 = 0LL;
    v14 = 0;
    *a5 = v28;
    goto LABEL_36;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
    v30 = operator new(0x98uLL);
    v31 = v30;
    if ( v30 )
    {
      v32 = v50;
      v33 = (CMotion *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v50 + 312LL))(v50);
      CMotion::GetCurrentVelocity(v33);
      (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 312LL))(v32);
      v30 = (LPVOID)CExpressionForce::CExpressionForce(v31, v34, v35, v9, v6);
    }
    Microsoft::WRL::ComPtr<IScalarForce>::operator=<CExpressionForce>(&v51, (__int64)v30);
    *(_DWORD *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v50 + 312LL))(v50) + 144) = 1101004800;
    if ( !v51 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x8007000E, 0xE4Au, 0LL);
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  if ( v20 != 1 )
  {
    v14 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, 0x80004005, 0xE70u, 0LL);
    goto LABEL_37;
  }
  v52 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v52);
  CConditionalExpression::GetSampledConditionAnimation((CConditionalExpression *)v9, &v52);
  v21 = v52;
  if ( v52 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v52 + 8LL))(v52);
  v22 = (__int64)v50;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v51);
  v23 = (CMotion *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 312LL))(v22);
  CMotion::GetCurrentVelocity(v23);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 312LL))(v22);
  if ( v10 != 1 )
  {
    ForceForAxis = CNaturalAnimation::GetForceForAxis(v21, (unsigned int)v6);
    v14 = ForceForAxis;
    if ( ForceForAxis < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, ForceForAxis, 0xE65u, 0LL);
      goto LABEL_28;
    }
    goto LABEL_32;
  }
  v24 = CNaturalAnimation::GetForceForAxis(v21, 0LL);
  v14 = v24;
  if ( v24 >= 0 )
  {
LABEL_32:
    *(_DWORD *)((*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v50 + 312LL))(v50) + 144) = 1114636288;
    if ( v21 )
      (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v21 + 16LL))(v21);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v52);
    goto LABEL_35;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xE5Cu, 0LL);
LABEL_28:
  if ( v21 )
    (*(void (__fastcall **)(struct CBaseExpression *))(*(_QWORD *)v21 + 16LL))(v21);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v52);
LABEL_36:
  if ( v14 < 0 )
LABEL_37:
    *a5 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v50);
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v51);
  return (unsigned int)v14;
}
