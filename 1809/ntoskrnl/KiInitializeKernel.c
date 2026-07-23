/*
 * XREFs of KiInitializeKernel @ 0x140572310
 * Callers:
 *     KiSystemStartup @ 0x140566010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x1400ED9C0 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x14017396C (KeCompactServiceTable.c)
 *     HvlEnlightenProcessor @ 0x140178780 (HvlEnlightenProcessor.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x14017D720 (KiSetHardwareSpeculationControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x14017D850 (HviGetHypervisorFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x14017DD90 (KeGetXSaveFeatureFlags.c)
 *     KiConfigureInitialNodes @ 0x14017E2E8 (KiConfigureInitialNodes.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401BD290 (KiSetUserTbFlushPending.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiFatalFilter @ 0x14028F5D8 (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x1405662A0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x14056F464 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x14056FFB8 (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x1405700BC (KiEnableXSave.c)
 *     KiCompleteKernelInit @ 0x140572B50 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x140572E48 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x140573004 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1405730C4 (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x140573988 (KiConfigureProcessorBlock.c)
 *     KeInitializeProcess @ 0x14064CD20 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x140726C68 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     KiInitSystem @ 0x1409D42F0 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, int a5, void *a6)
{
  unsigned int v7; // r13d
  ULONG_PTR v8; // rdi
  _WORD *v9; // rbx
  ULONG_PTR v10; // r11
  unsigned int *v11; // r12
  int v12; // eax
  int v13; // r9d
  int v14; // ecx
  int v15; // r10d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r8d
  ULONG_PTR v19; // r13
  char v20; // al
  ULONG_PTR v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  int v24; // ebx
  char XSaveFeatureFlags; // al
  ULONG_PTR v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rdi
  _QWORD *v29; // rbx
  __int64 result; // rax
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rcx
  unsigned __int64 v41; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v43; // [rsp+30h] [rbp-2D8h]
  char v44; // [rsp+31h] [rbp-2D7h]
  int v45; // [rsp+34h] [rbp-2D4h]
  unsigned int v46; // [rsp+38h] [rbp-2D0h]
  unsigned int v47; // [rsp+3Ch] [rbp-2CCh]
  ULONG_PTR v48; // [rsp+40h] [rbp-2C8h]
  int v49; // [rsp+48h] [rbp-2C0h]
  int v50; // [rsp+4Ch] [rbp-2BCh]
  int v51; // [rsp+50h] [rbp-2B8h]
  __int64 v52; // [rsp+58h] [rbp-2B0h]
  ULONG_PTR v53; // [rsp+60h] [rbp-2A8h]
  ULONG_PTR v54; // [rsp+60h] [rbp-2A8h]
  __int64 v56; // [rsp+78h] [rbp-290h] BYREF
  int v57; // [rsp+80h] [rbp-288h]
  __int16 v58; // [rsp+84h] [rbp-284h]
  __int16 v59; // [rsp+86h] [rbp-282h]
  __int64 v60; // [rsp+88h] [rbp-280h]
  __int64 v61; // [rsp+90h] [rbp-278h]
  __int64 v62; // [rsp+98h] [rbp-270h]
  ULONG_PTR v63; // [rsp+A0h] [rbp-268h]
  void *v64; // [rsp+A8h] [rbp-260h]
  int v65[3]; // [rsp+B0h] [rbp-258h] BYREF
  int v66; // [rsp+BCh] [rbp-24Ch]
  _DWORD v67[128]; // [rsp+C0h] [rbp-248h] BYREF

  v60 = a3;
  v61 = a2;
  v62 = a2;
  v63 = a4;
  v64 = a6;
  v7 = a5;
  if ( !a5 )
  {
    HvlPhase0Initialize(a6);
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      MEMORY[0xFFFFF78000000308] = 1;
  }
  v8 = *(_QWORD *)(a4 + 25248);
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 141) - 1) <= 2u )
    KiSetHardwareSpeculationControlFeatures(a4, *(_QWORD *)(a4 + 25248));
  KiCheckMicrocode(a4);
  memset(v67, 0, sizeof(v67));
  _fxsave(v67);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v8 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    v9 = (_WORD *)(a4 + 24720);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), a5);
    v10 = a4;
    v48 = a4;
    v11 = (unsigned int *)(a4 + 164);
    if ( *(_QWORD *)(a4 + 160) == 0x100000001LL )
    {
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 24888) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v12 = *v11;
      v47 = *v11 * *(_DWORD *)(a4 + 160);
      v13 = ~(v47 - 1);
      v49 = v13;
      v14 = *(_DWORD *)(a4 + 212);
      v15 = v13 & v14;
      v50 = v13 & v14;
      *(_DWORD *)(a4 + 24888) = v13 & v14;
      v51 = ~(v12 - 1);
      v45 = v51 & v14;
      v16 = *(_QWORD *)(a4 + 200);
      v52 = v16;
      v43 = 0;
      v17 = 0;
      v46 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = v45;
        do
        {
          v53 = v10;
          v44 = v43;
          v19 = KiProcessorBlock[v17];
          if ( (*(_DWORD *)(v19 + 212) & v13) == v15 )
          {
            KeAddProcessorAffinityEx(v9, v17);
            KeAddProcessorAffinityEx((_WORD *)(v19 + 24720), a5);
            v20 = v43;
            if ( !v43 )
              v20 = 1;
            v43 = v20;
            v21 = v19;
            if ( v44 )
              v21 = v53;
            v48 = v21;
            v22 = KeCountSetBitsAffinityEx((_WORD *)(v19 + 24720));
            if ( v22 > v47 )
              KeBugCheckEx(0x3Eu, v19, v22, *(unsigned int *)(v19 + 160), *(unsigned int *)(v19 + 164));
            v9 = (_WORD *)(a4 + 24720);
            v17 = v46;
            v16 = v52;
            v18 = v45;
            v13 = v49;
            v15 = v50;
            v10 = v48;
          }
          if ( (*(_DWORD *)(v19 + 212) & v51) == v18 && *(_QWORD *)(v19 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v16 |= *(_QWORD *)(v19 + 200);
            v52 = v16;
            *(_QWORD *)(v19 + 24920) |= v16;
          }
          v46 = ++v17;
        }
        while ( v17 < (unsigned int)KeNumberProcessors_0 );
        v7 = a5;
      }
      v23 = KeCountSetBitsAffinityEx(v9);
      if ( v23 > v47 )
        KeBugCheckEx(0x3Eu, a4, v23, *(unsigned int *)(a4 + 160), *v11);
      *(_QWORD *)(a4 + 24920) = v52;
    }
    v24 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v31;
    if ( v31 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v32 = __readcr3();
      __writecr3(v32);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v38 = __readcr4();
      if ( (v38 & 0x20080) != 0 )
      {
        __writecr4(v38 ^ 0x80);
        __writecr4(v38);
      }
      else
      {
        v39 = __readcr3();
        __writecr3(v39);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v8 |= 0x80000000uLL;
    else
      v8 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v33 = __readcr4();
    __writecr4(v33 | 0x18);
    if ( KiFlushPcid )
    {
      v34 = __readcr3();
      __writecr3(v34);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v40 = __readcr4();
      if ( (v40 & 0x20080) != 0 )
      {
        __writecr4(v40 ^ 0x80);
        __writecr4(v40);
      }
      else
      {
        v41 = __readcr3();
        __writecr3(v41);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    v11 = (unsigned int *)(a4 + 164);
    *(_DWORD *)(a4 + 24888) = -(*(_DWORD *)(a4 + 160) * *(_DWORD *)(a4 + 164)) & *(_DWORD *)(a4 + 212);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), 0);
    *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
    v48 = a4;
    v24 = 65471;
    v35 = 65471;
    if ( v67[7] )
      v35 = v67[7];
    KiMxCsrMask = v35;
    KeCompactServiceTable(KiServiceTable, KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  v54 = v8;
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 24984) = 0LL;
  *(_QWORD *)(a4 + 24992) = a4 + 24992;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v8 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
      v8 = v54 | 0x808000;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v8 |= 0x4000000000uLL;
  }
  if ( v7 )
  {
    if ( v67[7] )
      v24 = v67[7];
    v26 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (v8 & 0x8000000) == 0 )
      v26 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v8 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v48 + 25248) & 0x100000) != 0 )
        v8 |= 0x100000uLL;
    }
    if ( v8 != v26
      || v24 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_DWORD *)(KiProcessorBlock[0] + 160) != *(_DWORD *)(a4 + 160)
      || *(_DWORD *)(KiProcessorBlock[0] + 164) != *v11 )
    {
      KeBugCheckEx(0x3Eu, v8, v26, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
    v27 = a1;
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 64);
    KeProcessorRevision = *(_WORD *)(a4 + 66);
    KeFeatureBits = v8;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_140422DE8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v58 = 0;
    v59 = 0;
    v57 = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    v56 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v27 = a1;
    KeInitializeProcess(a1, 0, (unsigned int)&v56, 0, 0LL, 1);
    *(_BYTE *)(a1 + 445) = 127;
    v36 = __rdtsc();
    KiWaitNever = __ROR8__(v36 ^ __ROL8__(v36, 43), v36 & 0xF);
    v37 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v37, 47) ^ v37, v37 & 0xF);
    HviGetHypervisorFeatures(v65);
    if ( (v66 & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave();
  MEMORY[0xFFFFF780000002F8] = 195LL;
  MEMORY[0xFFFFF78000000276] = 1;
  MEMORY[0xFFFFF78000000277] = 1;
  MEMORY[0xFFFFF7800000027A] = 1;
  MEMORY[0xFFFFF7800000027C] = 1;
  MEMORY[0xFFFFF7800000027D] = 1;
  MEMORY[0xFFFFF7800000027E] = 1;
  MEMORY[0xFFFFF78000000282] = 1;
  if ( (v8 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v8 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v8 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v8 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v8 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v8 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v8 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v8 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v28 = v61;
  KiInitializeIdleThread(v61, v60, v27, a4);
  if ( v7 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v29 = a6;
  }
  else
  {
    v29 = a6;
    InitBootProcessor(a6);
  }
  result = KiCompleteKernelInit(a4, v28, v7);
  v29[17] = 0LL;
  return result;
}
