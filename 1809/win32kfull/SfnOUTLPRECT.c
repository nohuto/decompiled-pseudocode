/*
 * XREFs of SfnOUTLPRECT @ 0x1C0149080
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

__int64 __fastcall SfnOUTLPRECT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  __int64 v32; // [rsp+48h] [rbp-E0h] BYREF
  volatile signed __int32 *v33; // [rsp+50h] [rbp-D8h]
  __int64 v34; // [rsp+58h] [rbp-D0h]
  __int128 v35; // [rsp+60h] [rbp-C8h]
  __int64 v36; // [rsp+70h] [rbp-B8h]
  _QWORD v37[16]; // [rsp+78h] [rbp-B0h] BYREF
  char v38; // [rsp+130h] [rbp+8h] BYREF
  char v39; // [rsp+138h] [rbp+10h] BYREF
  int v40; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+148h] [rbp+20h] BYREF

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
  memset(v37, 0, 0x28uLL);
  v37[0] = v14;
  LODWORD(v37[1]) = v10;
  v37[2] = a3;
  v37[3] = a5;
  v37[4] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v32 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v32;
  v33 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v18 = *(_OWORD *)(v17 + 64);
  v35 = v18;
  v19 = *(_QWORD *)(v17 + 80);
  v36 = v19;
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(34LL);
  v22 = KeUserModeCallback(34LL, v37, 40LL, &v41, &v40);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38, v23);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v26 + 64) = v18;
  *(_QWORD *)(v26 + 80) = v19;
  if ( v22 >= 0 && v40 == 24 )
  {
    v27 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v37[5] = *v27;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v28;
    v29 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(_OWORD **)(v29 + 96) != a4 )
    {
      v30 = *(_OWORD **)(v41 + 16);
      if ( v30 + 1 < v30 || (unsigned __int64)(v30 + 1) > MmUserProbeAddress )
        v30 = (_OWORD *)MmUserProbeAddress;
      *a4 = *v30;
      return v28;
    }
  }
  return 0LL;
}
