/*
 * XREFs of SfnNCDESTROY @ 0x1C004FBE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall SfnNCDESTROY(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rdi
  struct _KTHREAD *v17; // r15
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 result; // rax
  __int64 v33; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v34; // [rsp+50h] [rbp-C8h]
  __int64 v35; // [rsp+58h] [rbp-C0h]
  __int128 v36; // [rsp+60h] [rbp-B8h]
  __int64 v37; // [rsp+70h] [rbp-A8h]
  __int64 v38; // [rsp+78h] [rbp-A0h] BYREF
  int v39; // [rsp+80h] [rbp-98h]
  int v40; // [rsp+84h] [rbp-94h]
  __int64 v41; // [rsp+88h] [rbp-90h]
  __int64 v42; // [rsp+90h] [rbp-88h]
  __int64 v43; // [rsp+98h] [rbp-80h]
  __int64 v44; // [rsp+A0h] [rbp-78h]
  __int64 v45; // [rsp+A8h] [rbp-70h]
  __int128 v46; // [rsp+C8h] [rbp-50h]
  char v47; // [rsp+120h] [rbp+8h] BYREF
  char v48; // [rsp+128h] [rbp+10h] BYREF
  int v49; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+138h] [rbp+20h] BYREF

  v8 = a2;
  v40 = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(v11 + 464);
  else
    v16 = 0LL;
  v40 = 0;
  v38 = v16;
  v39 = v8;
  v41 = a3;
  v42 = a4;
  v43 = a5;
  v44 = a6;
  v17 = KeGetCurrentThread();
  v18 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14) )
  {
    v20 = (__int64 *)PsGetThreadWin32Thread(v17);
    if ( v20 )
      v18 = *v20;
  }
  v33 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v11 + 472);
  v46 = *(_OWORD *)(v21 + 64);
  v36 = v46;
  v37 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v16;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(3LL);
  v24 = KeUserModeCallback(3LL, &v38, 48LL, &v50, &v49);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    v25,
    v26);
  if ( a1 )
  {
    v28 = a1[5];
    *(_QWORD *)(v28 + 224) = 0LL;
  }
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v30 + 64) = v46;
  *(_QWORD *)(v30 + 80) = v37;
  if ( v24 < 0 || v49 != 24 )
    return 0LL;
  v31 = (__int64 *)v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v45 = *v31;
  return result;
}
