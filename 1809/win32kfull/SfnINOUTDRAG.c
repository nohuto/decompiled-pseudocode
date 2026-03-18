/*
 * XREFs of SfnINOUTDRAG @ 0x1C0201BA0
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

__int64 __fastcall SfnINOUTDRAG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
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
  __int64 v26; // r8
  __int64 v27; // rdx
  _OWORD *v28; // rcx
  __int128 v29; // xmm1
  __int128 v30; // xmm2
  __int64 v32; // [rsp+48h] [rbp-100h] BYREF
  volatile signed __int32 *v33; // [rsp+50h] [rbp-F8h]
  __int64 v34; // [rsp+58h] [rbp-F0h]
  __int128 v35; // [rsp+60h] [rbp-E8h]
  __int64 v36; // [rsp+70h] [rbp-D8h]
  __int64 v37; // [rsp+78h] [rbp-D0h]
  __int128 v38; // [rsp+A0h] [rbp-A8h]
  _QWORD v39[19]; // [rsp+B0h] [rbp-98h] BYREF
  char v40; // [rsp+150h] [rbp+8h] BYREF
  char v41; // [rsp+158h] [rbp+10h] BYREF
  int v42; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+168h] [rbp+20h] BYREF

  v10 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v39, 0, 0x58uLL);
  v39[0] = v14;
  LODWORD(v39[1]) = v10;
  v39[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  *(_OWORD *)&v39[5] = *(_OWORD *)a4;
  *(_OWORD *)&v39[7] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v39[9] = *(_OWORD *)(a4 + 32);
  v39[3] = a5;
  v39[4] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v32 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v32;
  v33 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v38 = *(_OWORD *)(v17 + 64);
  v35 = v38;
  v36 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v40,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(5LL);
  v20 = KeUserModeCallback(5LL, v39, 88LL, &v43, &v42);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v38;
  *(_QWORD *)(v24 + 80) = v36;
  if ( v20 >= 0 && v42 == 24 )
  {
    v25 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v37 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD *)(v27 + 96) != a4 )
    {
      v28 = *(_OWORD **)(v43 + 16);
      if ( v28 + 3 < v28 || (unsigned __int64)(v28 + 3) > MmUserProbeAddress )
        v28 = (_OWORD *)MmUserProbeAddress;
      v29 = v28[1];
      v30 = v28[2];
      *(_OWORD *)a4 = *v28;
      *(_OWORD *)(a4 + 16) = v29;
      *(_OWORD *)(a4 + 32) = v30;
      return v26;
    }
  }
  return 0LL;
}
