/*
 * XREFs of ExpInitSystemPhase1 @ 0x140A03DEC
 * Callers:
 *     ExInitSystem @ 0x140A18360 (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140004950 (KeQueryMaximumProcessorCountEx.c)
 *     ExAllocateTimer @ 0x140176950 (ExAllocateTimer.c)
 *     ExInitializeProcessor @ 0x14018BD8C (ExInitializeProcessor.c)
 *     RtlGetProductInfo @ 0x140196480 (RtlGetProductInfo.c)
 *     ExpSaInitialize @ 0x14019A618 (ExpSaInitialize.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExRegisterHost @ 0x14075D0B4 (ExRegisterHost.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x140779B3C (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpTimerInitialization @ 0x140A03CD4 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x140A04844 (ExpWin32Initialization.c)
 *     ExpAeThresholdInitialization @ 0x140A16388 (ExpAeThresholdInitialization.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 *     ExpInitializeCallbacks @ 0x140A1C868 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x140A1DF20 (ExpKeyedEventInitialization.c)
 *     ExpWorkerFactoryInitialization @ 0x140A2084C (ExpWorkerFactoryInitialization.c)
 *     ExpInitializeSvm @ 0x140A20A18 (ExpInitializeSvm.c)
 *     ExpMutantInitialization @ 0x140A21514 (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x140A2180C (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x140A21F8C (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x140A22034 (ExpEventInitialization.c)
 */

char ExpInitSystemPhase1()
{
  unsigned int v0; // ebx
  bool i; // di
  bool v2; // bl
  bool v3; // di
  bool v4; // bl
  char v5; // di
  char v6; // bl
  char v7; // di
  int v8; // eax
  char v9; // bl
  char v10; // al
  char v11; // si
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx
  char v14; // al
  char v15; // bl
  char v16; // di
  int v17; // eax
  __int64 v18; // rdx
  char v20[8]; // [rsp+30h] [rbp-40h] BYREF
  int v21; // [rsp+38h] [rbp-38h]
  _DWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+48h] [rbp-28h]
  __int64 v24; // [rsp+50h] [rbp-20h]
  void (__fastcall *v25)(int); // [rsp+58h] [rbp-18h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  ULONG ReturnedProductType; // [rsp+90h] [rbp+20h] BYREF

  ExpSpinCycleCount = 0;
  if ( KeQueryMaximumProcessorCountEx(0xFFFFu) > 1 )
    ExpSpinCycleCount = 10240;
  ExpHostListLock = 0LL;
  qword_1409AD370 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v0 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v0 < (unsigned int)KeNumberProcessors_0; ++v0 )
    ExInitializeProcessor(KiProcessorBlock[v0], 0);
  v2 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v3 = (unsigned __int8)ExpMutantInitialization() != 0 && v2;
  v4 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v3;
  v5 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v4;
  v6 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v5 : 0;
  v7 = ExpTimerInitialization() ? v6 : 0;
  ExpHpGCTimerPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 0LL, 8u);
  if ( ExpHpGCTimerPaged && (ExpHpGCTimerNonPaged = ExAllocateTimer((__int64)ExpHpGCTimerCallback, 1LL, 8u)) != 0 )
  {
    ExpHpGCScheduledNonPaged = 0;
    v8 = 0;
    ExpHpGCScheduledPaged = 0;
    ExpHpGCInitialized = 1;
  }
  else
  {
    v8 = -1073741801;
  }
  v9 = v8 >= 0 ? v7 : 0;
  v10 = ExpProfileInitialization();
  ExpUuidLock = 0LL;
  ExpUuidLastTimeAllocated = MEMORY[0xFFFFF78000000014];
  v11 = v10 != 0 ? v9 : 0;
  if ( (int)ExpKeyedEventInitialization() < 0 )
    v11 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x20666E57u);
  ExpWnfDispatcher = (__int64)PoolWithTag;
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x30uLL);
    *(_DWORD *)v13 = 3148040;
    v13[3] = ExpWnfWorkItemRoutine;
    v14 = 1;
    v13[4] = 0LL;
    v13[1] = 0LL;
  }
  else
  {
    v14 = 0;
  }
  v15 = (unsigned __int8)ExpWin32Initialization() != 0 ? (v14 != 0 ? v11 : 0) : 0;
  if ( (int)ExpWorkerFactoryInitialization() < 0 )
    v15 = 0;
  v16 = ExpSaInitialize() != 0 ? v15 : 0;
  v17 = ExpMicrocodeInitialization(1LL);
  if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741637 )
    v16 = 0;
  v21 = 0;
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v20)
    && MEMORY[0xFFFFF78000000264] != v21
    && (MEMORY[0xFFFFF78000000264] != 2 || v21 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v21;
  }
  v22[1] = 5;
  v25 = ExpPcwHostCallback;
  v23 = 1LL;
  v22[0] = 65537;
  v24 = 0LL;
  v26 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v18, (unsigned __int16 *)v22) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeSvm();
  return v16;
}
