/*
 * XREFs of NdisWdfQuerySingleInstance @ 0x1C009F210
 * Callers:
 *     <none>
 * Callees:
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 */

__int64 __fastcall NdisWdfQuerySingleInstance(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  return ndisWmiQuerySingleInstance(a1, a2, a3, a4, a5);
}
