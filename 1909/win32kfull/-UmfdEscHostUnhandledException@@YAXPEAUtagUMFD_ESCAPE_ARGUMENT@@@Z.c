/*
 * XREFs of ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0142100
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C0142114 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdEscHostUnhandledException(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
