/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x140856E98
 * Callers:
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140064B30 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlHashBytes2 @ 0x1402FE4D8 (RtlHashBytes2.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     MiAllocateHotPatchRecord @ 0x14085525C (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x140855D08 (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x1408564E8 (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, void *a2, int *a3)
{
  int v6; // ebx
  _QWORD *HotPatchRecord; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // r8
  _QWORD *v10; // rsi
  char v11; // al
  bool v12; // r12
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rbp
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-40h] BYREF
  unsigned __int64 v20[2]; // [rsp+50h] [rbp-38h] BYREF
  ULONG DestinationSidLength; // [rsp+A8h] [rbp+20h]

  Handle = 0LL;
  Object = 0LL;
  v6 = MiOpenHotPatchFile((_DWORD)a1, 1, 0, (unsigned int)&Handle, (__int64)&Object, 0LL, (__int64)a3, 0LL);
  if ( v6 < 0 )
    goto LABEL_24;
  HotPatchRecord = MiAllocateHotPatchRecord(*a3, a3[1], a1);
  if ( !HotPatchRecord )
  {
    v6 = -1073741670;
    goto LABEL_24;
  }
  CurrentThread = KeGetCurrentThread();
  DestinationSidLength = RtlLengthSid(a2);
  v20[0] = RtlHashBytes2((const unsigned __int8 *)a2, DestinationSidLength, v9);
  v20[1] = (unsigned __int64)a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  v10 = (_QWORD *)MiUserSidPatchLists;
  v11 = 0;
  v12 = 0;
  if ( !MiUserSidPatchLists )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = MiCompareUserSidHotPatchNodes(v20, (__int64)v10);
    if ( v13 > 0 )
    {
      v14 = (_QWORD *)v10[1];
      if ( !v14 )
      {
        v12 = 1;
        goto LABEL_14;
      }
      goto LABEL_10;
    }
    if ( v13 >= 0 )
      break;
    v14 = (_QWORD *)*v10;
    if ( !*v10 )
    {
      v12 = 0;
      goto LABEL_14;
    }
LABEL_10:
    v10 = v14;
  }
  v11 = 1;
LABEL_13:
  if ( !v11 )
  {
LABEL_14:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, DestinationSidLength + 40, 0x73486D4Du);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
      KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      v6 = -1073741670;
      goto LABEL_22;
    }
    memset(PoolWithTag, 0, 0x38uLL);
    v16[3] = 0LL;
    v16[4] = v20[0];
    RtlCopySid(DestinationSidLength, v16 + 5, a2);
    RtlAvlInsertNodeEx((unsigned __int64 *)&MiUserSidPatchLists, (unsigned __int64)v10, v12, v16);
    v10 = v16;
  }
  MiInsertHotPatchRecord(v10 + 3, HotPatchRecord, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&MiHotPatchListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&MiHotPatchListLock);
  KeAbPostRelease((ULONG_PTR)&MiHotPatchListLock);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  HotPatchRecord = 0LL;
  MiHotPatchAllProcesses(*a3, a3[1]);
  v6 = 0;
LABEL_22:
  if ( HotPatchRecord )
    ExFreePoolWithTag(HotPatchRecord, 0);
LABEL_24:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  return (unsigned int)v6;
}
