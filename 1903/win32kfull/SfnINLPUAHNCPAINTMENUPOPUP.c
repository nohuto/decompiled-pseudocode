/*
 * XREFs of SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C0218EE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     _ServerFixupMenuDC @ 0x1C010C914 (_ServerFixupMenuDC.c)
 */

__int64 __fastcall SfnINLPUAHNCPAINTMENUPOPUP(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v9; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rbx
  unsigned __int64 v37; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-D8h] BYREF
  _QWORD *v39; // [rsp+58h] [rbp-D0h]
  __int64 v40; // [rsp+60h] [rbp-C8h]
  __int128 v41; // [rsp+68h] [rbp-C0h]
  __int64 v42; // [rsp+78h] [rbp-B0h]
  __int64 v43; // [rsp+80h] [rbp-A8h] BYREF
  int v44; // [rsp+88h] [rbp-A0h]
  int v45; // [rsp+8Ch] [rbp-9Ch]
  __int64 v46; // [rsp+90h] [rbp-98h]
  __int128 v47; // [rsp+98h] [rbp-90h]
  __int64 v48; // [rsp+A8h] [rbp-80h]
  __int64 v49; // [rsp+B0h] [rbp-78h]
  __int64 v50; // [rsp+B8h] [rbp-70h]
  __int64 v51; // [rsp+C0h] [rbp-68h]
  __int128 v52; // [rsp+E0h] [rbp-48h]
  char v53; // [rsp+130h] [rbp+8h] BYREF
  char v54; // [rsp+138h] [rbp+10h] BYREF
  __int64 v55; // [rsp+140h] [rbp+18h]
  int v56; // [rsp+148h] [rbp+20h] BYREF

  v55 = a3;
  v9 = a2;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  v45 = 0;
  v14 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 8), *(_QWORD *)a4, 0, 0);
  v19 = v15;
  if ( v15 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v43 = v13;
  v44 = v9 & 0x1FFFF;
  v46 = v55;
  *(_DWORD *)(a4 + 20) = 0;
  v47 = *(_OWORD *)a4;
  v48 = *(_QWORD *)(a4 + 16);
  v49 = a5;
  v50 = a6;
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
  v38 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v23 = *(_QWORD *)(v12 + 472);
  v52 = *(_OWORD *)(v23 + 64);
  v41 = v52;
  v42 = *(_QWORD *)(v23 + 80);
  *(_QWORD *)(v23 + 72) = v13;
  if ( a1 )
    v24 = *a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v24;
  if ( a1 )
    v25 = *(_QWORD *)(a1[5] + 224LL);
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v25;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    gdwInAtomicOperation,
    v21,
    v22);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  EtwTraceBeginCallback(110LL);
  v26 = KeUserModeCallback(110LL, &v43, 64LL, &v37, &v56);
  EtwTraceEndCallback(110LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v54);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v53,
    v27,
    v28,
    v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v33 + 64) = v52;
  *(_QWORD *)(v33 + 80) = v42;
  if ( v26 < 0 || v56 != 24 )
    return 0LL;
  v34 = (__int64 *)v37;
  if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
    v34 = (__int64 *)MmUserProbeAddress;
  v35 = *v34;
  v51 = *v34;
  if ( v19 )
  {
    _ReleaseDC(v19);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v14;
  }
  return v35;
}
