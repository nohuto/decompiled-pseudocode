/*
 * XREFs of SfnINOUTLPMEASUREITEMSTRUCT @ 0x1C0157100
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

__int64 __fastcall SfnINOUTLPMEASUREITEMSTRUCT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int128 *v32; // rcx
  __int128 v33; // xmm1
  char v35; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-100h] BYREF
  __int64 v39; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v40; // [rsp+60h] [rbp-E8h]
  __int64 v41; // [rsp+68h] [rbp-E0h]
  __int128 v42; // [rsp+70h] [rbp-D8h]
  __int64 v43; // [rsp+80h] [rbp-C8h]
  __int64 v44; // [rsp+88h] [rbp-C0h]
  __int128 v45; // [rsp+B0h] [rbp-98h]
  __int64 v46; // [rsp+C0h] [rbp-88h] BYREF
  int v47; // [rsp+C8h] [rbp-80h]
  int v48; // [rsp+CCh] [rbp-7Ch]
  __int64 v49; // [rsp+D0h] [rbp-78h]
  __int128 v50; // [rsp+D8h] [rbp-70h]
  __int128 v51; // [rsp+E8h] [rbp-60h]
  __int64 v52; // [rsp+F8h] [rbp-50h]
  __int64 v53; // [rsp+100h] [rbp-48h]

  v10 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v48 = 0;
  v46 = v16;
  v47 = v10 & 0x1FFFF;
  v49 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v50 = *a4;
  v51 = a4[1];
  v52 = a5;
  v53 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v39 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v45 = *(_OWORD *)(v19 + 64);
  v42 = v45;
  v43 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v16;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(16LL);
  v22 = KeUserModeCallback(16LL, &v46, 72LL, &v38, v37);
  EtwTraceEndCallback(16LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v45;
  *(_QWORD *)(v28 + 80) = v43;
  if ( v22 >= 0 && v37[0] == 24 )
  {
    v29 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v44 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(__int128 **)(v31 + 96) != a4 )
    {
      v32 = *(__int128 **)(v38 + 16);
      if ( v32 + 2 < v32 || (unsigned __int64)(v32 + 2) > MmUserProbeAddress )
        v32 = (__int128 *)MmUserProbeAddress;
      v33 = v32[1];
      *a4 = *v32;
      a4[1] = v33;
      return v30;
    }
  }
  return 0LL;
}
