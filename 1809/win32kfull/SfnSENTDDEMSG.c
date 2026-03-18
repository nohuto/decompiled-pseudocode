/*
 * XREFs of SfnSENTDDEMSG @ 0x1C0204C90
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
 *     xxxDDETrackGetMessageHook @ 0x1C01F4BC0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v9; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  signed int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 result; // rax
  _DWORD v27[8]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-F0h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-E8h]
  __int64 v31; // [rsp+68h] [rbp-E0h]
  __int128 v32; // [rsp+70h] [rbp-D8h]
  __int64 v33; // [rsp+80h] [rbp-C8h]
  _QWORD v34[7]; // [rsp+88h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+C0h] [rbp-88h] BYREF
  int v36; // [rsp+C8h] [rbp-80h]
  __int64 v37; // [rsp+D0h] [rbp-78h]
  __int64 v38; // [rsp+D8h] [rbp-70h]
  __int64 v39; // [rsp+F0h] [rbp-58h]
  __int128 v40; // [rsp+110h] [rbp-38h]
  char v41; // [rsp+150h] [rbp+8h] BYREF
  char v42; // [rsp+158h] [rbp+10h] BYREF

  v9 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v13 = 0LL;
  memset(v34, 0, sizeof(v34));
  v14 = v9 & 0xBFFFFFFF;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v29 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v29;
  v30 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v12 + 480);
  v40 = *(_OWORD *)(v17 + 64);
  v32 = v40;
  v33 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 480) + 80LL) = v19;
  if ( v14 >= 0 )
  {
    v34[0] = v13;
    LODWORD(v34[1]) = v14;
    v34[2] = a3;
    v34[3] = a4;
  }
  else
  {
    if ( a1 )
      v35 = *(_QWORD *)a1;
    else
      v35 = 0LL;
    v36 = v14 & 0x7FFFFFFF;
    v37 = a3;
    v38 = a4;
    xxxDDETrackGetMessageHook((__int64)&v35);
    v34[0] = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v35) - *(_QWORD *)(v12 + 472);
    LODWORD(v34[1]) = v36;
    v34[2] = v37;
    v34[3] = v38;
  }
  v34[4] = a5;
  v34[5] = a6;
  LODWORD(v34[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(38LL);
  v20 = KeUserModeCallback(38LL, v34, 56LL, &v28, v27);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v12 + 480);
  *(_OWORD *)(v24 + 64) = v40;
  *(_QWORD *)(v24 + 80) = v33;
  if ( v20 < 0 || v27[0] != 24 )
    return 0LL;
  v25 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  result = *v25;
  v39 = *v25;
  return result;
}
