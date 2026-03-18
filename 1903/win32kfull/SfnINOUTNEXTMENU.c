/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1C0219EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnINOUTNEXTMENU(
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
  __int64 v36; // xmm0_8
  __int64 v38; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v39; // [rsp+50h] [rbp-E8h]
  __int64 v40; // [rsp+58h] [rbp-E0h]
  __int128 v41; // [rsp+60h] [rbp-D8h]
  __int64 v42; // [rsp+70h] [rbp-C8h]
  __int64 v43; // [rsp+80h] [rbp-B8h] BYREF
  int v44; // [rsp+88h] [rbp-B0h]
  int v45; // [rsp+8Ch] [rbp-ACh]
  __int64 v46; // [rsp+90h] [rbp-A8h]
  __int128 v47; // [rsp+98h] [rbp-A0h]
  __int64 v48; // [rsp+A8h] [rbp-90h]
  __int64 v49; // [rsp+B0h] [rbp-88h]
  __int64 v50; // [rsp+B8h] [rbp-80h]
  __int64 v51; // [rsp+C0h] [rbp-78h]
  __int128 v52; // [rsp+E8h] [rbp-50h]
  char v53; // [rsp+140h] [rbp+8h] BYREF
  char v54; // [rsp+148h] [rbp+10h] BYREF
  int v55; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v56; // [rsp+158h] [rbp+20h] BYREF

  v10 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v45 = 0;
  v43 = v17;
  v44 = v10;
  v46 = a3;
  v49 = a5;
  v50 = a6;
  v47 = *(_OWORD *)a4;
  v48 = *(_QWORD *)(a4 + 16);
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v38 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v52 = *(_OWORD *)(v21 + 64);
  v41 = v52;
  v42 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  EtwTraceBeginCallback(30LL);
  v24 = KeUserModeCallback(30LL, &v43, 64LL, &v56, &v55);
  EtwTraceEndCallback(30LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v52;
  *(_QWORD *)(v31 + 80) = v42;
  if ( v24 >= 0 && v55 == 24 )
  {
    v32 = (__int64 *)v56;
    if ( v56 + 8 < v56 || v56 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v51 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(_QWORD *)(v34 + 96) != a4 )
    {
      v35 = *(_QWORD *)(v56 + 16);
      if ( v35 + 24 < v35 || v35 + 24 > MmUserProbeAddress )
        v35 = MmUserProbeAddress;
      v36 = *(_QWORD *)(v35 + 16);
      *(_OWORD *)a4 = *(_OWORD *)v35;
      *(_QWORD *)(a4 + 16) = v36;
      return v33;
    }
  }
  return 0LL;
}
