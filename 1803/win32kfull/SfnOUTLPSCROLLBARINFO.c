/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C012E930
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
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
  __int128 v30; // xmm3
  __int128 v31; // xmm0
  __int64 v32; // xmm1_8
  int v33; // eax
  char v35; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-110h] BYREF
  __int128 v39; // [rsp+50h] [rbp-108h]
  __int64 v40; // [rsp+60h] [rbp-F8h]
  __int64 v41; // [rsp+70h] [rbp-E8h] BYREF
  volatile signed __int32 *v42; // [rsp+78h] [rbp-E0h]
  __int64 v43; // [rsp+80h] [rbp-D8h]
  __int64 v44; // [rsp+88h] [rbp-D0h]
  _QWORD v45[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v10 = a2;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v45, 0, 0x68uLL);
  v45[0] = v14;
  LODWORD(v45[1]) = v10;
  v45[2] = a3;
  *(_OWORD *)&v45[3] = *(_OWORD *)a4;
  *(_OWORD *)&v45[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v45[7] = *(_OWORD *)(a4 + 32);
  v45[9] = *(_QWORD *)(a4 + 48);
  LODWORD(v45[10]) = *(_DWORD *)(a4 + 56);
  v45[11] = a5;
  v45[12] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v41 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v41;
  v42 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v39 = *(_OWORD *)(v17 + 64);
  v40 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(105LL);
  v20 = KeUserModeCallback(105LL, v45, 104LL, &v38, v37);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v36, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v39;
  *(_QWORD *)(v25 + 80) = v40;
  if ( v20 >= 0 && v37[0] == 24 )
  {
    v26 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v27 = *v26;
    v44 = *v26;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v27;
    v28 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD *)(v28 + 96) != a4 )
    {
      v29 = *(_QWORD *)(v38 + 16);
      if ( v29 + 60 < v29 || v29 + 60 > MmUserProbeAddress )
        v29 = MmUserProbeAddress;
      v30 = *(_OWORD *)(v29 + 16);
      v31 = *(_OWORD *)(v29 + 32);
      v32 = *(_QWORD *)(v29 + 48);
      v33 = *(_DWORD *)(v29 + 56);
      *(_OWORD *)a4 = *(_OWORD *)v29;
      *(_OWORD *)(a4 + 16) = v30;
      *(_OWORD *)(a4 + 32) = v31;
      *(_QWORD *)(a4 + 48) = v32;
      *(_DWORD *)(a4 + 56) = v33;
      return v27;
    }
  }
  return 0LL;
}
