/*
 * XREFs of Phase1Initialization @ 0x1407573D0
 * Callers:
 *     <none>
 * Callees:
 *     InbvSetProgressBarSubset @ 0x14018A404 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x14075743C (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140A0F540 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140A506B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
