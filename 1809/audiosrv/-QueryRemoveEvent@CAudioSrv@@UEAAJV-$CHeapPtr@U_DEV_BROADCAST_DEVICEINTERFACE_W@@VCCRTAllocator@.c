/*
 * XREFs of ?QueryRemoveEvent@CAudioSrv@@UEAAJV?$CHeapPtr@U_DEV_BROADCAST_DEVICEINTERFACE_W@@VCCRTAllocator@ATL@@@ATL@@@Z @ 0x1800B1B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSrv::QueryRemoveEvent(__int64 a1, void **a2)
{
  free(*a2);
  *a2 = 0LL;
  return 0LL;
}
