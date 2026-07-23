/*
 * XREFs of ExpInitSystemPhase1 @ 0x1409B1434
 * Callers:
 *     ExInitSystem @ 0x1409D5FF0 (ExInitSystem.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1400A69C0 (KeQueryMaximumProcessorCountEx.c)
 *     ExInitializeProcessor @ 0x14017D68C (ExInitializeProcessor.c)
 *     RtlGetProductInfo @ 0x14018D760 (RtlGetProductInfo.c)
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 *     ExpHeapGCInitialization @ 0x1401B7710 (ExpHeapGCInitialization.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x140756354 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpTimerInitialization @ 0x1409B1324 (ExpTimerInitialization.c)
 *     ExpWin32Initialization @ 0x1409B1B98 (ExpWin32Initialization.c)
 *     ExpAeThresholdInitialization @ 0x1409D31FC (ExpAeThresholdInitialization.c)
 *     ExpWorkerInitialization @ 0x1409D5C50 (ExpWorkerInitialization.c)
 *     ExpInitializeCallbacks @ 0x1409DA2E4 (ExpInitializeCallbacks.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 *     ExpInitializeSvm @ 0x1409DE674 (ExpInitializeSvm.c)
 *     ExpWorkerFactoryInitialization @ 0x1409DE794 (ExpWorkerFactoryInitialization.c)
 *     ExpMutantInitialization @ 0x1409DEF6C (ExpMutantInitialization.c)
 *     ExpProfileInitialization @ 0x1409DF2E0 (ExpProfileInitialization.c)
 *     ExpSemaphoreInitialization @ 0x1409DF944 (ExpSemaphoreInitialization.c)
 *     ExpEventInitialization @ 0x1409DF9DC (ExpEventInitialization.c)
 */

char ExpInitSystemPhase1()
{
  ULONG MaximumProcessorCount; // eax
  unsigned int v1; // ebx
  bool i; // di
  bool v3; // bl
  bool v4; // di
  bool v5; // bl
  char v6; // di
  char v7; // bl
  char v8; // di
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
  int v22; // [rsp+40h] [rbp-30h] BYREF
  __int16 v23; // [rsp+44h] [rbp-2Ch]
  int v24; // [rsp+48h] [rbp-28h]
  __int64 v25; // [rsp+50h] [rbp-20h]
  void (__fastcall *v26)(int); // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  ULONG ReturnedProductType; // [rsp+90h] [rbp+20h] BYREF

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  ExpHostListLock = 0LL;
  ExpSpinCount = MaximumProcessorCount > 1 ? 0x400 : 0;
  qword_14096E2E0 = (__int64)&ExpHostList;
  ExpHostList = (__int64)&ExpHostList;
  ExpKeyManipLock = 0LL;
  ExpPlatformBinaryLock = 0LL;
  v1 = 0;
  for ( i = (int)ExpWorkerInitialization() >= 0; v1 < (unsigned int)KeNumberProcessors_0; ++v1 )
    ExInitializeProcessor(KiProcessorBlock[v1], 0);
  v3 = (unsigned __int8)ExpEventInitialization() != 0 && i;
  v4 = (unsigned __int8)ExpMutantInitialization() != 0 && v3;
  v5 = (unsigned __int8)ExpAeThresholdInitialization() != 0 && v4;
  v6 = (unsigned __int8)ExpInitializeCallbacks() != 0 && v5;
  v7 = (unsigned __int8)ExpSemaphoreInitialization() != 0 ? v6 : 0;
  v8 = ExpTimerInitialization() ? v7 : 0;
  v9 = ExpHeapGCInitialization() ? v8 : 0;
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
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType)
    && ReturnedProductType != -1412584499
    && ExpGetProductInfoSuiteTypeMap(ReturnedProductType, (__int64)v20)
    && MEMORY[0xFFFFF78000000264] != v21
    && (MEMORY[0xFFFFF78000000264] != 2 || v21 != 3) )
  {
    MEMORY[0xFFFFF78000000264] = v21;
  }
  v22 = 65537;
  v23 = 5;
  v24 = 1;
  v26 = ExpPcwHostCallback;
  v25 = 0LL;
  v27 = 0LL;
  if ( (int)ExRegisterHost(&ExpPcwExtensionHost, v18, (unsigned __int16 *)&v22) < 0 )
    ExpPcwExtensionHost = 0LL;
  ExpInitializeSvm();
  return v16;
}
