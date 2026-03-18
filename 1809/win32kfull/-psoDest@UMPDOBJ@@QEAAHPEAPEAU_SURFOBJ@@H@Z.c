/*
 * XREFs of ?psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0277FC0
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C008F9D4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 */

__int64 __fastcall UMPDOBJ::psoDest(UMPDOBJ *this, EVENT_DATA_DESCRIPTOR **a2, int a3)
{
  return UMPDOBJ::pso(this, (UMPDOBJ *)((char *)this + 64), a2, a3);
}
