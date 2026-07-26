/*
 * XREFs of NdisWdfExecuteMethod @ 0x1C009EB80
 * Callers:
 *     <none>
 * Callees:
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 */

__int64 __fastcall NdisWdfExecuteMethod(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2, int *a3, unsigned int a4, int *a5)
{
  return ndisWmiExecuteMethod(a1, a2, a3, a4, a5);
}
