/*
 * XREFs of VrpLoadDifferencingHive @ 0x1408471BC
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140842924 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140842C58 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmLoadDifferencingKey @ 0x140638BDC (CmLoadDifferencingKey.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140846C24 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140846C74 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140846CBC (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140846FDC (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1408474E4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140847740 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        PCUNICODE_STRING String1,
        const void **a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  char v8; // r13
  HANDLE v9; // r12
  int DiffHiveEntryForMountPoint; // r14d
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rdi
  volatile signed __int64 *v13; // r15
  char v14; // si
  signed __int64 v15; // rax
  unsigned __int64 i; // rcx
  signed __int64 v17; // rtt
  unsigned int j; // r14d
  HANDLE v19; // rcx
  struct _KTHREAD *v20; // rax
  int v22; // [rsp+40h] [rbp-C8h]
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-90h] BYREF
  int v26[12]; // [rsp+A8h] [rbp-60h] BYREF
  int v27[28]; // [rsp+D8h] [rbp-30h] BYREF

  memset(v26, 0, sizeof(v26));
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v27, 0, 0x30uLL);
  P = 0LL;
  KeyHandle = 0LL;
  v8 = 0;
  v9 = 0LL;
  DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(String1, a2, (__int64 *)&P);
  if ( DiffHiveEntryForMountPoint < 0 )
    goto LABEL_39;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = (char *)P;
  v13 = (volatile signed __int64 *)((char *)P + 24);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)P + 24, 0LL);
  v14 = 1;
  if ( ++*((_QWORD *)v12 + 4) <= 1uLL )
  {
    _m_prefetchw(v12 + 16);
    v15 = *((_QWORD *)v12 + 2);
    for ( i = v15 + 1; ; i = v15 + 1 )
    {
      if ( i <= 1 )
      {
        if ( i != 1 )
          __fastfail(0xEu);
        __fastfail(0xEu);
      }
      v17 = v15;
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)v12 + 2, i, v15);
      if ( v17 == v15 )
        break;
    }
    v12 = (char *)P;
  }
  if ( (*((_DWORD *)v12 + 14) & 1) == 0 )
  {
    for ( j = 0; j < 2; ++j )
    {
      if ( (*((_DWORD *)v12 + 14) & 1) != 0 )
        break;
      v8 = VrpBecomeDiffHiveEntryTransitionOwner((__int64)v12);
      if ( v8 )
        goto LABEL_19;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v12);
    }
    if ( (*((_DWORD *)v12 + 14) & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = *((_DWORD *)v12 + 15);
      goto LABEL_35;
    }
LABEL_19:
    if ( (*((_DWORD *)v12 + 14) & 1) != 0 )
    {
LABEL_31:
      DiffHiveEntryForMountPoint = 0;
      v14 = 0;
LABEL_32:
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v12);
      if ( !v14 )
        goto LABEL_36;
LABEL_35:
      VrpDecrementDiffHiveEntryHardRefCount((__int64)v12);
      goto LABEL_36;
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( a3->Length )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_30;
      v19 = KeyHandle;
      if ( a5 )
        v9 = KeyHandle;
    }
    else
    {
      v19 = KeyHandle;
    }
    *(_QWORD *)&v27[4] = String1;
    *(_QWORD *)&v26[4] = a2;
    *(_QWORD *)&v27[2] = 0LL;
    *(_QWORD *)&v26[2] = 0LL;
    v27[0] = 48;
    v27[6] = 576;
    *(_OWORD *)&v27[8] = 0LL;
    v26[0] = 48;
    v26[6] = 576;
    *(_OWORD *)&v26[8] = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)v27,
                                   v26,
                                   a4,
                                   (__int64)v9,
                                   0LL,
                                   0,
                                   0LL,
                                   v22,
                                   (__int64)v19,
                                   a6 != 0,
                                   0LL,
                                   0);
    if ( DiffHiveEntryForMountPoint >= 0 )
      DiffHiveEntryForMountPoint = 0;
LABEL_30:
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
    *((_DWORD *)v12 + 14) = *((_DWORD *)v12 + 14) & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    v12 = (char *)P;
    *((_DWORD *)P + 15) = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_32;
    goto LABEL_31;
  }
  DiffHiveEntryForMountPoint = 0;
LABEL_36:
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v13);
  KeAbPostRelease((ULONG_PTR)v13);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_39:
  if ( P )
    VrpDereferenceDiffHiveEntry(P);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
