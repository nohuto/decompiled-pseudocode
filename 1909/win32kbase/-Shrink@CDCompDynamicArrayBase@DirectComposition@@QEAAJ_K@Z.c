/*
 * XREFs of ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C0005EF0
 * Callers:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00068AC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00BE098 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 *     ?RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C01A5450 (-RemoveSegmentsAtEnd@CInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 *     ?RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z @ 0x1C01A5B8C (-RemoveSegmentsAtEnd@CGenericInkMarshaler@DirectComposition@@AEAAJIPEA_N@Z.c)
 * Callees:
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall DirectComposition::CDCompDynamicArrayBase::Shrink(
        DirectComposition::CDCompDynamicArrayBase *this,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rbx
  unsigned int v5; // edi

  v2 = *((_QWORD *)this + 3);
  if ( v2 < a2 )
  {
    return (unsigned int)-1073741675;
  }
  else
  {
    v4 = v2 - a2;
    v5 = 0;
    memset((void *)(*(_QWORD *)this + v4 * *((_QWORD *)this + 4)), 0, a2 * *((_QWORD *)this + 4));
    *((_QWORD *)this + 3) = v4;
  }
  return v5;
}
