/*
 * XREFs of CmDumpKey @ 0x14083A700
 * Callers:
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDoAccessCheckOnSubtree @ 0x14082DD0C (CmpDoAccessCheckOnSubtree.c)
 *     CmpFreeOffsetArray @ 0x140831610 (CmpFreeOffsetArray.c)
 *     CmpWriteOffsetArrayToFile @ 0x140831A08 (CmpWriteOffsetArrayToFile.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140840648 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmDumpKey(__int64 a1, void *a2, char a3)
{
  ULONG_PTR v6; // rdi
  char v7; // r14
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rsi
  PVOID *v12; // rbp
  unsigned int v13; // r15d
  __int64 v14; // rcx
  __int64 v15; // rbp
  HANDLE FileHandle; // [rsp+20h] [rbp-48h]
  int v18[2]; // [rsp+30h] [rbp-38h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v19 = 0;
  *(_QWORD *)v18 = 0LL;
  CmpLockRegistry();
  v6 = *(_QWORD *)(a1 + 8);
  v7 = 1;
  if ( *(PVOID *)(v6 + 32) == CmpMasterHive )
  {
    v8 = -1073741790;
LABEL_23:
    CmpUnlockRegistry();
    return (unsigned int)v8;
  }
  ExAcquirePushLockSharedEx(v6 + 48, 0LL);
  _InterlockedAdd((volatile signed __int32 *)(v6 + 56), 1u);
  v8 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( v8 < 0 )
  {
LABEL_22:
    CmpUnlockKcb(v6);
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v6 + 184) & 0x40000) == 0 )
  {
    v8 = -1073741811;
    goto LABEL_22;
  }
  if ( *(_WORD *)(v6 + 66) )
  {
    CmpUnlockKcb(v6);
    CmpUnlockRegistry();
    LOBYTE(v9) = a3;
    return (unsigned int)CmSaveKey(a1, a2, 5LL, v9);
  }
  else
  {
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(v6 + 32) + 72LL, 0LL);
    ExAcquirePushLockSharedEx(*(_QWORD *)(v6 + 32) + 1776LL, 0LL);
    LOBYTE(v10) = a3;
    v8 = CmpDoAccessCheckOnSubtree(
           *(_QWORD *)(v6 + 32),
           *(_DWORD *)(v6 + 40),
           v10,
           (struct _LOOKASIDE_LIST_EX *)0x20019,
           3u);
    ExReleasePushLockEx(*(_QWORD *)(v6 + 32) + 1776LL, 0LL);
    if ( v8 < 0 )
      goto LABEL_19;
    v8 = HvSnapshotHiveToOffsetArray(*(_QWORD *)(v6 + 32), &v19, v18, &v20);
    if ( v8 < 0 )
    {
      v13 = v19;
      v12 = *(PVOID **)v18;
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 32);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 72));
      KeAbPostRelease(v11 + 72);
      CmpUnlockKcb(v6);
      CmpUnlockRegistry();
      v12 = *(PVOID **)v18;
      v7 = 0;
      FileHandle = a2;
      v13 = v19;
      v8 = CmpWriteOffsetArrayToFile(v14, v19, *(__int64 *)v18, v20, FileHandle);
      if ( v8 >= 0 )
        v8 = 0;
    }
    if ( v12 )
      CmpFreeOffsetArray(v13, v12);
    if ( v7 )
    {
LABEL_19:
      v15 = *(_QWORD *)(v6 + 32);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v15 + 72), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v15 + 72));
      KeAbPostRelease(v15 + 72);
      goto LABEL_22;
    }
  }
  return (unsigned int)v8;
}
