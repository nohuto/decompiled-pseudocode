/*
 * XREFs of CmEnumerateKey @ 0x1405D3A20
 * Callers:
 *     NtEnumerateKey @ 0x1405D32F0 (NtEnumerateKey.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CmpRecordRegistryLockAcquire @ 0x1401B3134 (CmpRecordRegistryLockAcquire.c)
 *     CmpRecordRegistryLockRelease @ 0x1401B3164 (CmpRecordRegistryLockRelease.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405D03BC (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405D40B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockKcb @ 0x1405E4580 (CmpUnlockKcb.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140695010 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpGetCorrectKcbLockOrder @ 0x1406BD9A8 (CmpGetCorrectKcbLockOrder.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int v7; // esi
  __int64 v11; // r12
  int v12; // eax
  int SubKeyByNumberFromMergedView; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r14
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // eax
  ULONG_PTR *v20; // rax
  int v21; // edx
  int v22; // ecx
  ULONG_PTR v23; // r15
  int v24; // r10d
  ULONG_PTR *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // r13
  ULONG_PTR v31; // rcx
  int v32; // r14d
  __int64 v33; // rdx
  __int64 v35; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+48h] [rbp-99h] BYREF
  unsigned int v37; // [rsp+50h] [rbp-91h] BYREF
  int v38; // [rsp+54h] [rbp-8Dh]
  ULONG_PTR v39; // [rsp+58h] [rbp-89h] BYREF
  ULONG_PTR v40; // [rsp+60h] [rbp-81h] BYREF
  int v41; // [rsp+68h] [rbp-79h]
  __int64 v42; // [rsp+70h] [rbp-71h]
  __int64 v43; // [rsp+78h] [rbp-69h]
  _BYTE v44[8]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v45; // [rsp+88h] [rbp-59h] BYREF
  __int64 v46; // [rsp+90h] [rbp-51h] BYREF
  __int64 v47; // [rsp+98h] [rbp-49h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-41h] BYREF
  ULONG_PTR v49; // [rsp+A8h] [rbp-39h] BYREF
  _BYTE v50[48]; // [rsp+B0h] [rbp-31h] BYREF

  v7 = 0;
  v43 = a5;
  v42 = a7;
  v41 = a3;
  v11 = 0LL;
  v36 = 0xFFFFFFFFLL;
  v38 = a4;
  v39 = 0LL;
  v35 = 0LL;
  v40 = 0LL;
  v45 = 0LL;
  if ( qword_140438CE8 )
  {
    KiStackAttachProcess((_KPROCESS *)qword_140438CE8, 0LL, (__int64)v50);
  }
  else
  {
    KiStackAttachProcess(KeGetCurrentThread()->ApcState.Process, 0LL, (__int64)v50);
    v11 = v35;
  }
  if ( *(_WORD *)(*(_QWORD *)(a1 + 8) + 58LL) )
  {
    do
    {
      v12 = CmpEnumerateLayeredKey(a1, a3, v38, v43, a6, v42, (__int64)&v45, v7++ <= 0xA);
      SubKeyByNumberFromMergedView = v12;
    }
    while ( v12 == -1073741267 );
    goto LABEL_74;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
  }
  else if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpRecordRegistryLockAcquire();
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v11 = v35;
  }
  v15 = *(_QWORD *)(a1 + 8);
  if ( a2 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    if ( v16 )
    {
      if ( v15 && v16 != v15 )
      {
        CmpGetCorrectKcbLockOrder(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8), &v46, &v47);
        v17 = v46;
        ExAcquirePushLockSharedEx(v46 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 48));
        v18 = v47;
        ExAcquirePushLockSharedEx(v47 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 48));
      }
      else
      {
        ExAcquirePushLockSharedEx(v16 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 48));
      }
      goto LABEL_22;
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( !v15 )
    goto LABEL_23;
  ExAcquirePushLockSharedEx(v15 + 40, 0LL);
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 48));
LABEL_22:
  v11 = v35;
LABEL_23:
  v19 = *(_DWORD *)(a1 + 48);
  if ( (v19 & 9) != 0 )
  {
    SubKeyByNumberFromMergedView = -1073740763;
    if ( (v19 & 1) == 0 )
      SubKeyByNumberFromMergedView = -1073741444;
  }
  else
  {
    SubKeyByNumberFromMergedView = 0;
  }
  if ( SubKeyByNumberFromMergedView < 0 )
    goto LABEL_57;
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    SubKeyByNumberFromMergedView = CmpTransSearchAddTransFromKeyBody(a1, &v35);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_57;
    v11 = v35;
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a1, v35);
    if ( SubKeyByNumberFromMergedView < 0 )
      goto LABEL_57;
  }
  if ( a2 )
  {
    SubKeyByNumberFromMergedView = CmpPerformKeyBodyDeletionCheck(a2, v11);
    if ( SubKeyByNumberFromMergedView >= 0 )
    {
LABEL_38:
      v20 = &v40;
      if ( !v11 )
        v20 = 0LL;
      v21 = v15;
      v22 = v16;
      if ( !a2 )
      {
        v21 = 0;
        v22 = v15;
      }
      SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                       v22,
                                       v21,
                                       v41,
                                       v11,
                                       (__int64)&v39,
                                       (__int64)&v37,
                                       (__int64)v20,
                                       (__int64)v44);
      if ( SubKeyByNumberFromMergedView < 0 )
        goto LABEL_57;
      v23 = v39;
      goto LABEL_48;
    }
  }
  else
  {
    if ( CmpVEEnabled && (*(_DWORD *)(v15 + 176) & 0x1000000) != 0 )
      goto LABEL_38;
    v23 = *(_QWORD *)(v15 + 24);
    v24 = *(_DWORD *)(v15 + 32);
    v39 = v23;
    if ( v11 )
    {
      v25 = &v40;
      v26 = v16;
      v27 = v15;
    }
    else
    {
      v25 = 0LL;
      v26 = 0LL;
      v27 = 0LL;
    }
    SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberEx(
                                     v23,
                                     v24,
                                     v41,
                                     (unsigned int)&v37,
                                     v27,
                                     v26,
                                     v11,
                                     (__int64)v25);
    if ( SubKeyByNumberFromMergedView >= 0 )
    {
LABEL_48:
      v28 = v37;
      if ( v37 == -1 )
      {
        SubKeyByNumberFromMergedView = -2147483622;
      }
      else
      {
        v29 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v23 + 8))(v23, v37, &v36);
        v30 = v29;
        if ( (*(_DWORD *)(v23 + 160) & 0x8001) == 0
          && (*(_BYTE *)(v29 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
        {
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v23 + 16))(v23, &v36);
          ExAcquirePushLockSharedEx(v23 + 72, 0LL);
          v30 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(v23 + 8))(v23, v28, &v36);
          CmpUpdateKeyNodeAccessBits(v23, v30, v28);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 72), 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)(v23 + 72));
          KeAbPostRelease(v23 + 72);
          v23 = v39;
          v11 = v35;
        }
        SubKeyByNumberFromMergedView = CmpQueryKeyDataFromNode(v23, v30, v38, v43, a6, v42, v40, v11);
        if ( v30 )
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v23 + 16))(v23, &v36);
      }
    }
  }
LABEL_57:
  if ( v16 )
  {
    v31 = v16;
    if ( v15 && v16 != v15 )
    {
      CmpGetCorrectKcbLockOrder(v16, v15, &v49, &BugCheckParameter2);
      CmpUnlockKcb(BugCheckParameter2);
      v31 = v49;
    }
    CmpUnlockKcb(v31);
  }
  else if ( v15 )
  {
    v32 = *(_DWORD *)(v15 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v15 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v15 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 48));
    ExReleasePushLockEx(v15 + 40, 0LL);
    if ( v32 )
    {
      if ( (*(_DWORD *)(v15 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v15);
    }
  }
  if ( v40 )
    CmpDereferenceKeyControlBlock(v40);
  if ( !CmpPuntBoot )
  {
    CmpRecordRegistryLockRelease();
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v33) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v33);
  }
LABEL_74:
  KiUnstackDetachProcess((__int64)v50, 0LL);
  return (unsigned int)SubKeyByNumberFromMergedView;
}
