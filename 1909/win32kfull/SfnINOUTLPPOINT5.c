/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C0052080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINOUTLPPOINT5(
        _QWORD *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  ULONG64 v30; // rcx
  __int128 v31; // xmm3
  __int64 v32; // xmm0_8
  char v34; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp-100h] BYREF
  __int64 v38; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v39; // [rsp+60h] [rbp-E8h]
  __int64 v40; // [rsp+68h] [rbp-E0h]
  __int128 v41; // [rsp+70h] [rbp-D8h]
  __int64 v42; // [rsp+80h] [rbp-C8h]
  __int64 v43; // [rsp+88h] [rbp-C0h]
  __int128 v44; // [rsp+B0h] [rbp-98h]
  __int64 v45; // [rsp+C0h] [rbp-88h] BYREF
  int v46; // [rsp+C8h] [rbp-80h]
  int v47; // [rsp+CCh] [rbp-7Ch]
  __int64 v48; // [rsp+D0h] [rbp-78h]
  __int128 v49; // [rsp+D8h] [rbp-70h]
  __int128 v50; // [rsp+E8h] [rbp-60h]
  __int64 v51; // [rsp+F8h] [rbp-50h]
  __int64 v52; // [rsp+100h] [rbp-48h]
  __int64 v53; // [rsp+108h] [rbp-40h]

  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v47 = 0;
  v45 = v14;
  v46 = a2;
  v48 = a3;
  v49 = *a4;
  v50 = a4[1];
  v51 = *((_QWORD *)a4 + 4);
  v52 = a5;
  v53 = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v38 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v44 = *(_OWORD *)(v17 + 64);
  v41 = v44;
  v42 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  EtwTraceBeginCallback(18LL);
  v20 = KeUserModeCallback(18LL, &v45, 80LL, &v37, v36);
  EtwTraceEndCallback(18LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v35,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v44;
  *(_QWORD *)(v26 + 80) = v42;
  if ( v20 < 0 || v36[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v43 = *v27;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v28;
  v29 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(__int128 **)(v29 + 96) != a4 )
  {
    v30 = *(_QWORD *)(v37 + 16);
    if ( v30 + 40 < v30 || v30 + 40 > MmUserProbeAddress )
      v30 = MmUserProbeAddress;
    v31 = *(_OWORD *)(v30 + 16);
    v32 = *(_QWORD *)(v30 + 32);
    *a4 = *(_OWORD *)v30;
    a4[1] = v31;
    *((_QWORD *)a4 + 4) = v32;
    return v28;
  }
  return 0LL;
}
