/*
 * XREFs of NdisMDeregisterMiniportDriver @ 0x1C009E340
 * Callers:
 *     <none>
 * Callees:
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C0117B0C (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __stdcall NdisMDeregisterMiniportDriver(NDIS_HANDLE NdisMiniportDriverHandle)
{
  if ( *((char *)NdisMiniportDriverHandle + 26) < 0 )
    ndisBugCheckEx(0x2AuLL, 1uLL, (ULONG_PTR)NdisMiniportDriverHandle, 0LL);
  ndisInternalDeregisterMiniportDriver(NdisMiniportDriverHandle);
}
