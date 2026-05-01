/*
 * XREFs of _RmUnregisterActivityHostCallbacks@12 @ 0x100114B0
 * Callers:
 *     <none>
 * Callees:
 *     _RmpClientUnregisterActivityHostCallbacks@12 @ 0x10011B0D (_RmpClientUnregisterActivityHostCallbacks@12.c)
 */

int __stdcall RmUnregisterActivityHostCallbacks(int a1, int a2, int a3)
{
  return RmpClientUnregisterActivityHostCallbacks(a2, a3);
}
