/*
 * XREFs of Phase1Initialization @ 0x140768980
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x14018AD94 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407689EC (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x1409FED48 (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140A0FCD8 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140A4F6B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
