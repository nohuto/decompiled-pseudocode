/*
 * XREFs of ?RemoveFromBatchList@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@PEAPEAV32@@Z @ 0x1C00A71D8
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C00076B8 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C000F1FC (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C01A5758 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CApplicationChannel::RemoveFromBatchList(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CAnimationBinding **a2,
        struct DirectComposition::CAnimationBinding ***a3)
{
  struct DirectComposition::CAnimationBinding **i; // rax

  for ( i = *a3; i != a2; i = (struct DirectComposition::CAnimationBinding **)*i )
    a3 = (struct DirectComposition::CAnimationBinding ***)i;
  *a3 = (struct DirectComposition::CAnimationBinding **)*i;
  *a2 = 0LL;
}
