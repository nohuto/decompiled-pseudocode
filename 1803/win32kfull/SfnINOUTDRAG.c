/*
 * XREFs of SfnINOUTDRAG @ 0x1C01DC6A0
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
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v33; // [rsp+40h] [rbp-F8h]
  __int64 v34; // [rsp+50h] [rbp-E8h]
  __int64 v35; // [rsp+60h] [rbp-D8h] BYREF
  volatile signed __int32 *v36; // [rsp+68h] [rbp-D0h]
  __int64 v37; // [rsp+70h] [rbp-C8h]
  __int64 v38; // [rsp+78h] [rbp-C0h]
  _QWORD v39[19]; // [rsp+A0h] [rbp-98h] BYREF
  char v40; // [rsp+140h] [rbp+8h] BYREF
  char v41; // [rsp+148h] [rbp+10h] BYREF
  int v42; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v43; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
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
  v35 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v35;
  v36 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v33 = *(_OWORD *)(v17 + 64);
  v34 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
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
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v33;
  *(_QWORD *)(v25 + 80) = v34;
  if ( v20 >= 0 && v42 == 24 )
  {
    v26 = (__int64 *)v43;
    if ( v43 + 8 < v43 || v43 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v38 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD *)(v28 + 96) != a4 )
    {
      v29 = *(_OWORD **)(v43 + 16);
      if ( v29 + 3 < v29 || (unsigned __int64)(v29 + 3) > MmUserProbeAddress )
        v29 = (_OWORD *)MmUserProbeAddress;
      v30 = v29[1];
      v31 = v29[2];
      *(_OWORD *)a4 = *v29;
      *(_OWORD *)(a4 + 16) = v30;
      *(_OWORD *)(a4 + 32) = v31;
      return v27;
    }
  }
  return 0LL;
}
