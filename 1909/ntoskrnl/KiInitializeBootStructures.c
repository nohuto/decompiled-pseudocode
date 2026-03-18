/*
 * XREFs of KiInitializeBootStructures @ 0x14059FFA0
 * Callers:
 *     KiSystemStartup @ 0x140595010 (KiSystemStartup.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KiDetermineRetpolineEnablement @ 0x14019C97C (KiDetermineRetpolineEnablement.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     atoi @ 0x14019FDC0 (atoi.c)
 *     KiDetectTsx @ 0x1401BEDE8 (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1401C48D0 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     KiEnableKvaShadowing @ 0x14059F81C (KiEnableKvaShadowing.c)
 *     KiInitializeIdt @ 0x14059FA9C (KiInitializeIdt.c)
 *     KiGetProcessorSignature @ 0x14059FEDC (KiGetProcessorSignature.c)
 *     ExInitPoolLookasidePointers @ 0x1405A03EC (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x1405A05CC (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x1405A09A4 (KiSetFeatureBits.c)
 *     KiSetProcessorSignature @ 0x1405A2304 (KiSetProcessorSignature.c)
 *     InitializeBuildStrings @ 0x1409ED300 (InitializeBuildStrings.c)
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A1A1BC (InbvDriverInitialize.c)
 *     ExRngInitializeSystem @ 0x140A1CB64 (ExRngInitializeSystem.c)
 *     KiInitializeNxSupportDiscard @ 0x140A20C6C (KiInitializeNxSupportDiscard.c)
 *     HvlEnableVsmCalls @ 0x140A22F58 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rbp
  __int64 v5; // r10
  __int64 v6; // rax
  _KTHREAD *v7; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 IdtBase; // r15
  unsigned int ProcessorSignature; // eax
  unsigned __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // eax
  const char *v18; // rcx
  char *v19; // rax
  char v20; // cl
  int v21; // eax
  unsigned int v22; // eax
  __int64 (__fastcall *v23)(); // rbx
  __int64 (__fastcall *v24)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64); // rsi
  int v25; // ecx
  unsigned int v27; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v28; // [rsp+68h] [rbp+10h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    InitializeBuildStrings(*(_QWORD *)(a1 + 240));
    v5 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v5 + 3444);
    KiFeatureSimulations = (*(_DWORD *)(v5 + 116) >> 21) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    v6 = *(_QWORD *)(a1 + 128) + 28672LL;
    CurrentPrcb->IsrStack = (void *)v6;
    v6 += 28592LL;
    *(_QWORD *)(v6 + 40) = &KiExceptionDispatchOnExceptionStackContinue;
    CurrentPrcb->ExceptionStack = (void *)v6;
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v7 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v7;
  CurrentPrcb->IdleThread = v7;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v7->Header.Lock, 0x15u);
  v7->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v7->ApcState.ApcListHead[0].Blink = v7->ApcState.ApcListHead;
  v7->ApcState.ApcListHead[0].Flink = v7->ApcState.ApcListHead;
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v8 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v8 + 40) = &KiDispatchInterruptContinue;
  v9 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v8;
  if ( v9 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = (__int64)Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature(&CurrentPrcb->CpuVendor, (int *)&v28, (int *)&v27, &v29);
  v13 = v28;
  v14 = ProcessorSignature;
  LOWORD(ProcessorSignature) = v29 | ((_WORD)v27 << 8);
  v9 = CurrentPrcb->CpuVendor == 2;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = v13;
  CurrentPrcb->CpuStep = ProcessorSignature;
  if ( v9 && (v13 >= 0xF || v13 == 6 && v27 > 0xD) )
  {
    v15 = __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL;
    v12 = HIDWORD(v15);
    __writemsr(0x1A0u, v15);
  }
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature(CurrentPrcb, (unsigned int)v14);
    *(_QWORD *)(IdtBase + 4208) = Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v16 = *(_QWORD *)(a1 + 240);
    v17 = *(_DWORD *)(v16 + 116);
    if ( (v17 & 8) != 0 )
    {
      KiBootDebuggerActive = 1;
      v17 = *(_DWORD *)(v16 + 116);
    }
    if ( (v17 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v18 = *(const char **)(a1 + 216);
    if ( v18 )
    {
      v19 = strstr(v18, "GROUPSIZE");
      if ( v19 )
      {
        while ( 1 )
        {
          v20 = *v19;
          if ( !*v19 || v20 == 32 || (unsigned __int8)(v20 - 48) <= 9u )
            break;
          ++v19;
        }
        v21 = atoi(v19);
        KiMaximumGroupSize = v21;
        if ( (unsigned int)(v21 - 1) > 0x3F || ((v21 - 1) & v21) != 0 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(104LL, v12, v14);
  HalInitializeProcessor((unsigned int)Number, a1, v14);
  KiSetFeatureBits(CurrentPrcb);
  v22 = CurrentPrcb->Number;
  v23 = KiSystemCall32;
  v24 = KiSystemCall64;
  if ( !v22 )
  {
    KiEnableKvaShadowing((__int64)CurrentPrcb);
    v22 = CurrentPrcb->Number;
  }
  if ( KiKvaShadow )
  {
    v23 = KiSystemCall32Shadow;
    v24 = (__int64 (__fastcall *)(void *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))KiSystemCall64Shadow;
  }
  if ( !v22 )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v25 = KiDebugTrapIndex;
    KiDebugTraps[KiDebugTrapIndex] = (__int64)v24;
    KiDebugTraps[++v25] = (__int64)v23;
    KiDebugTrapIndex = v25 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v23);
  __writemsr(0xC0000082, (unsigned __int64)v24);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(&unk_140572744, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
