/*
 * XREFs of IsMouseButtonDown @ 0x1C01822B0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 */

char IsMouseButtonDown()
{
  __int64 MouseProcessor; // rax

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  if ( MouseProcessor )
    LOBYTE(MouseProcessor) = *(_DWORD *)(MouseProcessor + 3268) != 0;
  return MouseProcessor;
}
