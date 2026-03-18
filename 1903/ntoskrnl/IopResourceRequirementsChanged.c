/*
 * XREFs of IopResourceRequirementsChanged @ 0x140860098
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140701670 (PiProcessQueryDeviceState.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 */

__int64 __fastcall IopResourceRequirementsChanged(void *a1, unsigned __int8 a2)
{
  return PnpRequestDeviceAction(a1, 13, 0, a2, 0LL, 0LL, 0LL);
}
