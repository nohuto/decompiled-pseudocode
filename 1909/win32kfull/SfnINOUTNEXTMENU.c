/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C0219970
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

__int64 __fastcall SfnINOUTNEXTMENU(
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
  __int64 v35; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v36; // [rsp+50h] [rbp-E8h]
  __int64 v37; // [rsp+58h] [rbp-E0h]
  __int128 v38; // [rsp+60h] [rbp-D8h]
  __int64 v39; // [rsp+70h] [rbp-C8h]
  __int64 v40; // [rsp+80h] [rbp-B8h] BYREF
  int v41; // [rsp+88h] [rbp-B0h]
  int v42; // [rsp+8Ch] [rbp-ACh]
  __int64 v43; // [rsp+90h] [rbp-A8h]
  __int128 v44; // [rsp+98h] [rbp-A0h]
  __int64 v45; // [rsp+A8h] [rbp-90h]
  __int64 v46; // [rsp+B0h] [rbp-88h]
  __int64 v47; // [rsp+B8h] [rbp-80h]
  __int64 v48; // [rsp+C0h] [rbp-78h]
  __int128 v49; // [rsp+E8h] [rbp-50h]
  char v50; // [rsp+140h] [rbp+8h] BYREF
  char v51; // [rsp+148h] [rbp+10h] BYREF
  int v52; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v53; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0uLL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v42 = 0;
  v40 = v16;
  v41 = v10;
  v43 = a3;
  v46 = a5;
  v47 = a6;
  v44 = *a4;
  v45 = *((_QWORD *)a4 + 2);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v35 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v35;
  v36 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v49 = *(_OWORD *)(v19 + 64);
  v38 = v49;
  v39 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(30LL);
  v22 = KeUserModeCallback(30LL, &v40, 64LL, &v53, &v52);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v49;
  *(_QWORD *)(v28 + 80) = v39;
  if ( v22 >= 0 && v52 == 24 )
  {
    v29 = (__int64 *)v53;
    if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v48 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(__int128 **)(v31 + 96) != a4 )
    {
      v32 = *(_QWORD *)(v53 + 16);
      if ( v32 + 24 < v32 || v32 + 24 > MmUserProbeAddress )
        v32 = MmUserProbeAddress;
      v33 = *(_QWORD *)(v32 + 16);
      *a4 = *(_OWORD *)v32;
      *((_QWORD *)a4 + 2) = v33;
      return v30;
    }
  }
  return 0LL;
}
