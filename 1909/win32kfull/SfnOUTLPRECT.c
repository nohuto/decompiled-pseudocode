/*
 * XREFs of SfnOUTLPRECT @ 0x1C014BA00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
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
  __int64 v36; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v37; // [rsp+50h] [rbp-E8h]
  __int64 v38; // [rsp+58h] [rbp-E0h]
  __int128 v39; // [rsp+60h] [rbp-D8h]
  __int64 v40; // [rsp+70h] [rbp-C8h]
  __int64 v41; // [rsp+78h] [rbp-C0h] BYREF
  int v42; // [rsp+80h] [rbp-B8h]
  int v43; // [rsp+84h] [rbp-B4h]
  __int64 v44; // [rsp+88h] [rbp-B0h]
  __int64 v45; // [rsp+90h] [rbp-A8h]
  __int64 v46; // [rsp+98h] [rbp-A0h]
  __int64 v47; // [rsp+A0h] [rbp-98h]
  __int128 v48; // [rsp+C8h] [rbp-70h]
  char v49; // [rsp+140h] [rbp+8h] BYREF
  char v50; // [rsp+148h] [rbp+10h] BYREF
  int v51; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v52; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v43 = 0;
  v41 = v16;
  v42 = v10;
  v44 = a3;
  v45 = a5;
  v46 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v36 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v20 = *(_OWORD *)(v19 + 64);
  v39 = v20;
  v21 = *(_QWORD *)(v19 + 80);
  v40 = v21;
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
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(34LL);
  v24 = KeUserModeCallback(34LL, &v41, 40LL, &v52, &v51);
  EtwTraceEndCallback(34LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v30 + 64) = v20;
  *(_QWORD *)(v30 + 80) = v21;
  if ( v24 >= 0 && v51 == 24 )
  {
    v31 = (__int64 *)v52;
    if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v32 = *v31;
    v47 = *v31;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v32;
    v33 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v33 || (*(_DWORD *)(v33 + 84) & 1) == 0 || *(_OWORD **)(v33 + 96) != a4 )
    {
      v34 = *(__int128 **)(v52 + 16);
      if ( v34 + 1 < v34 || (unsigned __int64)(v34 + 1) > MmUserProbeAddress )
        v34 = (__int128 *)MmUserProbeAddress;
      v48 = *v34;
      *a4 = v48;
      return v32;
    }
  }
  return 0LL;
}
