/*
 * XREFs of SfnINLPDELETEITEMSTRUCT @ 0x1C02000E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINLPDELETEITEMSTRUCT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 result; // rax
  __int64 v25; // [rsp+48h] [rbp-F0h] BYREF
  volatile signed __int32 *v26; // [rsp+50h] [rbp-E8h]
  __int64 v27; // [rsp+58h] [rbp-E0h]
  __int128 v28; // [rsp+60h] [rbp-D8h]
  __int64 v29; // [rsp+70h] [rbp-C8h]
  __int64 v30; // [rsp+78h] [rbp-C0h]
  __int128 v31; // [rsp+98h] [rbp-A0h]
  _QWORD v32[17]; // [rsp+B0h] [rbp-88h] BYREF
  char v33; // [rsp+140h] [rbp+8h] BYREF
  char v34; // [rsp+148h] [rbp+10h] BYREF
  int v35; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v36; // [rsp+158h] [rbp+20h] BYREF

  v8 = a2;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0uLL;
  v29 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v32, 0, 0x48uLL);
  v32[0] = v12;
  LODWORD(v32[1]) = v8;
  v32[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v32[3] = *(_OWORD *)a4;
  *(_OWORD *)&v32[5] = *(_OWORD *)(a4 + 16);
  v32[7] = a5;
  v32[8] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v25 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v25;
  v26 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 480);
  v31 = *(_OWORD *)(v15 + 64);
  v28 = v31;
  v29 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v33,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(11LL);
  v18 = KeUserModeCallback(11LL, v32, 72LL, &v36, &v35);
  EtwTraceEndCallback(11LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v33, v19);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v22 + 64) = v31;
  *(_QWORD *)(v22 + 80) = v29;
  if ( v18 < 0 || v35 != 24 )
    return 0LL;
  v23 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  result = *v23;
  v30 = *v23;
  return result;
}
