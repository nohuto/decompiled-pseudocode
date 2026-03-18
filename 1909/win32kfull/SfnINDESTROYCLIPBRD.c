/*
 * XREFs of SfnINDESTROYCLIPBRD @ 0x1C0110D50
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

__int64 __fastcall SfnINDESTROYCLIPBRD(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 result; // rax
  __int64 v29; // [rsp+48h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-C8h]
  __int64 v31; // [rsp+58h] [rbp-C0h]
  __int128 v32; // [rsp+60h] [rbp-B8h]
  __int64 v33; // [rsp+70h] [rbp-A8h]
  __int64 v34; // [rsp+78h] [rbp-A0h] BYREF
  int v35; // [rsp+80h] [rbp-98h]
  int v36; // [rsp+84h] [rbp-94h]
  __int64 v37; // [rsp+88h] [rbp-90h]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-70h]
  __int128 v42; // [rsp+C8h] [rbp-50h]
  char v43; // [rsp+120h] [rbp+8h] BYREF
  char v44; // [rsp+128h] [rbp+10h] BYREF
  int v45; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v46; // [rsp+138h] [rbp+20h] BYREF

  v8 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v36 = 0;
  v34 = v14;
  v35 = v8;
  v37 = a3;
  v38 = a4;
  v39 = a5;
  v40 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v29 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v29;
  v30 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v42 = *(_OWORD *)(v17 + 64);
  v32 = v42;
  v33 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v43,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(25LL);
  v20 = KeUserModeCallback(25LL, &v34, 48LL, &v46, &v45);
  EtwTraceEndCallback(25LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v43,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v42;
  *(_QWORD *)(v26 + 80) = v33;
  if ( v20 < 0 || v45 != 24 )
    return 0LL;
  v27 = (__int64 *)v46;
  if ( v46 + 8 < v46 || v46 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v41 = *v27;
  return result;
}
