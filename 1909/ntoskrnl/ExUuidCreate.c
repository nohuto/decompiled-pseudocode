/*
 * XREFs of ExUuidCreate @ 0x140689DE0
 * Callers:
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     CmpUuidCreate @ 0x14068AEE4 (CmpUuidCreate.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     PipGenerateContainerID @ 0x14071D8E8 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14084FE60 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x14085E550 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14086A720 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x14092E29C (BiCreateObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406E70AC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x1406E70D8 (ExpAllocateUuids.c)
 */

NTSTATUS __stdcall ExUuidCreate(UUID *Uuid)
{
  struct _KTHREAD *CurrentThread; // r14
  NTSTATUS v3; // esi
  NTSTATUS v4; // r12d
  __int64 v5; // rdi
  char v6; // cl
  int v7; // eax
  __int64 v8; // rdi
  _RTL_BALANCED_NODE *v10; // rax
  signed __int8 v11; // cf
  _RTL_BALANCED_NODE *v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  char v15; // al
  bool v16; // zf
  char v17; // [rsp+60h] [rbp+8h] BYREF
  char v18; // [rsp+61h] [rbp+9h]
  __int32 v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = -1073741267;
  while ( 1 )
  {
    do
    {
      v5 = ExpUuidCachedValues;
      v6 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_1409AD30C;
      *(_DWORD *)&Uuid->Data4[4] = dword_1409AD310;
      v7 = _InterlockedDecrement(&dword_1409AD308);
    }
    while ( v5 != ExpUuidCachedValues );
    if ( v7 >= 0 )
    {
      v8 = v5 - v7;
      Uuid->Data1 = v8;
      Uuid->Data2 = WORD2(v8);
      Uuid->Data3 = HIWORD(v8) & 0xFFF | 0x1000;
      if ( !v6 )
        return 1073872982;
      return v3;
    }
    --CurrentThread->KernelApcDisable;
    v10 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v11 = _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL);
    v12 = v10;
    if ( v11 )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v10, (ULONG_PTR)&ExpUuidLock);
    if ( v12 )
      BYTE2(v12[1].Left) |= 1u;
    if ( v5 != ExpUuidCachedValues )
    {
      v16 = (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2;
      goto LABEL_18;
    }
    v20 = 0LL;
    v13 = ExpAllocateUuids(&v20, &v19, &v17);
    if ( v13 == -1073741267 )
      goto LABEL_21;
    if ( v13 < 0 )
      break;
    BYTE1(dword_1409AD30C) = v17;
    LOBYTE(dword_1409AD30C) = v18 & 0x3F | 0x80;
    ExpUuidCachedValues = v20 + (unsigned int)(v19 - 1) + 5748192000000000LL;
    ExpUuidSaveSequenceNumberIf(ExpUuidCachedValues, v14, (unsigned int)_InterlockedExchange(&dword_1409AD308, v19));
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) == 0 )
      goto LABEL_15;
    v16 = (v15 & 4) == 0;
LABEL_18:
    if ( v16 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
LABEL_15:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  v4 = -1073741801;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v4;
}
