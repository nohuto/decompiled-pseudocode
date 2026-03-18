/*
 * XREFs of SfnINOUTDRAG @ 0x1C02192A0
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

__int64 __fastcall SfnINOUTDRAG(
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
  _OWORD *v35; // rcx
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v39; // [rsp+48h] [rbp-100h] BYREF
  _QWORD *v40; // [rsp+50h] [rbp-F8h]
  __int64 v41; // [rsp+58h] [rbp-F0h]
  __int128 v42; // [rsp+60h] [rbp-E8h]
  __int64 v43; // [rsp+70h] [rbp-D8h]
  __int64 v44; // [rsp+78h] [rbp-D0h]
  __int128 v45; // [rsp+A0h] [rbp-A8h]
  __int64 v46; // [rsp+B0h] [rbp-98h] BYREF
  int v47; // [rsp+B8h] [rbp-90h]
  int v48; // [rsp+BCh] [rbp-8Ch]
  __int64 v49; // [rsp+C0h] [rbp-88h]
  __int64 v50; // [rsp+C8h] [rbp-80h]
  __int64 v51; // [rsp+D0h] [rbp-78h]
  __int128 v52; // [rsp+D8h] [rbp-70h]
  __int128 v53; // [rsp+E8h] [rbp-60h]
  __int128 v54; // [rsp+F8h] [rbp-50h]
  char v55; // [rsp+150h] [rbp+8h] BYREF
  char v56; // [rsp+158h] [rbp+10h] BYREF
  int v57; // [rsp+160h] [rbp+18h] BYREF
  unsigned __int64 v58; // [rsp+168h] [rbp+20h] BYREF

  v10 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v48 = 0;
  v46 = v17;
  v47 = v10;
  v49 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_DWORD *)(a4 + 44) = 0;
  v52 = *(_OWORD *)a4;
  v53 = *(_OWORD *)(a4 + 16);
  v54 = *(_OWORD *)(a4 + 32);
  v50 = a5;
  v51 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v39 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v45 = *(_OWORD *)(v21 + 64);
  v42 = v45;
  v43 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v55,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v56);
  EtwTraceBeginCallback(5LL);
  v24 = KeUserModeCallback(5LL, &v46, 88LL, &v58, &v57);
  EtwTraceEndCallback(5LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v56);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v55,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v45;
  *(_QWORD *)(v31 + 80) = v43;
  if ( v24 >= 0 && v57 == 24 )
  {
    v32 = (__int64 *)v58;
    if ( v58 + 8 < v58 || v58 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v44 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(_QWORD *)(v34 + 96) != a4 )
    {
      v35 = *(_OWORD **)(v58 + 16);
      if ( v35 + 3 < v35 || (unsigned __int64)(v35 + 3) > MmUserProbeAddress )
        v35 = (_OWORD *)MmUserProbeAddress;
      v36 = v35[1];
      v37 = v35[2];
      *(_OWORD *)a4 = *v35;
      *(_OWORD *)(a4 + 16) = v36;
      *(_OWORD *)(a4 + 32) = v37;
      return v33;
    }
  }
  return 0LL;
}
