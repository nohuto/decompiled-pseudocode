/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C02027A0
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

__int64 __fastcall SfnINOUTNEXTMENU(
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
  ULONG64 v28; // rcx
  __int64 v29; // xmm0_8
  __int64 v31; // [rsp+48h] [rbp-F0h] BYREF
  volatile signed __int32 *v32; // [rsp+50h] [rbp-E8h]
  __int64 v33; // [rsp+58h] [rbp-E0h]
  __int128 v34; // [rsp+60h] [rbp-D8h]
  __int64 v35; // [rsp+70h] [rbp-C8h]
  _QWORD v36[13]; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v37; // [rsp+E8h] [rbp-50h]
  char v38; // [rsp+140h] [rbp+8h] BYREF
  char v39; // [rsp+148h] [rbp+10h] BYREF
  int v40; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0uLL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v36, 0, 0x40uLL);
  v36[0] = v14;
  LODWORD(v36[1]) = v10;
  v36[2] = a3;
  v36[6] = a5;
  v36[7] = a6;
  *(_OWORD *)&v36[3] = *(_OWORD *)a4;
  v36[5] = *(_QWORD *)(a4 + 16);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v31 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v31;
  v32 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v37 = *(_OWORD *)(v17 + 64);
  v34 = v37;
  v35 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(30LL);
  v20 = KeUserModeCallback(30LL, v36, 64LL, &v41, &v40);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v37;
  *(_QWORD *)(v24 + 80) = v35;
  if ( v20 >= 0 && v40 == 24 )
  {
    v25 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v36[8] = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD *)(v27 + 96) != a4 )
    {
      v28 = *(_QWORD *)(v41 + 16);
      if ( v28 + 24 < v28 || v28 + 24 > MmUserProbeAddress )
        v28 = MmUserProbeAddress;
      v29 = *(_QWORD *)(v28 + 16);
      *(_OWORD *)a4 = *(_OWORD *)v28;
      *(_QWORD *)(a4 + 16) = v29;
      return v26;
    }
  }
  return 0LL;
}
