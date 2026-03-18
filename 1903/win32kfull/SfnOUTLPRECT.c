/*
 * XREFs of SfnOUTLPRECT @ 0x1C014AC50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnOUTLPRECT(
        _QWORD *a1,
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int128 v22; // xmm6
  __int64 v23; // xmm7_8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int128 *v37; // rcx
  __int64 v39; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v40; // [rsp+50h] [rbp-E8h]
  __int64 v41; // [rsp+58h] [rbp-E0h]
  __int128 v42; // [rsp+60h] [rbp-D8h]
  __int64 v43; // [rsp+70h] [rbp-C8h]
  __int64 v44; // [rsp+78h] [rbp-C0h] BYREF
  int v45; // [rsp+80h] [rbp-B8h]
  int v46; // [rsp+84h] [rbp-B4h]
  __int64 v47; // [rsp+88h] [rbp-B0h]
  __int64 v48; // [rsp+90h] [rbp-A8h]
  __int64 v49; // [rsp+98h] [rbp-A0h]
  __int64 v50; // [rsp+A0h] [rbp-98h]
  __int128 v51; // [rsp+C8h] [rbp-70h]
  char v52; // [rsp+140h] [rbp+8h] BYREF
  char v53; // [rsp+148h] [rbp+10h] BYREF
  int v54; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v46 = 0;
  v44 = v17;
  v45 = v10;
  v47 = a3;
  v48 = a5;
  v49 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v39 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v22 = *(_OWORD *)(v21 + 64);
  v42 = v22;
  v23 = *(_QWORD *)(v21 + 80);
  v43 = v23;
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v24 = *a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v24;
  if ( a1 )
    v25 = *(_QWORD *)(a1[5] + 224LL);
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v25;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  EtwTraceBeginCallback(34LL);
  v26 = KeUserModeCallback(34LL, &v44, 40LL, &v55, &v54);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    v27,
    v28,
    v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v33 + 64) = v22;
  *(_QWORD *)(v33 + 80) = v23;
  if ( v26 >= 0 && v54 == 24 )
  {
    v34 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v35 = *v34;
    v50 = *v34;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v35;
    v36 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v36 || (*(_DWORD *)(v36 + 84) & 1) == 0 || *(_OWORD **)(v36 + 96) != a4 )
    {
      v37 = *(__int128 **)(v55 + 16);
      if ( v37 + 1 < v37 || (unsigned __int64)(v37 + 1) > MmUserProbeAddress )
        v37 = (__int128 *)MmUserProbeAddress;
      v51 = *v37;
      *a4 = v51;
      return v35;
    }
  }
  return 0LL;
}
