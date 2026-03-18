/*
 * XREFs of EngCreateFastMutex @ 0x1C00D87C0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C00D8DA0 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
