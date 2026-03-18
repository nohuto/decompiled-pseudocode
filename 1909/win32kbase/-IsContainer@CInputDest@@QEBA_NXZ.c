/*
 * XREFs of ?IsContainer@CInputDest@@QEBA_NXZ @ 0x1C015B944
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0033FE4 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C015FF5C (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CInputDest::IsContainer(CInputDest *this)
{
  char result; // al

  result = 0;
  if ( *((_WORD *)this + 58) || *((_WORD *)this + 59) )
    return 1;
  return result;
}
