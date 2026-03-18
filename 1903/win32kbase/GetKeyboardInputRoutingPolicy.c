/*
 * XREFs of GetKeyboardInputRoutingPolicy @ 0x1C0091EE0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C0091EF8 (_anonymous_namespace_--GetKeyboardProcessor.c)
 */

__int64 GetKeyboardInputRoutingPolicy()
{
  return *(unsigned int *)(anonymous_namespace_::GetKeyboardProcessor() + 16);
}
