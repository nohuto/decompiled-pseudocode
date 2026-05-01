/*
 * XREFs of ??_G?$CDCompBatchAnimationCallback@V_lambda_55e0f220ed6030f2589a6e9858a32f89_@@@@UEAAPEAXI@Z @ 0x180311B70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___ @ 0x180311814 (CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback<_lambda_55e0f220ed6030f2589a6e9858a32f89_>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___::_CDCompBatchAnimationCallback__lambda_55e0f220ed6030f2589a6e9858a32f89___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
