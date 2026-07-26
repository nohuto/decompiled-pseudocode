/*
 * XREFs of NdisMReadDmaCounter @ 0x1C009E6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMReadDmaCounter(NDIS_HANDLE MiniportDmaHandle)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 80LL))();
}
