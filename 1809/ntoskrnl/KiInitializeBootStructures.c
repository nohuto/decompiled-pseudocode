/*
 * XREFs of KiInitializeBootStructures @ 0x140570E10
 * Callers:
 *     KiSystemStartup @ 0x140566010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     KiDetermineRetpolineEnablement @ 0x14019321C (KiDetermineRetpolineEnablement.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     atoi @ 0x140195090 (atoi.c)
 *     KiDetectTsx @ 0x1401B43D4 (KiDetectTsx.c)
 *     KiSaveInitialProcessorControlState @ 0x1401BBF50 (KiSaveInitialProcessorControlState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiGetProcessorSignature @ 0x14057062C (KiGetProcessorSignature.c)
 *     KiSetProcessorSignature @ 0x1405707A8 (KiSetProcessorSignature.c)
 *     ExInitPoolLookasidePointers @ 0x140571234 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x140571414 (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x1405717EC (KiSetFeatureBits.c)
 *     KiEnableKvaShadowing @ 0x140573BD8 (KiEnableKvaShadowing.c)
 *     KiInitializeIdt @ 0x140573E58 (KiInitializeIdt.c)
 *     InitializeBuildStrings @ 0x1409AC074 (InitializeBuildStrings.c)
 *     KiInitializeNxSupportDiscard @ 0x1409B0820 (KiInitializeNxSupportDiscard.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 *     ExRngInitializeSystem @ 0x1409DA0AC (ExRngInitializeSystem.c)
 *     HvlEnableVsmCalls @ 0x1409E0548 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 Number; // rbp
  __int64 v5; // r10
  _KTHREAD *v6; // rbx
  __int64 v7; // rax
  bool v8; // zf
  _KIDTENTRY64 *IdtBase; // r15
  unsigned int ProcessorSignature; // eax
  unsigned __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  int v16; // eax
  const char *v17; // rcx
  char *v18; // rax
  char v19; // cl
  __int64 (__fastcall *v20)(); // rbx
  __int64 (__fastcall *v21)(); // rsi
  int v22; // ecx
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

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
    KiFeatureSettings = *(_DWORD *)(v5 + 3420);
    KiFeatureSimulations = (*(_DWORD *)(v5 + 116) >> 21) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    CurrentPrcb->IsrStack = (void *)(*(_QWORD *)(a1 + 128) + 28672LL);
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v6 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v6;
  CurrentPrcb->IdleThread = v6;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v6->Header.Lock, 0x15u);
  v6->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v6->ApcState.ApcListHead[0].Blink = v6->ApcState.ApcListHead;
  v6->ApcState.ApcListHead[0].Flink = v6->ApcState.ApcListHead;
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v7 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v7 + 40) = &KiDispatchInterruptContinue;
  v8 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v7;
  if ( v8 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  ProcessorSignature = KiGetProcessorSignature(&CurrentPrcb->CpuVendor, (int *)&v25, (int *)&v24, &v26);
  v12 = v25;
  v13 = ProcessorSignature;
  LOWORD(ProcessorSignature) = v26 | ((_WORD)v24 << 8);
  v8 = CurrentPrcb->CpuVendor == 2;
  CurrentPrcb->CpuID = 1;
  CurrentPrcb->CpuType = v12;
  CurrentPrcb->CpuStep = ProcessorSignature;
  if ( v8 && (v12 >= 0xF || v12 == 6 && v24 > 0xD) )
  {
    v14 = __readmsr(0x1A0u) & 0xFFFFFFFFFFBFFFFFuLL;
    v11 = HIDWORD(v14);
    __writemsr(0x1A0u, v14);
  }
  if ( !(_DWORD)Number )
  {
    KiSetProcessorSignature((__int64)CurrentPrcb, v13);
    IdtBase[263].Alignment = (unsigned __int64)Pcr;
    HvlEnableVsmCalls(a1);
    ExRngInitializeSystem();
    KiDetermineRetpolineEnablement(a1);
    MmInitSystem(0xFFFFFFFFLL, a1);
    v15 = *(_QWORD *)(a1 + 240);
    v16 = *(_DWORD *)(v15 + 116);
    if ( (v16 & 8) != 0 )
    {
      KiBootDebuggerActive = 1;
      v16 = *(_DWORD *)(v15 + 116);
    }
    if ( (v16 & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v17 = *(const char **)(a1 + 216);
    if ( v17 )
    {
      v18 = strstr(v17, "GROUPSIZE");
      if ( v18 )
      {
        while ( 1 )
        {
          v19 = *v18;
          if ( !*v18 || v19 == 32 || (unsigned __int8)(v19 - 48) <= 9u )
            break;
          ++v18;
        }
        KiMaximumGroupSize = atoi(v18);
        if ( (unsigned int)(KiMaximumGroupSize - 1) > 0x3F )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard(104LL, v11, v13);
  HalInitializeProcessor((unsigned int)Number, a1, v13);
  KiSetFeatureBits(CurrentPrcb);
  v20 = KiSystemCall32;
  v21 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !CurrentPrcb->Number )
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
  if ( KiKvaShadow )
  {
    v20 = KiSystemCall32Shadow;
    v21 = KiSystemCall64Shadow;
  }
  if ( !CurrentPrcb->Number )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v22 = KiDebugTrapIndex;
    KiDebugTraps[KiDebugTrapIndex] = (__int64)v21;
    KiDebugTraps[++v22] = (__int64)v20;
    KiDebugTrapIndex = v22 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v20);
  __writemsr(0xC0000082, (unsigned __int64)v21);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(&unk_1405426A4, 0, 0xA4uLL);
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
