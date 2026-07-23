/*
 * XREFs of Phase1InitializationIoReady @ 0x1409C5788
 * Callers:
 *     Phase1Initialization @ 0x14074C7A0 (Phase1Initialization.c)
 * Callees:
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 *     InbvSetProgressBarSubset @ 0x140187470 (InbvSetProgressBarSubset.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     VfClearVerifierSettings @ 0x140309998 (VfClearVerifierSettings.c)
 *     ExQueryBootEntropyInformation @ 0x140737B04 (ExQueryBootEntropyInformation.c)
 *     VfNotifyVerifierOfEvent @ 0x140926D20 (VfNotifyVerifierOfEvent.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     ExInitLicenseData @ 0x1409C53A0 (ExInitLicenseData.c)
 *     MmInitSystemDll @ 0x1409C5738 (MmInitSystemDll.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 *     SeRmInitPhase1 @ 0x1409C71C4 (SeRmInitPhase1.c)
 *     CmInitSystem2 @ 0x1409C72F8 (CmInitSystem2.c)
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 *     PspInitPhase2 @ 0x1409D6F0C (PspInitPhase2.c)
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 *     SaveNodeDistanceInformation @ 0x1409DF6C4 (SaveNodeDistanceInformation.c)
 *     PspInitPhase3 @ 0x1409E0584 (PspInitPhase3.c)
 *     InitSafeBoot @ 0x1409F4348 (InitSafeBoot.c)
 */

__int64 __fastcall Phase1InitializationIoReady(ULONG_PTR a1, char a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int inited; // eax
  __int64 v7; // rcx
  __int64 result; // rax
  _BYTE SystemInformation[4]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-34h]
  char v11; // [rsp+38h] [rbp-30h]

  if ( ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    if ( (v11 & 1) != 0 )
      RtlpIsFlushRequired = 0;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_6:
        RtlpClFlushSize = v10;
        goto LABEL_7;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_6;
  }
LABEL_7:
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
  if ( !PoInitSystem(3, a1) )
    KeBugCheck(0xA0u);
  KeInitializeClock(2uLL);
  ExInitLicenseData();
  if ( !(unsigned __int8)PspInitPhase2() )
    goto LABEL_30;
  MmInitSystemDll();
  if ( !(unsigned __int8)SeRmInitPhase1() )
    KeBugCheck(0x6Cu);
  BootApplicationPersistentDataProcess(2LL);
  if ( !(unsigned __int8)PspInitPhase3() )
LABEL_30:
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
  result = KeInitSystem(2LL);
  if ( !(_BYTE)result )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  return result;
}
