/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x180203C50
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800846F0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x1801C1408 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x1801C1528 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x1801C1AF8 (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 *     ?CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCResource@@1@Z @ 0x1801D9B70 (-CheckTargetsForInteractionSource@CInteractionTracker@@SAXPEAUExpressionReferenceInfo@@PEAVCReso.c)
 *     ?ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ @ 0x1801E8254 (-ShouldLogPerfStats@CBaseExpression@@IEAA_NXZ.c)
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
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // edi
  LONGLONG Elapsed; // rax
  signed int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
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
  if ( (unsigned int)v8 < *((_DWORD *)a2 + 104) )
    v10 = (struct ExpressionReferenceInfo *)(*((_QWORD *)a2 + 51) + 24 * v8);
  else
    v10 = 0LL;
  if ( CBaseExpression::ShouldLogPerfStats(a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 240LL) + 88LL;
    QpcStopwatch::Start((QpcStopwatch *)&v23);
    v6 = v23;
  }
  v12 = (*(__int64 (__fastcall **)(struct CExpression *, _QWORD, struct CResource **))(*(_QWORD *)a2 + 272LL))(
          a2,
          *((unsigned int *)v10 + 5),
          &v24);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, &dword_180283148, 1u, v12, 0xF4u, 0LL);
  }
  else
  {
    if ( v6 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v23);
      ++*(_DWORD *)(v7 + 12);
      *(_QWORD *)(v7 + 48) += Elapsed;
    }
    v16 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v24 + 136LL))(
            v24,
            *(unsigned int *)v10,
            a5);
    v14 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180283148, 1u, v16, 0xFBu, 0LL);
    }
    else if ( a6 && *((_BYTE *)a6 + 4) && (v18 = CExpressionValue::ApplyMaskToValue(a5, a6), v14 = v18, v18 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, &dword_180283148, 1u, v18, 0x10Bu, 0LL);
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
