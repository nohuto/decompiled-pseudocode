/*
 * XREFs of VfDeadlockReleaseResource @ 0x14093D260
 * Callers:
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x14093AE30 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x14093AEF0 (VerifierKeReleaseInStackQueuedSpinLockForDpc.c)
 *     VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14093AFB0 (VerifierKeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     VerifierKeReleaseMutant @ 0x14093B090 (VerifierKeReleaseMutant.c)
 *     VerifierKeReleaseMutex @ 0x14093B170 (VerifierKeReleaseMutex.c)
 *     VerifierKeReleaseSpinLock @ 0x14093B230 (VerifierKeReleaseSpinLock.c)
 *     VerifierKeReleaseSpinLockFromDpcLevel @ 0x14093B2A0 (VerifierKeReleaseSpinLockFromDpcLevel.c)
 *     VerifierExReleaseFastMutex @ 0x1409431D0 (VerifierExReleaseFastMutex.c)
 *     VerifierExReleaseFastMutexUnsafe @ 0x140943260 (VerifierExReleaseFastMutexUnsafe.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     ViLowerIrql @ 0x14030B6FC (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14030B758 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockCanProceed @ 0x14093DD18 (ViDeadlockCanProceed.c)
 *     ViDeadlockDetectionLock @ 0x14093E1AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x14093E1E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x14093E4A8 (ViDeadlockFree.c)
 *     ViDeadlockPreprocessOptions @ 0x14093E718 (ViDeadlockPreprocessOptions.c)
 *     ViDeadlockRemoveThread @ 0x14093EAE4 (ViDeadlockRemoveThread.c)
 *     ViDeadlockSearchResource @ 0x14093EC2C (ViDeadlockSearchResource.c)
 *     ViDeadlockSearchThread @ 0x14093ECD8 (ViDeadlockSearchThread.c)
 *     ViIsThreadInsidePagingCodePaths @ 0x14093EE44 (ViIsThreadInsidePagingCodePaths.c)
 */

PVOID __fastcall VfDeadlockReleaseResource(const void *a1, int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  int v5; // esi
  ULONG_PTR v8; // rdi
  PVOID result; // rax
  __int64 *v11; // r13
  unsigned int v12; // ecx
  PVOID v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  int *v19; // rax
  int *v20; // rsi
  int v21; // eax
  __int16 v22; // cx
  __int64 v23; // rdx
  __int64 v24; // r8
  ULONG_PTR v25; // rax
  __int64 v26; // r12
  __int64 *v27; // rdi
  __int16 v28; // cx
  _DWORD *v29; // rax
  int v30; // eax
  __int64 **v31; // rcx
  __int64 *v32; // rax
  __int64 **v33; // rcx
  __int64 *v34; // rax
  int v35; // eax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  _QWORD *v39; // rcx
  _QWORD *v40; // rbx
  unsigned __int8 v41; // [rsp+40h] [rbp-49h]
  int v42; // [rsp+44h] [rbp-45h]
  PVOID Entry; // [rsp+48h] [rbp-41h] BYREF
  __int64 v44; // [rsp+50h] [rbp-39h]
  PVOID BackTrace[2]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v46; // [rsp+70h] [rbp-19h]
  __int128 v47; // [rsp+80h] [rbp-9h]
  __int128 v48; // [rsp+90h] [rbp+7h]

  v4 = 0LL;
  v44 = a3;
  Entry = 0LL;
  v5 = 0;
  v42 = 0;
  v8 = a2;
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
  v41 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(v15);
  v18 = MEMORY[0xFFFFF78000000320];
  if ( ViDeadlockDetectionEnabled )
  {
    v19 = (int *)ViDeadlockSearchResource(a1, &Entry, v16, v17);
    v20 = v19;
    if ( !v19 )
    {
      v5 = 0;
      goto LABEL_59;
    }
    v21 = *v19;
    if ( v21 == (_DWORD)v8 )
      goto LABEL_17;
    if ( v21 == 7 )
    {
      if ( (unsigned int)(v8 - 5) <= 1 )
      {
        *v20 = v8;
        v21 = v8;
        goto LABEL_17;
      }
    }
    else if ( v21 == 1 && (_DWORD)v8 == 2 )
    {
      if ( *((_WORD *)v20 + 3) > 1u )
        *((_WORD *)v20 + 3) = 1;
      v21 = 1;
LABEL_17:
      v22 = *((_WORD *)v20 + 3);
      if ( v22 )
      {
        v4 = (__int64 *)*((_QWORD *)v20 + 2);
        v26 = *v4;
        if ( (unsigned int)(v21 - 5) <= 1 )
          v27 = (__int64 *)v4[1];
        else
          v27 = (__int64 *)v4[2];
        v28 = v22 - 1;
        *((_WORD *)v20 + 3) = v28;
        if ( !v28 )
        {
          v29 = ViDeadlockGlobals;
          *((_QWORD *)v20 + 2) = 0LL;
          ++v29[8210];
          if ( (int *)v27[7] == v20 )
          {
            *((_DWORD *)v27 + 18) &= ~1u;
            v11 = v27;
          }
          else
          {
            ++v29[8208];
            if ( (ViDeadlockResourceTypeInfo[*(int *)v27[7]] & 4) == 0 && (ViDeadlockResourceTypeInfo[*v20] & 4) == 0 )
            {
              DbgPrintEx(0x5Du, 0, "Deadlock detection: Must release resources in reverse-order\n");
              DbgPrintEx(
                0x5Du,
                0,
                "Resource %p acquired before resource %p -- \nCurrent thread (%p) is trying to release %p first\n",
                a1,
                *(const void **)(v27[7] + 8),
                v4,
                a1);
              ViDeadlockPreprocessOptions(
                byte_14040653C,
                "Releasing two locks in reverse order of their acquire.",
                4099LL,
                a1,
                *(_QWORD *)(v27[7] + 8),
                v4);
              VfReportIssueWithOptions(
                0xC4u,
                0x1003uLL,
                (ULONG_PTR)a1,
                *(_QWORD *)(v27[7] + 8),
                (ULONG_PTR)v4,
                byte_14040653C);
            }
            while ( (int *)v27[7] != v20 )
            {
              v27 = (__int64 *)*v27;
              if ( !v27 )
                goto LABEL_42;
            }
            *((_DWORD *)v27 + 18) &= ~1u;
            v11 = v27;
            v30 = *((_DWORD *)v27 + 18);
            if ( (v30 & 4) == 0 )
            {
              ++*((_DWORD *)ViDeadlockGlobals + 8209);
              v30 = *((_DWORD *)v27 + 18);
            }
            *((_DWORD *)v27 + 18) = v30 | 4;
          }
LABEL_42:
          if ( (unsigned int)(*v20 - 5) <= 1 )
          {
            v33 = (__int64 **)v4[1];
            if ( v33 )
            {
              do
              {
                if ( ((_DWORD)v33[9] & 1) != 0 && v33[8] == v4 )
                  break;
                v34 = *v33;
                v4[1] = (__int64)*v33;
                v33 = (__int64 **)v34;
              }
              while ( v34 );
            }
          }
          else
          {
            v31 = (__int64 **)v4[2];
            if ( v31 )
            {
              do
              {
                if ( ((_DWORD)v31[9] & 1) != 0 && v31[8] == v4 )
                  break;
                v32 = *v31;
                v4[2] = (__int64)*v31;
                v31 = (__int64 **)v32;
              }
              while ( v32 );
            }
          }
          if ( v11 )
          {
            v11[8] = 0LL;
            v35 = --*((_DWORD *)v4 + 10);
            if ( v26 != v44 )
            {
              *((_DWORD *)v11 + 18) |= 4u;
              v35 = *((_DWORD *)v4 + 10);
            }
            if ( !v35 )
            {
              v42 = 1;
              ViDeadlockRemoveThread((__int64)v4);
            }
          }
        }
      }
      else if ( !*((_DWORD *)ViDeadlockGlobals + 8196) && *((int *)ViDeadlockGlobals + 8282) <= 1024 )
      {
        ViDeadlockSearchThread(a3, 0LL, 1LL);
        ViDeadlockPreprocessOptions(
          &dword_140406548,
          "Releasing lock 0x%p that is not owned by the current thread.",
          (const void *)0x1007);
        v25 = ViDeadlockSearchThread(a3, v23, v24);
        VfReportIssueWithOptions(0xC4u, 0x1007uLL, (ULONG_PTR)a1, (ULONG_PTR)v20, v25, &dword_140406548);
      }
      goto LABEL_57;
    }
    ViDeadlockPreprocessOptions(
      byte_140406544,
      "Releasing lock 0x%p using mismatched API for this lock type.",
      (const void *)0x1009);
    VfReportIssueWithOptions(0xC4u, 0x1009uLL, (ULONG_PTR)a1, *v20, v8, byte_140406544);
LABEL_57:
    v36 = v46;
    *(_OWORD *)(v20 + 46) = *(_OWORD *)BackTrace;
    v37 = v47;
    *(_OWORD *)(v20 + 50) = v36;
    v38 = v48;
    *(_OWORD *)(v20 + 54) = v37;
    *(_OWORD *)(v20 + 58) = v38;
    v5 = v42;
  }
LABEL_59:
  if ( MEMORY[0xFFFFF78000000320] - v18 > *((_QWORD *)ViDeadlockGlobals + 1) )
    *((_QWORD *)ViDeadlockGlobals + 1) = MEMORY[0xFFFFF78000000320] - v18;
  ViDeadlockDetectionUnlock(1LL);
  result = (PVOID)ViLowerIrql(v41);
  v39 = Entry;
  if ( Entry )
  {
    do
    {
      v40 = (_QWORD *)*v39;
      result = (PVOID)ViDeadlockFree(v39);
      v39 = v40;
    }
    while ( v40 );
  }
  if ( v5 )
    return (PVOID)ViDeadlockFree(v4);
  return result;
}
