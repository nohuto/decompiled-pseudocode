/*
 * XREFs of EtwEventUnregister @ 0x1800537A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
