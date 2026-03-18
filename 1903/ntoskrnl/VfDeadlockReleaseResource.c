/*
 * XREFs of VfDeadlockReleaseResource @ 0x14097B688
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140978460 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140978520 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1409785E0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x1409786C0 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x1409787A0 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x140978860 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x1409788D0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x140981AB0 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x140981B40 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x1403291C4 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x140329220 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x14097C15C (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x14097C5F8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14097C630 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14097C8F4 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x14097CB68 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x14097CF34 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x14097D07C (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x14097D120 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14097D288 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockReleaseResource(const void *a1, int a2, __int64 a3, void *a4)
{
  ULONG_PTR v4; // rdi
  int v5; // r12d
  PVOID result; // rax
  __int64 *v10; // r15
  __int64 *v11; // r14
  unsigned int v12; // ecx
  PVOID v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r9d
  unsigned __int8 v16; // si
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  int *v20; // rax
  int *v21; // rsi
  int v22; // eax
  __int16 v23; // cx
  __int64 v24; // rdx
  __int64 v25; // r8
  ULONG_PTR v26; // rax
  __int64 v27; // r12
  __int64 *v28; // rdi
  __int16 v29; // cx
  _DWORD *v30; // rax
  int v31; // eax
  __int64 **v32; // rcx
  __int64 *v33; // rax
  __int64 **v34; // rcx
  __int64 *v35; // rax
  int v36; // eax
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  _QWORD *v40; // rcx
  _QWORD *v41; // rbx
  unsigned __int8 v42; // [rsp+40h] [rbp-98h]
  PVOID Entry; // [rsp+48h] [rbp-90h] BYREF
  PVOID BackTrace[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v45; // [rsp+60h] [rbp-78h]
  __int128 v46; // [rsp+70h] [rbp-68h]
  __int128 v47; // [rsp+80h] [rbp-58h]

  v4 = a2;
  Entry = 0LL;
  v5 = 0;
  result = (PVOID)ViDeadlockCanProceed(a1);
  if ( !(_DWORD)result )
    return result;
  result = (PVOID)ViIsThreadInsidePagingCodePaths();
  if ( (_DWORD)result )
    return result;
  result = ViDeadlockGlobals;
  if ( *((_DWORD *)ViDeadlockGlobals + 8196) )
    return result;
  result = ViDeadlockGlobals;
  if ( *((int *)ViDeadlockGlobals + 8282) > 1024 )
    return result;
  v10 = 0LL;
  v11 = 0LL;
  v12 = RtlCaptureStackBackTrace(2u, 8u, BackTrace, 0LL);
  v13 = BackTrace[0];
  if ( !v12 )
    v13 = a4;
  BackTrace[0] = v13;
  v14 = 1LL;
  if ( v12 )
    v14 = v12;
  if ( (unsigned int)v14 < 8 )
    BackTrace[v14] = 0LL;
  v42 = ViRaiseIrqlToDpcLevel();
  v16 = v42;
  ViDeadlockDetectionLock(v15);
  v19 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v20 = (int *)ViDeadlockSearchResource(a1, &Entry, v17, v18);
    v21 = v20;
    if ( !v20 )
    {
LABEL_60:
      v16 = v42;
      goto LABEL_61;
    }
    v22 = *v20;
    if ( v22 == (_DWORD)v4 )
      goto LABEL_17;
    if ( v22 == 7 )
    {
      if ( (unsigned int)(v4 - 5) <= 1 )
      {
        *v21 = v4;
        v22 = v4;
        goto LABEL_17;
      }
    }
    else if ( v22 == 1 && (_DWORD)v4 == 2 )
    {
      if ( *((_WORD *)v21 + 3) > 1u )
        *((_WORD *)v21 + 3) = 1;
      v22 = 1;
LABEL_17:
      v23 = *((_WORD *)v21 + 3);
      if ( v23 )
      {
        v11 = (__int64 *)*((_QWORD *)v21 + 2);
        v27 = *v11;
        if ( (unsigned int)(v22 - 5) <= 1 )
          v28 = (__int64 *)v11[1];
        else
          v28 = (__int64 *)v11[2];
        v29 = v23 - 1;
        *((_WORD *)v21 + 3) = v29;
        if ( v29 )
        {
          v5 = 0;
        }
        else
        {
          v30 = ViDeadlockGlobals;
          *((_QWORD *)v21 + 2) = 0LL;
          ++v30[8210];
          if ( (int *)v28[7] == v21 )
          {
            *((_DWORD *)v28 + 18) &= ~1u;
            v10 = v28;
          }
          else
          {
            ++v30[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v28[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v21] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v28[7] + 8),
                v11,
                a1);
              ViDeadlockPreprocessOptions(
                byte_14042B95C,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v28[7] + 8),
                v11);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v28[7] + 8),
                (ULONG_PTR)v11,
                byte_14042B95C);
            }
            while ( (int *)v28[7] != v21 )
            {
              v28 = (__int64 *)*v28;
              if ( !v28 )
                goto LABEL_42;
            }
            *((_DWORD *)v28 + 18) &= ~1u;
            v10 = v28;
            v31 = *((_DWORD *)v28 + 18);
            if ( (v31 & 4) == 0 )
            {
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
              v31 = *((_DWORD *)v28 + 18);
            }
            *((_DWORD *)v28 + 18) = v31 | 4;
          }
LABEL_42:
          if ( (unsigned int)(*v21 - 5) <= 1 )
          {
            v34 = (__int64 **)v11[1];
            if ( v34 )
            {
              do
              {
                if ( ((_DWORD)v34[9] & 1) != 0 && v34[8] == v11 )
                  break;
                v35 = *v34;
                v11[1] = (__int64)*v34;
                v34 = (__int64 **)v35;
              }
              while ( v35 );
            }
          }
          else
          {
            v32 = (__int64 **)v11[2];
            if ( v32 )
            {
              do
              {
                if ( ((_DWORD)v32[9] & 1) != 0 && v32[8] == v11 )
                  break;
                v33 = *v32;
                v11[2] = (__int64)*v32;
                v32 = (__int64 **)v33;
              }
              while ( v33 );
            }
          }
          if ( !v10 )
            goto LABEL_58;
          v10[8] = 0LL;
          v36 = --*((_DWORD *)v11 + 10);
          if ( v27 != a3 )
          {
            *((_DWORD *)v10 + 18) |= 4u;
            v36 = *((_DWORD *)v11 + 10);
          }
          if ( v36 )
          {
LABEL_58:
            v5 = 0;
          }
          else
          {
            v5 = 1;
            ViDeadlockRemoveThread((__int64)v11);
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3, 0LL, 1LL);
        ViDeadlockPreprocessOptions(
          &dword_14042B968,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v26 = ViDeadlockSearchThread(a3, v24, v25);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v21, v26, &dword_14042B968);
      }
      goto LABEL_59;
    }
    ViDeadlockPreprocessOptions(
      byte_14042B964,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v21, v4, byte_14042B964);
LABEL_59:
    v37 = v45;
    *(_OWORD *)(v21 + 46) = *(_OWORD *)BackTrace;
    v38 = v46;
    *(_OWORD *)(v21 + 50) = v37;
    v39 = v47;
    *(_OWORD *)(v21 + 54) = v38;
    *(_OWORD *)(v21 + 58) = v39;
    goto LABEL_60;
  }
LABEL_61:
  if ( MEMORY[0xFFFFF78000000320] - v19 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v19;
  ViDeadlockDetectionUnlock(1LL);
  result = (PVOID)ViLowerIrql(v16);
  v40 = Entry;
  if ( Entry )
  {
    do
    {
      v41 = (_QWORD *)*v40;
      result = (PVOID)ViDeadlockFree(v40);
      v40 = v41;
    }
    while ( v41 );
  }
  if ( v5 )
    return (PVOID)ViDeadlockFree(v11);
  return result;
}
