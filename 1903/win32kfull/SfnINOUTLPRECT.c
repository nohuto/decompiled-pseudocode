/*
 * XREFs of SfnINOUTLPRECT @ 0x1C0123B20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPRECT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
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
  char v39; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v40[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v41[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-100h] BYREF
  __int64 v43; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v44; // [rsp+60h] [rbp-E8h]
  __int64 v45; // [rsp+68h] [rbp-E0h]
  __int128 v46; // [rsp+70h] [rbp-D8h]
  __int64 v47; // [rsp+80h] [rbp-C8h]
  __int64 v48; // [rsp+88h] [rbp-C0h]
  __int128 v49; // [rsp+B0h] [rbp-98h]
  __int64 v50; // [rsp+C0h] [rbp-88h] BYREF
  int v51; // [rsp+C8h] [rbp-80h]
  int v52; // [rsp+CCh] [rbp-7Ch]
  __int64 v53; // [rsp+D0h] [rbp-78h]
  __int128 v54; // [rsp+D8h] [rbp-70h]
  __int64 v55; // [rsp+E8h] [rbp-60h]
  __int64 v56; // [rsp+F0h] [rbp-58h]

  v10 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0uLL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v52 = 0;
  v50 = v17;
  v51 = v10;
  v53 = a3;
  v54 = *a4;
  v55 = a5;
  v56 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v43 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v43;
  v44 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v22 = *(_OWORD *)(v21 + 64);
  v46 = v22;
  v23 = *(_QWORD *)(v21 + 80);
  v47 = v23;
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
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(20LL);
  v26 = KeUserModeCallback(20LL, &v50, 56LL, &v42, v41);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    v27,
    v28,
    v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v33 + 64) = v22;
  *(_QWORD *)(v33 + 80) = v23;
  if ( v26 >= 0 && v41[0] == 24 )
  {
    v34 = (__int64 *)v42;
    if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v35 = *v34;
    v48 = *v34;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v35;
    v36 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v36 || (*(_DWORD *)(v36 + 84) & 1) == 0 || *(__int128 **)(v36 + 96) != a4 )
    {
      v37 = *(__int128 **)(v42 + 16);
      if ( v37 + 1 < v37 || (unsigned __int64)(v37 + 1) > MmUserProbeAddress )
        v37 = (__int128 *)MmUserProbeAddress;
      v49 = *v37;
      *a4 = v49;
      return v35;
    }
  }
  return 0LL;
}
