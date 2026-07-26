/*
 * XREFs of NdisWdfGenerateFdoNameIndex @ 0x1C009ED70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NdisWdfGenerateFdoNameIndex()
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&ndisFdoIndex);
}
