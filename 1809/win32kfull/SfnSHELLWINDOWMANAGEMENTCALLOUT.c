/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTCALLOUT @ 0x1C0205080
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTCALLOUT(
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
  __int128 v31; // xmm3
  char v33; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-120h] BYREF
  __int64 v37; // [rsp+58h] [rbp-110h] BYREF
  volatile signed __int32 *v38; // [rsp+60h] [rbp-108h]
  __int64 v39; // [rsp+68h] [rbp-100h]
  __int128 v40; // [rsp+70h] [rbp-F8h]
  __int64 v41; // [rsp+80h] [rbp-E8h]
  __int64 v42; // [rsp+88h] [rbp-E0h]
  __int128 v43; // [rsp+B0h] [rbp-B8h]
  _QWORD v44[14]; // [rsp+C0h] [rbp-A8h] BYREF

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v44, 0, 0x68uLL);
  v44[0] = v14;
  LODWORD(v44[1]) = v10 & 0x1FFFF;
  v44[2] = a3;
  *(_OWORD *)&v44[3] = *a4;
  *(_OWORD *)&v44[5] = a4[1];
  *(_OWORD *)&v44[7] = a4[2];
  *(_OWORD *)&v44[9] = a4[3];
  v44[11] = a5;
  v44[12] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v37 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v37;
  v38 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v43 = *(_OWORD *)(v17 + 64);
  v40 = v43;
  v41 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(53LL);
  v20 = KeUserModeCallback(53LL, v44, 104LL, &v36, v35);
  EtwTraceEndCallback(53LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v43;
  *(_QWORD *)(v24 + 80) = v41;
  if ( v20 >= 0 && v35[0] == 24 )
  {
    v25 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v42 = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_OWORD **)(v27 + 96) != a4 )
    {
      v28 = *(_OWORD **)(v36 + 16);
      if ( v28 + 4 < v28 || (unsigned __int64)(v28 + 4) > MmUserProbeAddress )
        v28 = (_OWORD *)MmUserProbeAddress;
      v29 = v28[1];
      v30 = v28[2];
      v31 = v28[3];
      *a4 = *v28;
      a4[1] = v29;
      a4[2] = v30;
      a4[3] = v31;
      return v26;
    }
  }
  return 0LL;
}
