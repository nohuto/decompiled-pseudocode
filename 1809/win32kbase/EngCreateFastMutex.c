/*
 * XREFs of EngCreateFastMutex @ 0x1C0106610
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C009568C (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
