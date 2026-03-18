/*
 * XREFs of ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1801D2FD0
 * Callers:
 *     ?ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4OutputCoordinate@@PEA_NPEAM@Z @ 0x1801D350C (-ProcessConditionalExpression@CConditionalExpression@@SAJPEAV1@PEAVCExpressionValueStack@@_KW4Ou.c)
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1801DA7A0 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 *     ?Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z @ 0x18021F030 (-Accelerate@CExpressionForce@@UEAAMPEAUIntegrationState@@M@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_KW4MIL_RESOURCE_TYPE@@IIPEAVSubchannelMaskInfo@@PEBVCExpressionValue@@@Z @ 0x1801BE7F8 (-LogDebugPropertyUpdate@CAnimationLoggingManager@@QEAAXPEAVCResource@@W4PropertyChangeSource@@_K.c)
 *     ?GetDebugTargetInfo@CConditionalExpression@@AEBA?AUDebugTargetInfo@1@XZ @ 0x1801D2F04 (-GetDebugTargetInfo@CConditionalExpression@@AEBA-AUDebugTargetInfo@1@XZ.c)
 *     ?GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ @ 0x1801E5BE8 (-GetAnimationLoggingManagerNoRef@CBaseExpression@@IEAAPEAVCAnimationLoggingManager@@XZ.c)
 */

__int64 __fastcall CConditionalExpression::GetValue(
        CConditionalExpression *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float *a4)
{
  __int64 v4; // rax
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rdx
  float *v13; // r11
  __int64 v14; // rax
  WCHAR *AnimationLoggingManagerNoRef; // rax
  struct CExpressionValue *v16; // r11
  unsigned int v18[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF

  v4 = *(_QWORD *)this;
  *a4 = 0.0;
  v9 = (*(__int64 (__fastcall **)(CConditionalExpression *, struct CExpressionValueStack *, unsigned __int64, __int64 *))(v4 + 248))(
         this,
         a2,
         a3,
         &v19);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1D1u, 0LL);
  }
  else
  {
    v12 = (unsigned int)(*((_DWORD *)a2 + 4) - 1);
    v13 = (float *)(*((_QWORD *)a2 + 3) + 80 * v12);
    *((_DWORD *)a2 + 4) = v12;
    v14 = *((_QWORD *)this + 38);
    *a4 = *v13;
    if ( (*(_DWORD *)(v14 + 4) & 0x8000000) != 0 )
    {
      CConditionalExpression::GetDebugTargetInfo((__int64)this, (__int64)v18);
      AnimationLoggingManagerNoRef = (WCHAR *)CBaseExpression::GetAnimationLoggingManagerNoRef(this);
      CAnimationLoggingManager::LogDebugPropertyUpdate(
        AnimationLoggingManagerNoRef,
        this,
        2,
        a3,
        88,
        v18[0],
        v18[1],
        *((MatrixSubchannelMaskInfo **)this + 24),
        v16);
    }
  }
  return v11;
}
