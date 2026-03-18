/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180193130
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x180193680 (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801A11A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x1801E6E70 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1800E72C0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1800EF1C0 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x18018B104 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x18018C3B8 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x180193064 (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        MatrixSubchannelMaskInfo **this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  MatrixSubchannelMaskInfo *v4; // rax
  struct CExpressionValue *v6; // rbx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // esi
  int v13; // eax
  float *v14; // rax
  WCHAR *AnimationLoggingManagerNoRef; // rax
  unsigned int v17[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v4 = *this;
  v6 = 0LL;
  *a4 = 0.0;
  v10 = (*((__int64 (__fastcall **)(MatrixSubchannelMaskInfo **, struct CExpressionValueStack *, unsigned __int64, __int64 *))v4
         + 26))(
          this,
          a2,
          a3,
          &v18);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x209u);
  }
  else
  {
    LOBYTE(v13) = EvaluateCurrentState((int **)&g_Feature_283413818_58681306_FeatureDescriptorDetails);
    if ( !v13 || v12 != 1 )
    {
      v14 = (float *)CExpressionValueStack::PeekStackValue(a2, 0);
      --*((_DWORD *)a2 + 4);
      v6 = (struct CExpressionValue *)v14;
      *a4 = *v14;
    }
    if ( (*((_DWORD *)this[35] + 1) & 0x8000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v17);
      AnimationLoggingManagerNoRef = (WCHAR *)CBaseExpression::GetAnimationLoggingManagerNoRef((CBaseExpression *)this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        (struct CResource *)this,
        2,
        a3,
        84,
        v17[0],
        v17[1],
        this[24],
        v6);
    }
  }
  return v12;
}
