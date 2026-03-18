/*
 * XREFs of SfnEMPTY @ 0x1C00514E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnEMPTY(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 result; // rax
  __int64 v27; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v28; // [rsp+50h] [rbp-C8h]
  __int64 v29; // [rsp+58h] [rbp-C0h]
  __int128 v30; // [rsp+60h] [rbp-B8h]
  __int64 v31; // [rsp+70h] [rbp-A8h]
  __int64 v32; // [rsp+78h] [rbp-A0h] BYREF
  int v33; // [rsp+80h] [rbp-98h]
  int v34; // [rsp+84h] [rbp-94h]
  __int64 v35; // [rsp+88h] [rbp-90h]
  __int64 v36; // [rsp+90h] [rbp-88h]
  __int64 v37; // [rsp+98h] [rbp-80h]
  __int64 v38; // [rsp+A0h] [rbp-78h]
  __int64 v39; // [rsp+A8h] [rbp-70h]
  __int128 v40; // [rsp+C8h] [rbp-50h]
  char v41; // [rsp+120h] [rbp+8h] BYREF
  char v42; // [rsp+128h] [rbp+10h] BYREF
  int v43; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v44; // [rsp+138h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0uLL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  v34 = 0;
  v32 = v12;
  v33 = a2;
  v35 = a3;
  v36 = a4;
  v37 = a5;
  v38 = a6;
  v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v27 = *(_QWORD *)(v13 + 408);
  *(_QWORD *)(v13 + 408) = &v27;
  v28 = a1;
  if ( a1 )
    HMLockObject(a1);
  v15 = *(_QWORD *)(v11 + 472);
  v40 = *(_OWORD *)(v15 + 64);
  v30 = v40;
  v31 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224LL);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation,
    v14);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(117LL);
  v18 = KeUserModeCallback(117LL, &v32, 48LL, &v44, &v43);
  EtwTraceEndCallback(117LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    v19,
    v20);
  ThreadUnlock1(v22, v21, v23);
  v24 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v24 + 64) = v40;
  *(_QWORD *)(v24 + 80) = v31;
  if ( v18 < 0 || v43 != 24 )
    return 0LL;
  v25 = (__int64 *)v44;
  if ( v44 + 8 < v44 || v44 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  result = *v25;
  v39 = *v25;
  return result;
}
