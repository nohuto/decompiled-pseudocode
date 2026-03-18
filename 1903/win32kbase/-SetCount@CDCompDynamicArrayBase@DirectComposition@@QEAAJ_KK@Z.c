/*
 * XREFs of ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0008A7C
 * Callers:
 *     ?ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0008690 (-ReleaseAllReferences@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplication.c)
 *     ?EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00087A8 (-EmitSetLogPropertyUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBa.c)
 *     ?EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008800 (-EmitSetLogAnimationEndedUpdates@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAP.c)
 *     ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008860 (-EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0008A00 (-EmitSetDiagnosticItemId@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatc.c)
 *     ?SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z @ 0x1C01A7910 (-SetSegments@CInkMarshaler@DirectComposition@@AEAAJIPEBUD2D1_INK_BEZIER_SEGMENT@@IPEA_N@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C01A7FDC (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C0008FDC (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0013EF0 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::SetCount(
        DirectComposition::CDCompDynamicArrayBase *this,
        unsigned __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned int v4; // r9d

  v3 = *((_QWORD *)this + 3);
  v4 = 0;
  if ( a2 < v3 )
    return (unsigned int)DirectComposition::CDCompDynamicArrayBase::Shrink(this, v3 - a2);
  if ( a2 > v3 )
    return (unsigned int)DirectComposition::CDCompDynamicArrayBase::Grow(this, a2 - v3, a3);
  return v4;
}
