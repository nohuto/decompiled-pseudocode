/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1C021B4B0
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

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
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
  __int128 v33; // xmm3
  __int128 v34; // xmm4
  __int64 v35; // xmm0_8
  int v36; // eax
  char v38; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v39[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v40[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v41; // [rsp+48h] [rbp-120h] BYREF
  __int64 v42; // [rsp+58h] [rbp-110h] BYREF
  _QWORD *v43; // [rsp+60h] [rbp-108h]
  __int64 v44; // [rsp+68h] [rbp-100h]
  __int128 v45; // [rsp+70h] [rbp-F8h]
  __int64 v46; // [rsp+80h] [rbp-E8h]
  __int64 v47; // [rsp+88h] [rbp-E0h]
  __int128 v48; // [rsp+B0h] [rbp-B8h]
  __int64 v49; // [rsp+C0h] [rbp-A8h] BYREF
  int v50; // [rsp+C8h] [rbp-A0h]
  int v51; // [rsp+CCh] [rbp-9Ch]
  __int64 v52; // [rsp+D0h] [rbp-98h]
  __int128 v53; // [rsp+D8h] [rbp-90h]
  __int128 v54; // [rsp+E8h] [rbp-80h]
  __int128 v55; // [rsp+F8h] [rbp-70h]
  __int64 v56; // [rsp+108h] [rbp-60h]
  int v57; // [rsp+110h] [rbp-58h]
  int v58; // [rsp+114h] [rbp-54h]
  __int64 v59; // [rsp+118h] [rbp-50h]
  __int64 v60; // [rsp+120h] [rbp-48h]

  v10 = a2;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0uLL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v51 = 0;
  v58 = 0;
  v49 = v16;
  v50 = v10;
  v52 = a3;
  v53 = *a4;
  v54 = a4[1];
  v55 = a4[2];
  v56 = *((_QWORD *)a4 + 6);
  v57 = *((_DWORD *)a4 + 14);
  v59 = a5;
  v60 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v42 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v42;
  v43 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v48 = *(_OWORD *)(v19 + 64);
  v45 = v48;
  v46 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v39,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(105LL);
  v22 = KeUserModeCallback(105LL, &v49, 104LL, &v41, v40);
  EtwTraceEndCallback(105LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v39,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v48;
  *(_QWORD *)(v28 + 80) = v46;
  if ( v22 >= 0 && v40[0] == 24 )
  {
    v29 = (__int64 *)v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v47 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(__int128 **)(v31 + 96) != a4 )
    {
      v32 = *(_QWORD *)(v41 + 16);
      if ( v32 + 60 < v32 || v32 + 60 > MmUserProbeAddress )
        v32 = MmUserProbeAddress;
      v33 = *(_OWORD *)(v32 + 16);
      v34 = *(_OWORD *)(v32 + 32);
      v35 = *(_QWORD *)(v32 + 48);
      v36 = *(_DWORD *)(v32 + 56);
      *a4 = *(_OWORD *)v32;
      a4[1] = v33;
      a4[2] = v34;
      *((_QWORD *)a4 + 6) = v35;
      *((_DWORD *)a4 + 14) = v36;
      return v30;
    }
  }
  return 0LL;
}
