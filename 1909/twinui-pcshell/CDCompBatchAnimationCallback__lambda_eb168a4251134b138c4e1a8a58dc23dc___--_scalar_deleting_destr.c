/*
 * XREFs of CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_scalar_deleting_destructor_ @ 0x1803E0230
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008A5F0 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___ @ 0x1803DFF80 (CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_scalar_deleting_destructor_(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___::_CDCompBatchAnimationCallback__lambda_eb168a4251134b138c4e1a8a58dc23dc___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
