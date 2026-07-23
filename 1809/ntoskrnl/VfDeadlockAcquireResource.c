/*
 * XREFs of VfDeadlockAcquireResource @ 0x14093C514
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x14093A390 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14093A3E0 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x14093A5A0 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14093A6A0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x14093A810 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireSpinLockRaiseToDpc @ 0x14093A880 (VerifierKeAcquireSpinLockRaiseToDpc.c)
 *     VerifierKeInitializeMutant @ 0x14093AA50 (VerifierKeInitializeMutant.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x14093B670 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     ViKeObjectAcquired @ 0x14093BFD0 (ViKeObjectAcquired.c)
 *     VerifierExAcquireResourceExclusiveLite @ 0x140940520 (VerifierExAcquireResourceExclusiveLite.c)
 *     VerifierExAcquireResourceSharedLite @ 0x1409405F0 (VerifierExAcquireResourceSharedLite.c)
 *     VerifierExAcquireSharedStarveExclusive @ 0x1409406C0 (VerifierExAcquireSharedStarveExclusive.c)
 *     VerifierExAcquireSharedWaitForExclusive @ 0x140940790 (VerifierExAcquireSharedWaitForExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x140940A00 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x140940AA0 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceExclusive @ 0x140940B40 (VerifierExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterPriorityRegionAndAcquireResourceShared @ 0x140940BC0 (VerifierExEnterPriorityRegionAndAcquireResourceShared.c)
 *     VerifierExAcquireFastMutex @ 0x1409430A0 (VerifierExAcquireFastMutex.c)
 *     VerifierExAcquireFastMutexUnsafe @ 0x140943110 (VerifierExAcquireFastMutexUnsafe.c)
 *     VerifierExTryToAcquireFastMutex @ 0x140943300 (VerifierExTryToAcquireFastMutex.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x14030B6FC (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14030B758 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddResource @ 0x14093D74C (ViDeadlockAddResource.c)
 *     ViDeadlockAddThread @ 0x14093D98C (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x14093DA4C (ViDeadlockAllocate.c)
 *     ViDeadlockAnalyze @ 0x14093DAA8 (ViDeadlockAnalyze.c)
 *     ViDeadlockCanProceed @ 0x14093DD18 (ViDeadlockCanProceed.c)
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x14093DFA8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x14093E028 (ViDeadlockCheckDuplicatesAmongRoots.c)
 *     ViDeadlockDetectionLock @ 0x14093E1AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14093E1E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14093E4A8 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x14093E718 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x14093EAE4 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x14093EC2C (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x14093ECD8 (ViDeadlockSearchThread.c)
 *     ViDeadlockSimilarNode @ 0x14093ED6C (ViDeadlockSimilarNode.c)
 *     ViDeadlockUpdateChildrenCount @ 0x14093EE10 (ViDeadlockUpdateChildrenCount.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14093EE44 (ViIsThreadInsidePagingCodePaths.c)
 */

void __fastcall VfDeadlockAcquireResource(ULONG_PTR a1, int a2, __int64 a3, unsigned int a4, void *a5)
{
  ULONG_PTR v5; // r13
  void *v8; // rdi
  __int64 v9; // r14
  USHORT v10; // ax
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned int v17; // r9d
  void *v18; // rsi
  int v19; // r15d
  int *v20; // rsi
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int16 v25; // ax
  __int64 v26; // rdx
  _QWORD *v27; // r10
  _QWORD *v28; // r9
  int *v29; // rdi
  int v30; // eax
  unsigned int v31; // r11d
  int *v32; // r10
  int *v33; // r9
  int v34; // edx
  _QWORD *v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  __int64 v39; // r8
  _QWORD *v40; // rdx
  _OWORD *v41; // rax
  __int64 v42; // rax
  __int128 v43; // xmm3
  __int128 v44; // xmm2
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  _QWORD *v47; // rcx
  _QWORD *v48; // rbx
  unsigned __int8 v49; // [rsp+34h] [rbp-8Dh]
  __int64 v51; // [rsp+40h] [rbp-81h]
  PVOID v52; // [rsp+48h] [rbp-79h]
  PVOID Entry; // [rsp+50h] [rbp-71h] BYREF
  int v54; // [rsp+58h] [rbp-69h]
  PVOID v55; // [rsp+60h] [rbp-61h]
  int v56; // [rsp+68h] [rbp-59h]
  PVOID v57; // [rsp+70h] [rbp-51h]
  PVOID v58; // [rsp+78h] [rbp-49h] BYREF
  __int64 v59; // [rsp+80h] [rbp-41h]
  PVOID BackTrace[2]; // [rsp+90h] [rbp-31h] BYREF
  __int128 v61; // [rsp+A0h] [rbp-21h]
  __int128 v62; // [rsp+B0h] [rbp-11h]
  __int128 v63; // [rsp+C0h] [rbp-1h]

  v5 = a2;
  v59 = (__int64)a5;
  v8 = 0LL;
  v54 = 0;
  v58 = 0LL;
  Entry = 0LL;
  if ( a2 == 8
    && (!VfWin32kDllBase
     || VfWin32kDllBase > (unsigned __int64)a5
     || VfWin32kDllBase + (unsigned __int64)(unsigned int)VfWin32kSizeOfImage <= (unsigned __int64)a5)
    || !(unsigned int)ViDeadlockCanProceed(a1)
    || (unsigned int)ViIsThreadInsidePagingCodePaths()
    || *((_DWORD *)ViDeadlockGlobals + 8196)
    || *((int *)ViDeadlockGlobals + 8282) > 1024 )
  {
    return;
  }
  v55 = 0LL;
  v9 = 0LL;
  v56 = ViDeadlockResourceTypeInfo[v5];
  v51 = ViDeadlockAllocate(3LL);
  v57 = (PVOID)ViDeadlockAllocate(2LL);
  v52 = (PVOID)ViDeadlockAllocate(1LL);
  v10 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v11 = v10;
  if ( !v10 )
  {
    BackTrace[0] = a5;
    v11 = 1;
  }
  if ( v11 < 8 )
    BackTrace[v11] = 0LL;
  v49 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(v12);
  v14 = MEMORY[0xFFFFF78000000320];
  if ( !ViDeadlockDetectionEnabled || (v55 = v57, v57 = 0LL, !v55) )
  {
    v18 = v52;
    goto LABEL_79;
  }
  v9 = ViDeadlockSearchThread(a3, v13, 0LL);
  if ( v9 )
  {
    v17 = 1;
  }
  else
  {
    v16 = ViDeadlockAddThread(a3, v51);
    v51 = 0LL;
    v9 = v16;
    v17 = 1;
    if ( !v16 )
    {
      v18 = v52;
      v19 = 0;
      goto LABEL_82;
    }
    LODWORD(v8) = 1;
  }
  if ( (_DWORD)v5 == 8 )
  {
    *(_BYTE *)(v9 + 48) = 1;
LABEL_21:
    v18 = v52;
    v19 = 0;
    goto LABEL_81;
  }
  v20 = (int *)ViDeadlockSearchResource(a1, &Entry, v15, 1LL);
  if ( !v20 )
  {
    v18 = v52;
    if ( (unsigned int)ViDeadlockAddResource(a1, (__int64)&v58, (__int64)&Entry) )
    {
      v52 = 0LL;
      v20 = (int *)ViDeadlockSearchResource(a1, &Entry, 0LL, v21);
      goto LABEL_25;
    }
    if ( (_DWORD)v8 )
    {
      v19 = 1;
      ViDeadlockRemoveThread(v9);
      v17 = 1;
      goto LABEL_81;
    }
LABEL_79:
    v19 = 0;
    goto LABEL_80;
  }
LABEL_25:
  v22 = *v20;
  v17 = 1;
  if ( *v20 != (_DWORD)v5 )
  {
    if ( ((unsigned int)(v5 - 3) > 1 || (unsigned int)(v22 - 3) > 1) && (v22 != 7 || (unsigned int)(v5 - 5) > 1) )
    {
      ViDeadlockPreprocessOptions(
        byte_14040654C,
        "Acquiring lock 0x%p using mismatched API for this lock type.",
        (const void *)0x1008);
      VfReportIssueWithOptions(0xC4u, 0x1008uLL, a1, *v20, v5, byte_14040654C);
LABEL_36:
      v18 = v52;
      v19 = 0;
LABEL_80:
      v17 = 1;
      goto LABEL_81;
    }
    *v20 = v5;
  }
  if ( (unsigned int)(v5 - 5) <= 1 )
    v23 = *(_QWORD *)(v9 + 8);
  else
    v23 = *(_QWORD *)(v9 + 16);
  v24 = *((_QWORD *)v20 + 2);
  if ( v24 && v24 != v9 )
    *((_WORD *)v20 + 3) = 0;
  v25 = *((_WORD *)v20 + 3) + 1;
  *((_QWORD *)v20 + 2) = v9;
  *((_WORD *)v20 + 3) = v25;
  if ( v23 )
  {
    if ( v25 > 1u )
    {
      if ( (v56 & 1) != 0 )
        goto LABEL_21;
      ViDeadlockPreprocessOptions(
        &dword_140406550,
        "Lock 0x%p doesn't support recursive acquire.",
        (const void *)0x1000);
      VfReportIssueWithOptions(0xC4u, 0x1000uLL, a1, (ULONG_PTR)v20, v9, &dword_140406550);
      goto LABEL_36;
    }
    v26 = a4;
    v27 = (_QWORD *)(v23 + 8);
    v28 = *(_QWORD **)(v23 + 8);
    while ( v28 != v27 )
    {
      v29 = (int *)(v28 - 3);
      if ( (unsigned int)ViDeadlockSimilarNode(a1, v26, v28 - 3, *v28) )
      {
        ViDeadlockCheckDuplicatesAmongChildren(v23, v29, &Entry);
        goto LABEL_53;
      }
    }
    if ( !*((_WORD *)v20 + 2) || (_DWORD)v26 )
    {
      v17 = 1;
    }
    else
    {
      v30 = ViDeadlockAnalyze(a1, v23, 1, 0, v59);
      v17 = 1;
      if ( v30 )
        goto LABEL_76;
    }
    v31 = a4;
LABEL_62:
    v29 = (int *)v55;
    v55 = 0LL;
    *((_QWORD *)v29 + 9) = 0LL;
    *((_QWORD *)v29 + 8) = 0LL;
    *((_QWORD *)v29 + 10) = 0LL;
    *((_QWORD *)v29 + 18) = 0LL;
    v29[18] &= ~1u;
    v34 = v29[18];
    *(_QWORD *)v29 = v23;
    *((_QWORD *)v29 + 7) = v20;
    v29[18] = v34 & 7 | (8 * *((_DWORD *)ViDeadlockGlobals + 8201));
    v35 = v29 + 6;
    *((_QWORD *)v29 + 2) = v29 + 2;
    *((_QWORD *)v29 + 1) = v29 + 2;
    *((_QWORD *)v29 + 4) = v29 + 6;
    *((_QWORD *)v29 + 3) = v29 + 6;
    v29[18] ^= (v29[18] ^ (2 * v31)) & 2;
    if ( !v54 )
    {
      v36 = (_QWORD *)(v23 + 8);
      v37 = *(_QWORD *)(v23 + 8);
      if ( *(_QWORD *)(v37 + 8) != v23 + 8 )
        goto LABEL_66;
      *v35 = v37;
      *((_QWORD *)v29 + 4) = v36;
      *(_QWORD *)(v37 + 8) = v35;
      *v36 = v35;
      ViDeadlockUpdateChildrenCount(v23, 1LL, 0LL);
    }
    v38 = v20 + 6;
    v39 = *((_QWORD *)v20 + 3);
    v40 = v29 + 10;
    if ( *(int **)(v39 + 8) == v20 + 6 )
    {
      *v40 = v39;
      *((_QWORD *)v29 + 6) = v38;
      *(_QWORD *)(v39 + 8) = v40;
      *v38 = v40;
      *((_WORD *)v20 + 2) += v17;
      if ( (unsigned __int16)v20[1] > 0xFFF0u )
        ViDeadlockState |= 0x20u;
      goto LABEL_69;
    }
LABEL_66:
    __fastfail(3u);
  }
  v31 = a4;
  v32 = v20 + 6;
  v33 = (int *)*((_QWORD *)v20 + 3);
  do
  {
    if ( v33 == v32 )
    {
      v17 = 1;
      v54 = 1;
      goto LABEL_62;
    }
    v29 = v33 - 10;
    v33 = *(int **)v33;
  }
  while ( *(_QWORD *)v29 || !(unsigned int)ViDeadlockSimilarNode(a1, v31, v29, v33) );
  ViDeadlockCheckDuplicatesAmongRoots(v29, &Entry, 0LL);
LABEL_53:
  v17 = 1;
LABEL_69:
  if ( v29 )
  {
    v29[18] |= v17;
    *((_QWORD *)v29 + 8) = v9;
    if ( (int)v5 - 5 <= v17 )
      *(_QWORD *)(v9 + 8) = v29;
    else
      *(_QWORD *)(v9 + 16) = v29;
    *(_DWORD *)(v9 + 40) += v17;
    v41 = *(_OWORD **)v29;
    if ( *(_QWORD *)v29 )
    {
      *((_OWORD *)v29 + 9) = v41[5];
      *((_OWORD *)v29 + 10) = v41[6];
      *((_OWORD *)v29 + 11) = v41[7];
      *((_OWORD *)v29 + 12) = v41[8];
    }
    v42 = *((_QWORD *)v29 + 7);
    v43 = *(_OWORD *)BackTrace;
    v44 = v61;
    v45 = v62;
    v46 = v63;
    *((_OWORD *)v29 + 5) = *(_OWORD *)BackTrace;
    *((_OWORD *)v29 + 6) = v44;
    *((_OWORD *)v29 + 7) = v45;
    *((_OWORD *)v29 + 8) = v46;
    *(_OWORD *)(v42 + 120) = v43;
    *(_OWORD *)(v42 + 136) = v44;
    *(_OWORD *)(v42 + 152) = v45;
    *(_OWORD *)(v42 + 168) = v46;
  }
LABEL_76:
  v18 = v52;
  v19 = 0;
LABEL_81:
  v8 = (void *)v51;
LABEL_82:
  if ( MEMORY[0xFFFFF78000000320] - v14 > *(_QWORD *)ViDeadlockGlobals )
    *(_QWORD *)ViDeadlockGlobals = MEMORY[0xFFFFF78000000320] - v14;
  ViDeadlockDetectionUnlock(v17);
  ViLowerIrql(v49);
  v47 = Entry;
  if ( Entry )
  {
    do
    {
      v48 = (_QWORD *)*v47;
      ViDeadlockFree(v47);
      v47 = v48;
    }
    while ( v48 );
  }
  if ( v58 )
    ViDeadlockFree(v58);
  if ( v19 )
    ViDeadlockFree((PVOID)v9);
  if ( v55 )
    ViDeadlockFree(v55);
  if ( v18 )
    ViDeadlockFree(v18);
  if ( v57 )
    ViDeadlockFree(v57);
  if ( v8 )
    ViDeadlockFree(v8);
}
