/*
 * XREFs of NtAllocateUuids @ 0x1406E60F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExpUuidSaveSequenceNumberIf @ 0x1406E62AC (ExpUuidSaveSequenceNumberIf.c)
 *     ExpAllocateUuids @ 0x1406E62D8 (ExpAllocateUuids.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtAllocateUuids(PULARGE_INTEGER Time, PULONG Range, PULONG Sequence, PUCHAR Seed)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rsi
  _RTL_BALANCED_NODE *v13; // rax
  _RTL_BALANCED_NODE *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS v17; // edi
  __int64 v18; // r8
  char v19; // di
  signed __int64 v20; // rbx
  char v22; // bl
  ULONG v23; // [rsp+24h] [rbp-54h] BYREF
  ULONG v24; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v25[3]; // [rsp+30h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-30h]
  signed __int64 v27; // [rsp+50h] [rbp-28h]

  v25[0] = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( ((unsigned __int8)Time & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = 0x7FFFFFFF0000LL;
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Time < 0x7FFFFFFF0000LL )
      v9 = (__int64)Time;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 7) = *(_BYTE *)(v9 + 7);
    if ( ((unsigned __int8)Range & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Range < 0x7FFFFFFF0000LL )
      v10 = (__int64)Range;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ((unsigned __int8)Sequence & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Sequence < 0x7FFFFFFF0000LL )
      v11 = (__int64)Sequence;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (unsigned __int64)Seed < 0x7FFFFFFF0000LL )
      v8 = (__int64)Seed;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 5) = *(_BYTE *)(v8 + 5);
  }
  v12 = KeGetCurrentThread();
  --v12->KernelApcDisable;
  v13 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
  v14 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v13, (ULONG_PTR)&ExpUuidLock);
  if ( v14 )
    BYTE2(v14[1].Left) |= 1u;
  v17 = ExpAllocateUuids(v25, &v23, &v24);
  if ( v17 < 0 )
  {
    v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v22 & 2) != 0 && (v22 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    return v17;
  }
  else
  {
    ExpUuidSaveSequenceNumberIf(v16, v15, v18);
    v19 = ExpUuidCacheValid;
    v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    v27 = v20;
    if ( (v20 & 2) != 0 && (v20 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)v12);
    *Time = (ULARGE_INTEGER)v25[0];
    *Range = v23;
    *Sequence = v24;
    *(_DWORD *)Seed = *(int *)((char *)&dword_1409AD30C + 2);
    *((_WORD *)Seed + 2) = HIWORD(dword_1409AD310);
    return v19 == 0 ? 0x40020056 : 0;
  }
}
