/*
 * XREFs of Phase1Initialization @ 0x14074C7A0
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140187470 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074C80C (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1409D3354 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140A0B690 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
