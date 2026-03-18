/*
 * XREFs of Phase1InitializationIoReady @ 0x1409FE82C
 * Callers:
 *     Phase1Initialization @ 0x1407573D0 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 *     RtlpInitializeNonVolatileFlush @ 0x14018A37C (RtlpInitializeNonVolatileFlush.c)
 *     InbvSetProgressBarSubset @ 0x14018A404 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x140327288 (VfClearVerifierSettings.c)
 *     ExQueryBootEntropyInformation @ 0x1407574E4 (ExQueryBootEntropyInformation.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     CmInitSystem2 @ 0x1409FC974 (CmInitSystem2.c)
 *     SaveNodeDistanceInformation @ 0x1409FC9C0 (SaveNodeDistanceInformation.c)
 *     KeInitializeClock @ 0x1409FCAA0 (KeInitializeClock.c)
 *     MmInitSystemDll @ 0x1409FCCC8 (MmInitSystemDll.c)
 *     StartFirstUserProcess @ 0x1409FCD18 (StartFirstUserProcess.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 *     PspInitPhase3 @ 0x1409FE5BC (PspInitPhase3.c)
 *     PspInitPhase2 @ 0x1409FE628 (PspInitPhase2.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A098F0 (BootApplicationPersistentDataProcess.c)
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 *     SeRmInitPhase1 @ 0x140A17B50 (SeRmInitPhase1.c)
 *     InitSafeBoot @ 0x140A38740 (InitSafeBoot.c)
 */

char __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  char result; // al

  RtlpInitializeNonVolatileFlush();
  LOBYTE(v4) = CmStateSeparationEnabled != 0;
  v5 = ExpInitializeStateSeparationPhase1(v4);
  if ( (int)(v5 + 0x80000000) >= 0 && v5 != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  CmInitSystem2();
  inited = EmInitSystem(1, a1);
  if ( inited < 0 )
    KeBugCheckEx(0x32u, inited, 8uLL, 1uLL, 0LL);
  TmInitSystemPhase2();
  InbvSetProgressBarSubset();
  if ( InitSafeBootMode )
  {
    LOBYTE(v7) = a2;
    InitSafeBoot(v7);
  }
  MmInitSystem(2, a1);
  SaveNodeDistanceInformation();
  if ( !(unsigned __int8)PoInitSystem(3LL, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL, a1);
  ExInitLicenseData();
  if ( !PspInitPhase2() )
    goto LABEL_21;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !PspInitPhase3() )
LABEL_21:
    KeBugCheck(0x6Bu);
  WerLiveKernelInitSystem();
  StartFirstUserProcess();
  LODWORD(InitializationPhase) = InitializationPhase + 1;
  ExNotifyCallback(ExCbPhase1InitComplete, 0LL, 0LL);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(5);
  if ( VfClearanceFlag )
    VfClearVerifierSettings();
  ExQueryBootEntropyInformation(0LL);
  result = KeInitSystem(2);
  if ( !result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
