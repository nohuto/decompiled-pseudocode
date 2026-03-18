/*
 * XREFs of ?UmfdEscHostUnhandledException@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00E8CC0
 * Callers:
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 * Callees:
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C00E8CD4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 */

void __fastcall UmfdEscHostUnhandledException(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  UmfdHostLifeTimeManager::UninitializeThread();
}
