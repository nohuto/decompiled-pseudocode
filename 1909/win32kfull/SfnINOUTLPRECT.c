/*
 * XREFs of SfnINOUTLPRECT @ 0x1C00FE220
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
  __int64 v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int128 v20; // xmm6
  __int64 v21; // xmm7_8
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int128 *v34; // rcx
  char v36; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-100h] BYREF
  __int64 v40; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v41; // [rsp+60h] [rbp-E8h]
  __int64 v42; // [rsp+68h] [rbp-E0h]
  __int128 v43; // [rsp+70h] [rbp-D8h]
  __int64 v44; // [rsp+80h] [rbp-C8h]
  __int64 v45; // [rsp+88h] [rbp-C0h]
  __int128 v46; // [rsp+B0h] [rbp-98h]
  __int64 v47; // [rsp+C0h] [rbp-88h] BYREF
  int v48; // [rsp+C8h] [rbp-80h]
  int v49; // [rsp+CCh] [rbp-7Ch]
  __int64 v50; // [rsp+D0h] [rbp-78h]
  __int128 v51; // [rsp+D8h] [rbp-70h]
  __int64 v52; // [rsp+E8h] [rbp-60h]
  __int64 v53; // [rsp+F0h] [rbp-58h]

  v10 = a2;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0uLL;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v49 = 0;
  v47 = v16;
  v48 = v10;
  v50 = a3;
  v51 = *a4;
  v52 = a5;
  v53 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v40 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v20 = *(_OWORD *)(v19 + 64);
  v43 = v20;
  v21 = *(_QWORD *)(v19 + 80);
  v44 = v21;
  *(_QWORD *)(v19 + 72) = v16;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(20LL);
  v24 = KeUserModeCallback(20LL, &v47, 56LL, &v39, v38);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v30 + 64) = v20;
  *(_QWORD *)(v30 + 80) = v21;
  if ( v24 >= 0 && v38[0] == 24 )
  {
    v31 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v45 = *v31;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(__int128 **)(v33 + 96) != a4 )
    {
      v34 = *(__int128 **)(v39 + 16);
      if ( v34 + 1 < v34 || (unsigned __int64)(v34 + 1) > MmUserProbeAddress )
        v34 = (__int128 *)MmUserProbeAddress;
      v46 = *v34;
      *a4 = v46;
      return v32;
    }
  }
  return 0LL;
}
