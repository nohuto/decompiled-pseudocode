/*
 * XREFs of KiInitializeKernel @ 0x1405A1240
 * Callers:
 *     KiSystemStartup @ 0x140595010 (KiSystemStartup.c)
 * Callees:
 *     KeCountSetBitsAffinityEx @ 0x1400B8D40 (KeCountSetBitsAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400BE1E0 (KeAddProcessorAffinityEx.c)
 *     KeCompactServiceTable @ 0x14017A928 (KeCompactServiceTable.c)
 *     HvlEnlightenProcessor @ 0x140181EF4 (HvlEnlightenProcessor.c)
 *     KiConfigureInitialNodes @ 0x140185B08 (KiConfigureInitialNodes.c)
 *     KiSetHardwareSpeculationControlFeatures @ 0x14018B490 (KiSetHardwareSpeculationControlFeatures.c)
 *     HviGetHypervisorFeatures @ 0x14018B590 (HviGetHypervisorFeatures.c)
 *     KeGetXSaveFeatureFlags @ 0x14018B8D0 (KeGetXSaveFeatureFlags.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x1401C4CD0 (KiSetUserTbFlushPending.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiFatalFilter @ 0x1402A5DE8 (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x1405952A0 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x14059DC10 (KiSetPageAttributesTable.c)
 *     KiCheckMicrocode @ 0x14059E9EC (KiCheckMicrocode.c)
 *     KiEnableXSave @ 0x14059EAF0 (KiEnableXSave.c)
 *     KiConfigureProcessorBlock @ 0x14059F5F4 (KiConfigureProcessorBlock.c)
 *     KiCompleteKernelInit @ 0x1405A1ABC (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1405A1DB4 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x1405A1F70 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1405A2030 (KiSetCacheInformation.c)
 *     KeInitializeProcess @ 0x140692038 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x1407882AC (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 *     KiInitSystem @ 0x140A16EF4 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, int a5, __int64 a6)
{
  unsigned int v7; // r13d
  ULONG_PTR v8; // rdi
  _WORD *v9; // rbx
  unsigned __int8 v10; // cl
  _BYTE *v11; // r12
  int v12; // eax
  int v13; // r10d
  int v14; // ecx
  int v15; // r11d
  __int64 v16; // rdx
  unsigned int v17; // ecx
  int v18; // r8d
  int v19; // r9d
  ULONG_PTR v20; // r13
  char v21; // al
  ULONG_PTR v22; // rax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // ebx
  char XSaveFeatureFlags; // al
  ULONG_PTR v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rbx
  __int64 result; // rax
  int v32; // eax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  int v36; // eax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  char v44; // [rsp+30h] [rbp-2D8h]
  char v45; // [rsp+31h] [rbp-2D7h]
  int v46; // [rsp+34h] [rbp-2D4h]
  int v47; // [rsp+38h] [rbp-2D0h]
  unsigned int v48; // [rsp+3Ch] [rbp-2CCh]
  unsigned int v49; // [rsp+40h] [rbp-2C8h]
  ULONG_PTR v50; // [rsp+48h] [rbp-2C0h]
  int v51; // [rsp+50h] [rbp-2B8h]
  int v52; // [rsp+54h] [rbp-2B4h]
  __int64 v53; // [rsp+58h] [rbp-2B0h]
  ULONG_PTR v54; // [rsp+60h] [rbp-2A8h]
  __int64 v55; // [rsp+68h] [rbp-2A0h] BYREF
  __int64 v56; // [rsp+70h] [rbp-298h]
  __int64 v57; // [rsp+78h] [rbp-290h]
  __int64 v58; // [rsp+80h] [rbp-288h]
  __int64 v59; // [rsp+88h] [rbp-280h]
  __int64 v60; // [rsp+90h] [rbp-278h]
  __int64 v61; // [rsp+98h] [rbp-270h]
  ULONG_PTR v62; // [rsp+A0h] [rbp-268h]
  __int64 v63; // [rsp+A8h] [rbp-260h]
  __int64 v64; // [rsp+B0h] [rbp-258h] BYREF
  __int64 v65; // [rsp+B8h] [rbp-250h]
  _DWORD v66[128]; // [rsp+C0h] [rbp-248h] BYREF

  v59 = a3;
  v60 = a2;
  v57 = a1;
  v61 = a2;
  v62 = a4;
  v58 = a6;
  v63 = a6;
  v55 = 0LL;
  v56 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  memset(v66, 0, sizeof(v66));
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
  memset(v66, 0, sizeof(v66));
  _fxsave(v66);
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v8 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    v9 = (_WORD *)(a4 + 24720);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), a5);
    v50 = a4;
    v10 = *(_BYTE *)(a4 + 142);
    v11 = (_BYTE *)(a4 + 143);
    if ( v10 == 1 && *v11 == 1 )
    {
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
      *(_DWORD *)(a4 + 24888) = *(_DWORD *)(a4 + 212);
    }
    else
    {
      v12 = (unsigned __int8)*v11;
      v49 = v12 * v10;
      v13 = ~(v49 - 1);
      v51 = v13;
      v14 = *(_DWORD *)(a4 + 212);
      v15 = v13 & v14;
      v52 = v13 & v14;
      *(_DWORD *)(a4 + 24888) = v13 & v14;
      v46 = ~(v12 - 1);
      v47 = v46 & v14;
      v16 = *(_QWORD *)(a4 + 200);
      v53 = v16;
      v44 = 0;
      v17 = 0;
      v48 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v18 = ~(v12 - 1);
        v19 = v47;
        do
        {
          v45 = v44;
          v20 = KiProcessorBlock[v17];
          if ( (v13 & *(_DWORD *)(v20 + 212)) == v15 )
          {
            KeAddProcessorAffinityEx(v9, v17);
            KeAddProcessorAffinityEx((_WORD *)(v20 + 24720), a5);
            v21 = v44;
            if ( !v44 )
              v21 = 1;
            v44 = v21;
            v22 = v20;
            if ( v45 )
              v22 = v50;
            v50 = v22;
            v23 = KeCountSetBitsAffinityEx((_WORD *)(v20 + 24720));
            if ( v23 > v49 )
              KeBugCheckEx(0x3Eu, v20, v23, *(unsigned __int8 *)(v20 + 142), *(unsigned __int8 *)(v20 + 143));
            v9 = (_WORD *)(a4 + 24720);
            v17 = v48;
            v16 = v53;
            v18 = v46;
            v19 = v47;
            v13 = v51;
            v15 = v52;
          }
          if ( (v18 & *(_DWORD *)(v20 + 212)) == v19 && *(_QWORD *)(v20 + 192) == *(_QWORD *)(a4 + 192) )
          {
            v16 |= *(_QWORD *)(v20 + 200);
            v53 = v16;
            *(_QWORD *)(v20 + 24920) |= v16;
          }
          v48 = ++v17;
        }
        while ( v17 < (unsigned int)KeNumberProcessors_0 );
        v7 = a5;
      }
      v24 = KeCountSetBitsAffinityEx(v9);
      if ( v24 > v49 )
        KeBugCheckEx(0x3Eu, a4, v24, *(unsigned __int8 *)(a4 + 142), (unsigned __int8)*v11);
      *(_QWORD *)(a4 + 24920) = v53;
    }
    v25 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v32;
    if ( v32 )
      v8 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      v33 = __readcr3();
      __writecr3(v33);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v39 = __readcr4();
      if ( (v39 & 0x20080) != 0 )
      {
        __writecr4(v39 ^ 0x80);
        __writecr4(v39);
      }
      else
      {
        v40 = __readcr3();
        __writecr3(v40);
      }
    }
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v8 |= 0x80000000uLL;
    else
      v8 = v8 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v34 = __readcr4();
    __writecr4(v34 | 0x18);
    if ( KiFlushPcid )
    {
      v35 = __readcr3();
      __writecr3(v35);
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v41 = __readcr4();
      if ( (v41 & 0x20080) != 0 )
      {
        __writecr4(v41 ^ 0x80);
        __writecr4(v41);
      }
      else
      {
        v42 = __readcr3();
        __writecr3(v42);
      }
    }
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    v11 = (_BYTE *)(a4 + 143);
    *(_DWORD *)(a4 + 24888) = -(*(unsigned __int8 *)(a4 + 142) * *(unsigned __int8 *)(a4 + 143)) & *(_DWORD *)(a4 + 212);
    *(_QWORD *)(a4 + 24720) = 1310721LL;
    memset((void *)(a4 + 24728), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24720), 0);
    *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 200);
    v50 = a4;
    v25 = 65471;
    v36 = 65471;
    if ( v66[7] )
      v36 = v66[7];
    KiMxCsrMask = v36;
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
    if ( v66[7] )
      v25 = v66[7];
    v27 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    if ( (v8 & 0x8000000) == 0 )
      v27 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 141) == 2 && *(_BYTE *)(a4 + 64) == 6 && *(_BYTE *)(a4 + 67) == 23 && *(_BYTE *)(a4 + 66) == 10 )
    {
      v8 &= ~0x100000uLL;
      if ( (*(_DWORD *)(v50 + 25248) & 0x100000) != 0 )
        v8 |= 0x100000uLL;
    }
    if ( v8 != v27
      || v25 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 232) != *(_DWORD *)(a4 + 232)
      || *(_BYTE *)(KiProcessorBlock[0] + 142) != *(_BYTE *)(a4 + 142)
      || *(_BYTE *)(KiProcessorBlock[0] + 143) != *v11 )
    {
      KeBugCheckEx(0x3Eu, v8, v27, 0LL, 0LL);
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 )
      KeGetCurrentIrql();
    __writecr8(2uLL);
    HvlEnlightenProcessor(0);
    v28 = v57;
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
    qword_14044D9C8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v56 = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
    v55 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
    v28 = v57;
    KeInitializeProcess(v57, 0, (unsigned int)&v55, 0, 0LL, 1);
    *(_BYTE *)(v28 + 449) = 127;
    v37 = __rdtsc();
    KiWaitNever = __ROR8__(v37 ^ __ROL8__(v37, 43), v37 & 0xF);
    v38 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v38, 47) ^ v38, v38 & 0xF);
    HviGetHypervisorFeatures(&v64);
    if ( (v65 & 0x100000000000LL) != 0 )
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
  v29 = v60;
  KiInitializeIdleThread(v60, v59, v28, a4);
  if ( v7 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v30 = v58;
  }
  else
  {
    v30 = v58;
    InitBootProcessor(v58);
  }
  result = KiCompleteKernelInit(a4, v29, v7);
  *(_QWORD *)(v30 + 136) = 0LL;
  return result;
}
