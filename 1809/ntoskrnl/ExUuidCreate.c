/*
 * XREFs of ExUuidCreate @ 0x1406072C0
 * Callers:
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     CmpUuidCreate @ 0x140681C2C (CmpUuidCreate.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x140817E40 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408318A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406C730C (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x1406C7338 (ExpAllocateUuids.c)
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
  __int64 v14; // rcx
  char v15; // al
  bool v16; // zf
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int32 v18; // [rsp+68h] [rbp+10h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = -1073741267;
  while ( 1 )
  {
    do
    {
      v5 = ExpUuidCachedValues;
      v6 = ExpUuidCacheValid;
      *(_DWORD *)Uuid->Data4 = dword_14096E27C;
      *(_DWORD *)&Uuid->Data4[4] = dword_14096E280;
      v7 = _InterlockedDecrement(&dword_14096E278);
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
    v13 = ExpAllocateUuids(&v19, &v18, &v17);
    if ( v13 == -1073741267 )
      goto LABEL_21;
    if ( v13 < 0 )
      break;
    BYTE1(dword_14096E27C) = v17;
    v14 = v17 >> 8;
    v19 += 5748192000000000LL;
    LOBYTE(v14) = BYTE1(v17) & 0x3F | 0x80;
    LOBYTE(dword_14096E27C) = v14;
    ExpUuidCachedValues = v19 + (unsigned int)(v18 - 1);
    ExpUuidSaveSequenceNumberIf(v14, ExpUuidCachedValues, (unsigned int)_InterlockedExchange(&dword_14096E278, v18));
    v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v15 & 2) == 0 )
      goto LABEL_15;
    v16 = (v15 & 4) == 0;
LABEL_18:
    if ( v16 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
LABEL_15:
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  v4 = -1073741801;
LABEL_21:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
  KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  return v4;
}
