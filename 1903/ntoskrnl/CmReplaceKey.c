/*
 * XREFs of CmReplaceKey @ 0x140829994
 * Callers:
 *     NtReplaceKey @ 0x140824BF0 (NtReplaceKey.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1401C0A30 (ZwFlushBuffersFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpCmdHiveOpen @ 0x14069010C (CmpCmdHiveOpen.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140757AB8 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDestroyHive @ 0x14082F4C4 (CmpDestroyHive.c)
 *     CmpCmdRenameHive @ 0x140834360 (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x140837104 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, void *a4)
{
  char v6; // r12
  char v7; // r13
  int v8; // edi
  volatile signed __int64 *v9; // r15
  HANDLE *v10; // r14
  char v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v15[56]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16[44]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+210h] [rbp+110h] BYREF

  P[1] = a4;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v12[0] = 0;
  v6 = 0;
  v7 = 0;
  memset(v15, 0, 0x30uLL);
  P[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  v8 = CmpCmdHiveOpen(a3, 0, v12, (ULONG_PTR *)P, 0x1000001u, 0, 0LL, 0LL, v16);
  if ( v8 < 0 )
  {
LABEL_22:
    v10 = (HANDLE *)P[0];
    goto LABEL_23;
  }
  CmpAttachToRegistryProcess((__int64)v15);
  v6 = 1;
  CmpLockRegistry();
  v9 = (volatile signed __int64 *)(a1 + 72);
  ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
  if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
    goto LABEL_3;
  if ( (*(_DWORD *)(a1 + 4152) & 0x20) != 0 )
    goto LABEL_5;
  if ( a1 == qword_140424FF0 )
  {
    v8 = CmpPreserveSystemHiveData(a1, P[0]);
    if ( v8 < 0 )
      goto LABEL_18;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v10 = (HANDLE *)P[0];
  v8 = CmpFlushHive((ULONG_PTR)P[0], 0xCu);
  if ( v8 >= 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
    v6 = 0;
    CmpBecomeActiveFlusherAndReconciler(a1);
    v7 = 1;
    CmpLockRegistry();
    ExAcquirePushLockExclusiveEx(a1 + 72, 0LL);
    if ( (*(_DWORD *)(a1 + 160) & 4) != 0 )
    {
LABEL_3:
      v8 = -1073741611;
LABEL_18:
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
      KeAbPostRelease(a1 + 72);
      CmpUnlockRegistry();
      if ( v7 )
        CmpFinishBeingActiveFlusherAndReconciler(a1);
      goto LABEL_22;
    }
    if ( (*(_DWORD *)(a1 + 4152) & 0x20) == 0 )
    {
      v8 = CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), ObjectInformation, 0);
      if ( v8 >= 0 )
      {
        *(_DWORD *)(a1 + 160) |= 4u;
        v8 = CmpCmdRenameHive(v10[192], 0LL, 0);
        if ( v8 < 0 || (v8 = ZwFlushBuffersFile(v10[192], &IoStatusBlock), v8 < 0) )
        {
          if ( (int)CmpCmdRenameHive(*(HANDLE *)(a1 + 1536), 0LL, 0) < 0 )
            v8 = -1073741492;
        }
      }
      goto LABEL_18;
    }
LABEL_5:
    v8 = -1073741811;
    goto LABEL_18;
  }
LABEL_23:
  if ( v10 )
  {
    if ( !v6 )
    {
      CmpAttachToRegistryProcess((__int64)v15);
      v6 = 1;
    }
    if ( v8 >= 0 )
      memset(v10 + 192, 0, 0x30uLL);
    CmpDestroyHive(v10);
  }
  if ( v6 )
    KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
  return (unsigned int)v8;
}
