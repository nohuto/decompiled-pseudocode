/*
 * XREFs of NdisWdfQueryAllData @ 0x1C009F010
 * Callers:
 *     <none>
 * Callees:
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 */

__int64 __fastcall NdisWdfQueryAllData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_GUID *a2,
        struct _NDIS_CO_VC_PTR_BLOCK *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  return ndisWmiQueryAllData(a1, a2, a3, a5, a6);
}
