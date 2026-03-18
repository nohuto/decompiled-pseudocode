/*
 * XREFs of MiLoadHotPatchForUserSid @ 0x14088F1E8
 * Callers:
 *     NtManageHotPatch @ 0x1408920D0 (NtManageHotPatch.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x140072C40 (RtlAvlInsertNodeEx.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     RtlHashBytes2 @ 0x1401BFAD0 (RtlHashBytes2.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     RtlCopySid @ 0x140644850 (RtlCopySid.c)
 *     MiAllocateHotPatchRecord @ 0x14088D430 (MiAllocateHotPatchRecord.c)
 *     MiCompareUserSidHotPatchNodes @ 0x14088DF04 (MiCompareUserSidHotPatchNodes.c)
 *     MiHotPatchAllProcesses @ 0x14088E6EC (MiHotPatchAllProcesses.c)
 *     MiInsertHotPatchRecord @ 0x14088ED68 (MiInsertHotPatchRecord.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 */

__int64 __fastcall MiLoadHotPatchForUserSid(const void **a1, void *a2, int *a3)
{
  int v6; // ebx
  _QWORD *HotPatchRecord; // rdi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v9; // r8
  _QWORD *v10; // rsi
  char v11; // al
  bool v12; // r13
  int v13; // eax
  _QWORD *v14; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // r15
  PVOID Object; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  void *v21; // [rsp+58h] [rbp-8h]
  ULONG DestinationSidLength; // [rsp+B8h] [rbp+58h]

  Handle = 0LL;
  Object = 0LL;
  v20 = 0LL;
  v21 = 0LL;
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
  v20 = RtlHashBytes2((const unsigned __int8 *)a2, DestinationSidLength, v9);
  v21 = a2;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&MiHotPatchListLock, 0LL);
  v10 = (_QWORD *)MiUserSidPatchLists;
  v11 = 0;
  v12 = 0;
  if ( !MiUserSidPatchLists )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = MiCompareUserSidHotPatchNodes(&v20, (__int64)v10);
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
    v16[4] = v20;
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
