/*
 * XREFs of ?IsMessageDelegated@CPointerInfoNode@@QEBAHHHHH@Z @ 0x1C013F04C
 * Callers:
 *     ?IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ @ 0x1C013ED78 (-IsAnyMessageDelegated@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C013F070 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPointerInfoNode::IsMessageDelegated(CPointerInfoNode *this, int a2, int a3, int a4, int a5)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( a2 && a3 && !a4 )
    return a5 == 0;
  return result;
}
