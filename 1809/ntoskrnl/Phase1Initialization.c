/*
 * XREFs of Phase1Initialization @ 0x14074B5D0
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x140187310 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401BBB80 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x14074B63C (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x1409D2354 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140A0A690 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
