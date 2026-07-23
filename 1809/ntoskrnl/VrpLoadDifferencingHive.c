/*
 * XREFs of VrpLoadDifferencingHive @ 0x14080EAF8
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14080A270 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14080A59C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14080E50C (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14080E55C (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14080E5A4 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080EE7C (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 */

__int64 __fastcall VrpLoadDifferencingHive(
        PCUNICODE_STRING String1,
        const void **a2,
        UNICODE_STRING *a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7)
{
  HANDLE v9; // r12
  int DiffHiveEntryForMountPoint; // esi
  struct _KTHREAD *CurrentThread; // rax
  char *v12; // rdi
  volatile signed __int64 *v13; // r15
  char v14; // r14
  signed __int64 v15; // rax
  unsigned __int64 i; // rcx
  signed __int64 v17; // rtt
  unsigned int j; // esi
  HANDLE v19; // rcx
  struct _KTHREAD *v20; // rax
  int v22; // [rsp+38h] [rbp-C8h]
  char v23; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v28; // [rsp+B0h] [rbp-50h] BYREF
  int v29; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-18h]
  const void **v31; // [rsp+F0h] [rbp-10h]
  int v32; // [rsp+F8h] [rbp-8h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  int v34; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+118h] [rbp+18h]
  PCUNICODE_STRING v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+128h] [rbp+28h]
  __int128 v38; // [rsp+130h] [rbp+30h]

  v9 = 0LL;
  P = 0LL;
  v23 = 0;
  Handle = 0LL;
  KeyHandle = 0LL;
  if ( !a7 )
  {
LABEL_6:
    DiffHiveEntryForMountPoint = VrpFindOrCreateDiffHiveEntryForMountPoint(String1, a2, (__int64 *)&P);
    if ( DiffHiveEntryForMountPoint < 0 )
    {
LABEL_44:
      if ( P )
        VrpDereferenceDiffHiveEntry(P);
      goto LABEL_46;
    }
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
    if ( (*((_DWORD *)v12 + 14) & 1) != 0 )
    {
      DiffHiveEntryForMountPoint = 0;
LABEL_41:
      if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v13);
      KeAbPostRelease((ULONG_PTR)v13);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_44;
    }
    for ( j = 0; j < 2; ++j )
    {
      if ( (*((_DWORD *)v12 + 14) & 1) != 0 )
        break;
      v23 = VrpBecomeDiffHiveEntryTransitionOwner((__int64)v12);
      if ( v23 )
        goto LABEL_24;
      VrpWaitForDiffHiveEntryTransitionOwnerToLeave(v12);
    }
    if ( (*((_DWORD *)v12 + 14) & 1) == 0 )
    {
      DiffHiveEntryForMountPoint = *((_DWORD *)v12 + 15);
      goto LABEL_40;
    }
LABEL_24:
    if ( (*((_DWORD *)v12 + 14) & 1) != 0 )
    {
LABEL_36:
      DiffHiveEntryForMountPoint = 0;
      v14 = 0;
LABEL_37:
      if ( v23 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v12);
      if ( !v14 )
        goto LABEL_41;
LABEL_40:
      VrpDecrementDiffHiveEntryHardRefCount((__int64)v12);
      goto LABEL_41;
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v13);
    KeAbPostRelease((ULONG_PTR)v13);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( a3->Length )
    {
      v28.RootDirectory = 0LL;
      v28.Length = 48;
      v28.Attributes = 576;
      v28.ObjectName = a3;
      *(_OWORD *)&v28.SecurityDescriptor = 0LL;
      DiffHiveEntryForMountPoint = ZwOpenKey(&Handle, 0x20019u, &v28);
      if ( DiffHiveEntryForMountPoint < 0 )
        goto LABEL_35;
      v19 = Handle;
      if ( a5 )
        v9 = Handle;
    }
    else
    {
      v19 = Handle;
    }
    v36 = String1;
    v31 = a2;
    v34 = 48;
    v37 = 576;
    v29 = 48;
    v32 = 576;
    v35 = 0LL;
    v38 = 0LL;
    v30 = 0LL;
    v33 = 0LL;
    DiffHiveEntryForMountPoint = CmLoadDifferencingKey(
                                   (__int64)&v34,
                                   (__int64)&v29,
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
LABEL_35:
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
    *((_DWORD *)v12 + 14) = *((_DWORD *)v12 + 14) & 0xFFFFFFFE | (DiffHiveEntryForMountPoint >= 0);
    v12 = (char *)P;
    *((_DWORD *)P + 15) = DiffHiveEntryForMountPoint;
    if ( DiffHiveEntryForMountPoint < 0 )
      goto LABEL_37;
    goto LABEL_36;
  }
  if ( a5 )
    return (unsigned int)-1073741811;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"\"$";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DiffHiveEntryForMountPoint = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( DiffHiveEntryForMountPoint >= 0 )
  {
    v9 = KeyHandle;
    goto LABEL_6;
  }
LABEL_46:
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)DiffHiveEntryForMountPoint;
}
