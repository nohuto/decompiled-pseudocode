/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C00B1220
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

__int64 __fastcall SfnINOUTLPPOINT5(
        _QWORD *a1,
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
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 *v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  ULONG64 v35; // rcx
  __int128 v36; // xmm3
  __int64 v37; // xmm0_8
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
  __int128 v55; // [rsp+E8h] [rbp-60h]
  __int64 v56; // [rsp+F8h] [rbp-50h]
  __int64 v57; // [rsp+100h] [rbp-48h]
  __int64 v58; // [rsp+108h] [rbp-40h]

  v10 = a2;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0uLL;
  v47 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v52 = 0;
  v50 = v17;
  v51 = v10;
  v53 = a3;
  v54 = *(_OWORD *)a4;
  v55 = *(_OWORD *)(a4 + 16);
  v56 = *(_QWORD *)(a4 + 32);
  v57 = a5;
  v58 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v43 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v43;
  v44 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v49 = *(_OWORD *)(v21 + 64);
  v46 = v49;
  v47 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v17;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v16 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  EtwTraceBeginCallback(18LL);
  v24 = KeUserModeCallback(18LL, &v50, 80LL, &v42, v41);
  EtwTraceEndCallback(18LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v39);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v40,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v49;
  *(_QWORD *)(v31 + 80) = v47;
  if ( v24 < 0 || v41[0] != 24 )
    return 0LL;
  v32 = (__int64 *)v42;
  if ( v42 + 8 < v42 || v42 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v48 = *v32;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v33;
  v34 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(_QWORD *)(v34 + 96) != a4 )
  {
    v35 = *(_QWORD *)(v42 + 16);
    if ( v35 + 40 < v35 || v35 + 40 > MmUserProbeAddress )
      v35 = MmUserProbeAddress;
    v36 = *(_OWORD *)(v35 + 16);
    v37 = *(_QWORD *)(v35 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v35;
    *(_OWORD *)(a4 + 16) = v36;
    *(_QWORD *)(a4 + 32) = v37;
    return v33;
  }
  return 0LL;
}
