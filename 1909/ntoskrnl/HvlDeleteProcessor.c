/*
 * XREFs of HvlDeleteProcessor @ 0x14085094C
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     MmUnmapIoSpace @ 0x1400F5130 (MmUnmapIoSpace.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     HvlpFreeOverlayPages @ 0x140144A40 (HvlpFreeOverlayPages.c)
 *     HvlpGetRegister64 @ 0x14028CB3C (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x14028CC28 (HvlpSetRegister64.c)
 */

void __fastcall HvlDeleteProcessor(struct _KPRCB *a1, SIZE_T a2, MEMORY_CACHING_TYPE a3)
{
  void *VirtualApicAssist; // rcx
  void *SchedulerAssist; // rcx
  unsigned __int64 HypercallCachedPages; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  VirtualApicAssist = a1->VirtualApicAssist;
  if ( VirtualApicAssist )
  {
    if ( a1 == KeGetCurrentPrcb() )
    {
      HvlpGetRegister64(589843, &v7);
      HvlpSetRegister64(589843, v7 & 0xFFFFFFFFFFFFFFFEuLL);
      VirtualApicAssist = a1->VirtualApicAssist;
    }
    if ( (HvlpFlags & 2) != 0 )
      MmUnmapIoSpace(VirtualApicAssist, 1uLL);
    else
      HvlpFreeOverlayPages(VirtualApicAssist, a2, a3);
    a1->VirtualApicAssist = 0LL;
  }
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
    HvlpFreeOverlayPages(SchedulerAssist, a2, a3);
  HypercallCachedPages = (unsigned __int64)a1->HypercallCachedPages;
  if ( HypercallCachedPages )
    MmFreeIndependentPages(HypercallCachedPages, 0x5000uLL);
}
