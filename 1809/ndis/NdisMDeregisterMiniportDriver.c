/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x1C00F1CC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00F0F44 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  if ( *((char *)NdisMiniportDriverHandle + 26) < 0 )
    ndisBugCheckEx(0x2AuLL, 1uLL, (ULONG_PTR)NdisMiniportDriverHandle, 0LL);
  ndisInternalDeregisterMiniportDriver((_NDIS_M_DRIVER_BLOCK *)NdisMiniportDriverHandle);
}
