/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C0050300
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

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
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
  __int128 *v30; // rcx
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm3
  char v35; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v37[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v38; // [rsp+48h] [rbp-120h] BYREF
  __int64 v39; // [rsp+58h] [rbp-110h] BYREF
  _QWORD *v40; // [rsp+60h] [rbp-108h]
  __int64 v41; // [rsp+68h] [rbp-100h]
  __int128 v42; // [rsp+70h] [rbp-F8h]
  __int64 v43; // [rsp+80h] [rbp-E8h]
  __int64 v44; // [rsp+88h] [rbp-E0h]
  __int128 v45; // [rsp+B0h] [rbp-B8h]
  __int64 v46; // [rsp+C0h] [rbp-A8h] BYREF
  int v47; // [rsp+C8h] [rbp-A0h]
  int v48; // [rsp+CCh] [rbp-9Ch]
  __int64 v49; // [rsp+D0h] [rbp-98h]
  __int128 v50; // [rsp+D8h] [rbp-90h]
  __int128 v51; // [rsp+E8h] [rbp-80h]
  __int128 v52; // [rsp+F8h] [rbp-70h]
  __int128 v53; // [rsp+108h] [rbp-60h]
  __int64 v54; // [rsp+118h] [rbp-50h]
  __int64 v55; // [rsp+120h] [rbp-48h]

  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v48 = 0;
  v46 = v14;
  v47 = a2;
  v49 = a3;
  v50 = *a4;
  v51 = a4[1];
  v52 = a4[2];
  v53 = a4[3];
  v54 = a5;
  v55 = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v39 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v45 = *(_OWORD *)(v17 + 64);
  v42 = v45;
  v43 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(104LL);
  v20 = KeUserModeCallback(104LL, &v46, 104LL, &v38, v37);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v45;
  *(_QWORD *)(v26 + 80) = v43;
  if ( v20 >= 0 && v37[0] == 24 )
  {
    v27 = (__int64 *)v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v44 = *v27;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v28;
    v29 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(__int128 **)(v29 + 96) != a4 )
    {
      v30 = *(__int128 **)(v38 + 16);
      if ( v30 + 4 < v30 || (unsigned __int64)(v30 + 4) > MmUserProbeAddress )
        v30 = (__int128 *)MmUserProbeAddress;
      v31 = v30[1];
      v32 = v30[2];
      v33 = v30[3];
      *a4 = *v30;
      a4[1] = v31;
      a4[2] = v32;
      a4[3] = v33;
      return v28;
    }
  }
  return 0LL;
}
