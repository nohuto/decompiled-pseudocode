/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C0116250
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
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
  char v25; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v26[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v27[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-108h] BYREF
  __int64 v29; // [rsp+58h] [rbp-100h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-F8h]
  __int64 v31; // [rsp+68h] [rbp-F0h]
  __int128 v32; // [rsp+70h] [rbp-E8h]
  __int64 v33; // [rsp+80h] [rbp-D8h]
  __int64 v34; // [rsp+88h] [rbp-D0h]
  __int128 v35; // [rsp+A8h] [rbp-B0h]
  _QWORD v36[12]; // [rsp+C0h] [rbp-98h] BYREF

  v8 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v36, 0, sizeof(v36));
  v36[0] = v12;
  LODWORD(v36[1]) = v8 & 0x1FFFF;
  v36[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v36[3] = *(_OWORD *)a4;
  *(_OWORD *)&v36[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v36[7] = *(_OWORD *)(a4 + 32);
  v36[9] = *(_QWORD *)(a4 + 48);
  v36[10] = a5;
  v36[11] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v29 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v29;
  v30 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 480);
  v35 = *(_OWORD *)(v15 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v15 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v26,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(54LL);
  v18 = KeUserModeCallback(54LL, v36, 96LL, &v28, v27);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v26, v19);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v22 + 64) = v35;
  *(_QWORD *)(v22 + 80) = v33;
  if ( v18 < 0 || v27[0] != 24 )
    return 0LL;
  v23 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  result = *v23;
  v34 = *v23;
  return result;
}
