/*
 * XREFs of ??_E?$CDCompBatchAnimationCallback@V_lambda_d996df4ae651642ba189a9f5cbef4ddb_@@@@UEAAPEAXI@Z @ 0x18035AE90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___ @ 0x18035ABF8 (CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___--_CDCompBatchAnimationC.c)
 */

void *__fastcall CDCompBatchAnimationCallback<_lambda_d996df4ae651642ba189a9f5cbef4ddb_>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___::_CDCompBatchAnimationCallback__lambda_d996df4ae651642ba189a9f5cbef4ddb___((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
