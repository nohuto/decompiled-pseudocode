/*
 * XREFs of ??0?$CGuard@VCDwmCS@@@@QEAA@AEAVCDwmCS@@@Z @ 0x180072AC4
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800AF53C (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall CGuard<CDwmCS>::CGuard<CDwmCS>(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *a1 = a2;
  EnterCriticalSection(a2);
  return a1;
}
