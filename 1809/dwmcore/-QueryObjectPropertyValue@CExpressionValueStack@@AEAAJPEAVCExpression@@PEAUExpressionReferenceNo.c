/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x1801D28FC
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800BF370 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180016D4C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18018A288 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18018A3D8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x18018CF1C (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x18019EEF8 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801BD7C8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  struct ExpressionReferenceInfo *v10; // r15
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  LONGLONG Elapsed; // rax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  struct CResource *v21; // rdx
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF
  struct CResource *v24; // [rsp+68h] [rbp+20h] BYREF

  v24 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)a3 + 1);
  if ( (unsigned int)v8 < *((_DWORD *)a2 + 98) )
    v10 = (struct ExpressionReferenceInfo *)(*((_QWORD *)a2 + 48) + 24 * v8);
  else
    v10 = 0LL;
  if ( CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 224LL) + 88LL;
    QpcStopwatch::Start((QpcStopwatch *)&v23);
    v6 = v23;
  }
  v12 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, struct CResource **))(*(_QWORD *)a2 + 240LL))(
          a2,
          *((unsigned int *)v10 + 5),
          &v24);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_18027646C, 1u, v12, 0x100u);
  }
  else
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v23);
      ++*(_DWORD *)(v7 + 12);
      *(_QWORD *)(v7 + 48) += Elapsed;
    }
    v16 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v24 + 104LL))(
            v24,
            *(unsigned int *)v10,
            a5);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18027646C, 1u, v16, 0x107u);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v18 = CExpressionValue::ApplyMaskToValue(a5, a6), v14 = v18, v18 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_18027646C, 1u, v18, 0x117u);
    }
    else
    {
      v20 = *((_QWORD *)a2 + 22);
      if ( v20 )
        v21 = *(struct CResource **)(v20 + 16);
      else
        v21 = 0LL;
      CInteractionTracker::CheckTargetsForInteractionSource(v10, v21, v24);
      v14 = 0;
    }
  }
  ReleaseInterface<IBitmapLock>((__int64 *)&v24);
  return v14;
}
