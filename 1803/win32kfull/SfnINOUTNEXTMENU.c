/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C01DD1E0
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
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  ULONG64 v29; // rcx
  __int64 v30; // xmm1_8
  __int128 v32; // [rsp+40h] [rbp-E8h]
  __int64 v33; // [rsp+50h] [rbp-D8h]
  __int64 v34; // [rsp+60h] [rbp-C8h] BYREF
  volatile signed __int32 *v35; // [rsp+68h] [rbp-C0h]
  __int64 v36; // [rsp+70h] [rbp-B8h]
  _QWORD v37[21]; // [rsp+80h] [rbp-A8h] BYREF
  char v38; // [rsp+130h] [rbp+8h] BYREF
  char v39; // [rsp+138h] [rbp+10h] BYREF
  int v40; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v41; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v37, 0, 0x40uLL);
  v37[0] = v14;
  LODWORD(v37[1]) = v10;
  v37[2] = a3;
  v37[6] = a5;
  v37[7] = a6;
  *(_OWORD *)&v37[3] = *(_OWORD *)a4;
  v37[5] = *(_QWORD *)(a4 + 16);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v34 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v34;
  v35 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v32 = *(_OWORD *)(v17 + 64);
  v33 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v38,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(30LL);
  v20 = KeUserModeCallback(30LL, v37, 64LL, &v41, &v40);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v38, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v32;
  *(_QWORD *)(v25 + 80) = v33;
  if ( v20 >= 0 && v40 == 24 )
  {
    v26 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v37[8] = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD *)(v28 + 96) != a4 )
    {
      v29 = *(_QWORD *)(v41 + 16);
      if ( v29 + 24 < v29 || v29 + 24 > MmUserProbeAddress )
        v29 = MmUserProbeAddress;
      v30 = *(_QWORD *)(v29 + 16);
      *(_OWORD *)a4 = *(_OWORD *)v29;
      *(_QWORD *)(a4 + 16) = v30;
      return v27;
    }
  }
  return 0LL;
}
