/*
 * XREFs of SfnEMPTY @ 0x1C00B0680
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnEMPTY(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-C8h]
  __int64 v34; // [rsp+58h] [rbp-C0h]
  __int128 v35; // [rsp+60h] [rbp-B8h]
  __int64 v36; // [rsp+70h] [rbp-A8h]
  __int64 v37; // [rsp+78h] [rbp-A0h] BYREF
  int v38; // [rsp+80h] [rbp-98h]
  int v39; // [rsp+84h] [rbp-94h]
  __int64 v40; // [rsp+88h] [rbp-90h]
  __int64 v41; // [rsp+90h] [rbp-88h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h]
  __int128 v45; // [rsp+C8h] [rbp-50h]
  char v46; // [rsp+120h] [rbp+8h] BYREF
  char v47; // [rsp+128h] [rbp+10h] BYREF
  int v48; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v49; // [rsp+138h] [rbp+20h] BYREF

  v8 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v39 = 0;
  v37 = v15;
  v38 = v8;
  v40 = a3;
  v41 = a4;
  v42 = a5;
  v43 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v32 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 472);
  v45 = *(_OWORD *)(v19 + 64);
  v35 = v45;
  v36 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v15;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v46,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  EtwTraceBeginCallback(117LL);
  v22 = KeUserModeCallback(117LL, &v37, 48LL, &v49, &v48);
  EtwTraceEndCallback(117LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v46,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v45;
  *(_QWORD *)(v29 + 80) = v36;
  if ( v22 < 0 || v48 != 24 )
    return 0LL;
  v30 = (__int64 *)v49;
  if ( v49 + 8 < v49 || v49 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v44 = *v30;
  return result;
}
