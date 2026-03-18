/*
 * XREFs of SfnNCDESTROY @ 0x1C001ABE0
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

__int64 __fastcall SfnNCDESTROY(volatile signed __int32 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 result; // rax
  __int64 v22; // [rsp+48h] [rbp-D0h] BYREF
  volatile signed __int32 *v23; // [rsp+50h] [rbp-C8h]
  __int64 v24; // [rsp+58h] [rbp-C0h]
  __int128 v25; // [rsp+60h] [rbp-B8h]
  __int64 v26; // [rsp+70h] [rbp-A8h]
  _QWORD v27[10]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v28; // [rsp+C8h] [rbp-50h]
  char v29; // [rsp+120h] [rbp+8h] BYREF
  char v30; // [rsp+128h] [rbp+10h] BYREF
  int v31; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v32; // [rsp+138h] [rbp+20h] BYREF

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0uLL;
  v26 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v27, 0, 0x30uLL);
  v27[0] = v12;
  LODWORD(v27[1]) = a2;
  v27[2] = a3;
  v27[3] = a4;
  v27[4] = a5;
  v27[5] = a6;
  v13 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v22 = *(_QWORD *)(v13 + 416);
  *(_QWORD *)(v13 + 416) = &v22;
  v23 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v14 = *(_QWORD *)(v11 + 480);
  v28 = *(_OWORD *)(v14 + 64);
  v25 = v28;
  v26 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(v14 + 72) = v12;
  if ( a1 )
    v15 = *(_QWORD *)a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v16;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v29,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(3LL);
  v17 = KeUserModeCallback(3LL, v27, 48LL, &v32, &v31);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v29, v18);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL) = 0LL;
  ThreadUnlock1();
  v19 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v19 + 64) = v28;
  *(_QWORD *)(v19 + 80) = v26;
  if ( v17 < 0 || v31 != 24 )
    return 0LL;
  v20 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v20 = (__int64 *)MmUserProbeAddress;
  result = *v20;
  v27[6] = *v20;
  return result;
}
