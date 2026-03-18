/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C0153280
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
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  ULONG64 v28; // rcx
  __int128 v29; // xmm3
  __int128 v30; // xmm4
  __int64 v31; // xmm0_8
  int v32; // eax
  char v34; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-120h] BYREF
  __int64 v38; // [rsp+58h] [rbp-110h] BYREF
  volatile signed __int32 *v39; // [rsp+60h] [rbp-108h]
  __int64 v40; // [rsp+68h] [rbp-100h]
  __int128 v41; // [rsp+70h] [rbp-F8h]
  __int64 v42; // [rsp+80h] [rbp-E8h]
  __int64 v43; // [rsp+88h] [rbp-E0h]
  __int128 v44; // [rsp+B0h] [rbp-B8h]
  _QWORD v45[14]; // [rsp+C0h] [rbp-A8h] BYREF

  v10 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
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
  v38 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v38;
  v39 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v44 = *(_OWORD *)(v17 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v35,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(105LL);
  v20 = KeUserModeCallback(105LL, v45, 104LL, &v37, v36);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v35, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v44;
  *(_QWORD *)(v24 + 80) = v42;
  if ( v20 >= 0 && v36[0] == 24 )
  {
    v25 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v43 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD *)(v27 + 96) != a4 )
    {
      v28 = *(_QWORD *)(v37 + 16);
      if ( v28 + 60 < v28 || v28 + 60 > MmUserProbeAddress )
        v28 = MmUserProbeAddress;
      v29 = *(_OWORD *)(v28 + 16);
      v30 = *(_OWORD *)(v28 + 32);
      v31 = *(_QWORD *)(v28 + 48);
      v32 = *(_DWORD *)(v28 + 56);
      *(_OWORD *)a4 = *(_OWORD *)v28;
      *(_OWORD *)(a4 + 16) = v29;
      *(_OWORD *)(a4 + 32) = v30;
      *(_QWORD *)(a4 + 48) = v31;
      *(_DWORD *)(a4 + 56) = v32;
      return v26;
    }
  }
  return 0LL;
}
