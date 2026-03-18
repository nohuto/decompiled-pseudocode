/*
 * XREFs of SfnINOUTLPSCROLLINFO @ 0x1C00EE810
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

__int64 __fastcall SfnINOUTLPSCROLLINFO(
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
  ULONG64 v32; // rcx
  __int64 v33; // xmm0_8
  int v34; // eax
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
  int v53; // [rsp+F0h] [rbp-58h]
  int v54; // [rsp+F4h] [rbp-54h]
  __int64 v55; // [rsp+F8h] [rbp-50h]
  __int64 v56; // [rsp+100h] [rbp-48h]

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
  v54 = 0;
  v47 = v16;
  v48 = v10;
  v50 = a3;
  v51 = *a4;
  v52 = *((_QWORD *)a4 + 2);
  v53 = *((_DWORD *)a4 + 6);
  v55 = a5;
  v56 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v40 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v40;
  v41 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v46 = *(_OWORD *)(v19 + 64);
  v43 = v46;
  v44 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(19LL);
  v22 = KeUserModeCallback(19LL, &v47, 72LL, &v39, v38);
  EtwTraceEndCallback(19LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v46;
  *(_QWORD *)(v28 + 80) = v44;
  if ( v22 >= 0 && v38[0] == 24 )
  {
    v29 = (__int64 *)v39;
    if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v45 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(__int128 **)(v31 + 96) != a4 )
    {
      v32 = *(_QWORD *)(v39 + 16);
      if ( v32 + 28 < v32 || v32 + 28 > MmUserProbeAddress )
        v32 = MmUserProbeAddress;
      v33 = *(_QWORD *)(v32 + 16);
      v34 = *(_DWORD *)(v32 + 24);
      *a4 = *(_OWORD *)v32;
      *((_QWORD *)a4 + 2) = v33;
      *((_DWORD *)a4 + 6) = v34;
      return v30;
    }
  }
  return 0LL;
}
