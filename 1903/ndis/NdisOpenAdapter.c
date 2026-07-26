/*
 * XREFs of NdisOpenAdapter @ 0x1C0138A50
 * Callers:
 *     <none>
 * Callees:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 */

_UNKNOWN **__fastcall NdisOpenAdapter(
        unsigned int *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        unsigned __int16 *a9)
{
  char v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+50h] [rbp-18h]

  return ndisOpenAdapterLegacyProtocol(a1, a2, a3, a4, a5, a6, a7, a8, a9, v10, v11, 0LL);
}
