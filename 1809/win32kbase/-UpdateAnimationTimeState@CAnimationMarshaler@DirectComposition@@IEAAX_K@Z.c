/*
 * XREFs of ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00751E4
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000F704 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0010214 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005A9F8 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 * Callees:
 *     ?CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@2@_KPEA_KPEA_NPEA_J2@Z @ 0x1C0075278 (-CalculateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAXPEAVCAnimationTimeList@.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0075434 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(
        DirectComposition::CAnimationMarshaler *this,
        unsigned __int64 a2)
{
  __int64 v2; // rcx
  DirectComposition::CAnimationTimeList *v3; // rdx
  __int64 v4; // rax
  bool v5; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CAnimationMarshaler::CalculateAnimationTimeState(
    this,
    *((struct DirectComposition::CAnimationTimeList **)this + 9),
    a2,
    (unsigned __int64 *)this + 14,
    &v5,
    (__int64 *)this + 27,
    (unsigned __int64 *)this + 28);
  v3 = *(DirectComposition::CAnimationTimeList **)(v2 + 72);
  *(_BYTE *)(v2 + 208) ^= (*(_BYTE *)(v2 + 208) ^ (4 * v5)) & 4;
  v4 = *(_QWORD *)(v2 + 80);
  if ( v3 == (DirectComposition::CAnimationTimeList *)v4 )
  {
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_DWORD *)(v4 + 24) = 0;
    *(_BYTE *)(v4 + 28) = 0;
    *(_QWORD *)(v4 + 32) = 0LL;
    *(_QWORD *)(v4 + 40) = 0LL;
    *(_DWORD *)(v2 + 32) &= 0xFFFF3FFF;
  }
  else
  {
    *(_QWORD *)(v2 + 72) = *((_QWORD *)v3 + 2);
    DirectComposition::CAnimationTimeList::Release(v3);
  }
}
