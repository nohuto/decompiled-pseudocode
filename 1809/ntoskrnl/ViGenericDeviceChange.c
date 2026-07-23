/*
 * XREFs of ViGenericDeviceChange @ 0x140943970
 * Callers:
 *     <none>
 * Callees:
 *     ViGenericDispatchHandler @ 0x1409439F4 (ViGenericDispatchHandler.c)
 */

__int64 __fastcall ViGenericDeviceChange(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_DEVICE_CHANGE, 24LL);
}
