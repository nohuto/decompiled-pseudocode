/*
 * XREFs of ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C005A9F8
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C000EDE0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C005A840 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 * Callees:
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C00751E4 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0075434 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ClearAnimationTimeList(
        DirectComposition::CApplicationChannel *this)
{
  DirectComposition::CAnimationMarshaler **v1; // rsi
  LARGE_INTEGER PerformanceCounter; // rbx
  DirectComposition::CAnimationMarshaler **v4; // rdi
  DirectComposition::CAnimationMarshaler *v5; // rcx

  v1 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 54);
  if ( v1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    do
    {
      v4 = (DirectComposition::CAnimationMarshaler **)v1[1];
      v5 = *v1;
      v1[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v5, PerformanceCounter.QuadPart);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v1);
      v1 = v4;
    }
    while ( v4 );
    *((_QWORD *)this + 54) = 0LL;
  }
}
