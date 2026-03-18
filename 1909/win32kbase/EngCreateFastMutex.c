/*
 * XREFs of EngCreateFastMutex @ 0x1C012E230
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateFastMutex @ 0x1C0090940 (GreCreateFastMutex.c)
 */

HFASTMUTEX EngCreateFastMutex(void)
{
  return (HFASTMUTEX)GreCreateFastMutex();
}
