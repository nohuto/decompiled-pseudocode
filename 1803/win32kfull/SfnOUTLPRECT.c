/*
 * XREFs of SfnOUTLPRECT @ 0x1C01278C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 *v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rdx
  __int128 *v32; // rcx
  __int64 v33; // [rsp+48h] [rbp-F0h] BYREF
  volatile signed __int32 *v34; // [rsp+50h] [rbp-E8h]
  __int64 v35; // [rsp+58h] [rbp-E0h]
  __int128 v36; // [rsp+60h] [rbp-D8h]
  __int64 v37; // [rsp+70h] [rbp-C8h]
  _QWORD v38[10]; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v39; // [rsp+C8h] [rbp-70h]
  char v40; // [rsp+140h] [rbp+8h] BYREF
  char v41; // [rsp+148h] [rbp+10h] BYREF
  int v42; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v38, 0, 0x28uLL);
  v38[0] = v14;
  LODWORD(v38[1]) = v10;
  v38[2] = a3;
  v38[3] = a5;
  v38[4] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v33 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v18 = *(_OWORD *)(v17 + 64);
  v36 = v18;
  v19 = *(_QWORD *)(v17 + 80);
  v37 = v19;
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v40,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  EtwTraceBeginCallback(34LL);
  v22 = KeUserModeCallback(34LL, v38, 40LL, &v43, &v42);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v41);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v40, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v27 + 64) = v18;
  *(_QWORD *)(v27 + 80) = v19;
  if ( v22 >= 0 && v42 == 24 )
  {
    v28 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v38[5] = *v28;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v29;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(_OWORD **)(v31 + 96) != a4 )
    {
      v32 = *(__int128 **)(v43 + 16);
      if ( v32 + 1 < v32 || (unsigned __int64)(v32 + 1) > MmUserProbeAddress )
        v32 = (__int128 *)MmUserProbeAddress;
      v39 = *v32;
      *a4 = v39;
      return v29;
    }
  }
  return 0LL;
}
