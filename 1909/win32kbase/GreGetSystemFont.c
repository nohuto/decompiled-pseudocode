/*
 * XREFs of GreGetSystemFont @ 0x1C0062AD0
 * Callers:
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 * Callees:
 *     <none>
 */

void *__fastcall GreGetSystemFont(int a1)
{
  void *result; // rax

  if ( a1 )
    return gahStockObjects[13];
  result = gahStockObjects96[13];
  if ( !result )
    return gahStockObjects[13];
  return result;
}
