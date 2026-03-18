/*
 * XREFs of SfnNCDESTROY @ 0x1C00AEDC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnNCDESTROY(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdi
  struct _KTHREAD *v18; // r15
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 result; // rax
  __int64 v36; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-C8h]
  __int64 v38; // [rsp+58h] [rbp-C0h]
  __int128 v39; // [rsp+60h] [rbp-B8h]
  __int64 v40; // [rsp+70h] [rbp-A8h]
  __int64 v41; // [rsp+78h] [rbp-A0h] BYREF
  int v42; // [rsp+80h] [rbp-98h]
  int v43; // [rsp+84h] [rbp-94h]
  __int64 v44; // [rsp+88h] [rbp-90h]
  __int64 v45; // [rsp+90h] [rbp-88h]
  __int64 v46; // [rsp+98h] [rbp-80h]
  __int64 v47; // [rsp+A0h] [rbp-78h]
  __int64 v48; // [rsp+A8h] [rbp-70h]
  __int128 v49; // [rsp+C8h] [rbp-50h]
  char v50; // [rsp+120h] [rbp+8h] BYREF
  char v51; // [rsp+128h] [rbp+10h] BYREF
  int v52; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v53; // [rsp+138h] [rbp+20h] BYREF

  v8 = a2;
  v43 = 0;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v17 = 0LL;
  v43 = 0;
  v41 = v17;
  v42 = v8;
  v44 = a3;
  v45 = a4;
  v46 = a5;
  v47 = a6;
  v18 = KeGetCurrentThread();
  v19 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15) )
  {
    v22 = (__int64 *)PsGetThreadWin32Thread(v18);
    if ( v22 )
      v19 = *v22;
  }
  v36 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  v23 = *(_QWORD *)(v11 + 472);
  v49 = *(_OWORD *)(v23 + 64);
  v39 = v49;
  v40 = *(_QWORD *)(v23 + 80);
  *(_QWORD *)(v23 + 72) = v17;
  if ( a1 )
    v24 = *a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v24;
  if ( a1 )
    v25 = *(_QWORD *)(a1[5] + 224LL);
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v25;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(3LL);
  v26 = KeUserModeCallback(3LL, &v41, 48LL, &v53, &v52);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    v27,
    v28,
    v29);
  if ( a1 )
  {
    v31 = a1[5];
    *(_QWORD *)(v31 + 224) = 0LL;
  }
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v33 + 64) = v49;
  *(_QWORD *)(v33 + 80) = v40;
  if ( v26 < 0 || v52 != 24 )
    return 0LL;
  v34 = (__int64 *)v53;
  if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  result = *v34;
  v48 = *v34;
  return result;
}
