/*
 * XREFs of CmReplaceKey @ 0x1407F033C
 * Callers:
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwFlushBuffersFile @ 0x1401B8C50 (ZwFlushBuffersFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpCmdHiveOpen @ 0x1405B594C (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140737640 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140737A70 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     CmpPreserveSystemHiveData @ 0x1407FEEC4 (CmpPreserveSystemHiveData.c)
 */

__int64 __fastcall CmReplaceKey(__int64 a1, __int64 a2, const UNICODE_STRING *a3, ULONG_PTR a4)
{
  char v6; // r12
  char v7; // r13
  int v8; // edi
  volatile signed __int64 *v9; // r15
  HANDLE *v10; // rsi
  char v12[8]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v15[56]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16[44]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE ObjectInformation[512]; // [rsp+210h] [rbp+110h] BYREF

  BugCheckParameter2[1] = a4;
  v12[0] = 0;
  v6 = 0;
  v7 = 0;
  memset(v15, 0, 0x30uLL);
  BugCheckParameter2[0] = 0LL;
  memset(v16, 0, sizeof(v16));
  v8 = CmpCmdHiveOpen(a3, 0, v12, BugCheckParameter2, 0x1190001u, 0, 0LL, 0LL, v16);
  if ( v8 < 0 )
  {
LABEL_22:
    v10 = (HANDLE *)BugCheckParameter2[0];
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
  if ( a1 == qword_1403FFFF0 )
  {
    v8 = CmpPreserveSystemHiveData(a1, BugCheckParameter2[0]);
    if ( v8 < 0 )
      goto LABEL_18;
  }
  if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 72));
  KeAbPostRelease(a1 + 72);
  CmpUnlockRegistry();
  v10 = (HANDLE *)BugCheckParameter2[0];
  v8 = CmpFlushHive(BugCheckParameter2[0], 0xCu);
  if ( v8 >= 0 )
  {
    KiUnstackDetachProcess((__int64)v15, 0LL);
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
    KiUnstackDetachProcess((__int64)v15, 0LL);
  return (unsigned int)v8;
}
