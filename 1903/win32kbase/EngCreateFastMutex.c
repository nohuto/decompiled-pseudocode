/*
 * XREFs of EngCreateFastMutex @ 0x1C01309E0
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C005FB68 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
