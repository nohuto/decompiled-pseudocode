/*
 * XREFs of SfnINDESTROYCLIPBRD @ 0x1C012BBA0
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

__int64 __fastcall SfnINDESTROYCLIPBRD(
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
  __int64 v25; // [rsp+48h] [rbp-D0h] BYREF
  volatile signed __int32 *v26; // [rsp+50h] [rbp-C8h]
  __int64 v27; // [rsp+58h] [rbp-C0h]
  __int128 v28; // [rsp+60h] [rbp-B8h]
  __int64 v29; // [rsp+70h] [rbp-A8h]
  _QWORD v30[10]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+C8h] [rbp-50h]
  char v32; // [rsp+120h] [rbp+8h] BYREF
  char v33; // [rsp+128h] [rbp+10h] BYREF
  int v34; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v35; // [rsp+138h] [rbp+20h] BYREF

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
  memset(v30, 0, 0x30uLL);
  v30[0] = v12;
  LODWORD(v30[1]) = v8;
  v30[2] = a3;
  v30[3] = a4;
  v30[4] = a5;
  v30[5] = a6;
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
    (ReleaseAndReacquirePerObjectLocks *)&v32,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(25LL);
  v18 = KeUserModeCallback(25LL, v30, 48LL, &v35, &v34);
  EtwTraceEndCallback(25LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v32, v19);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v22 + 64) = v31;
  *(_QWORD *)(v22 + 80) = v29;
  if ( v18 < 0 || v34 != 24 )
    return 0LL;
  v23 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  result = *v23;
  v30[6] = *v23;
  return result;
}
