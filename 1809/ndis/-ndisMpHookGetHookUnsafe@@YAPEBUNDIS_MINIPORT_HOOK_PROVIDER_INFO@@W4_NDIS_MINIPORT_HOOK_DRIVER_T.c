/*
 * XREFs of ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C0081F7C
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C0107B00 (NdisMDeregisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *__fastcall ndisMpHookGetHookUnsafe(int a1)
{
  return (struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 128 * (__int64)a1 + 24);
}
