/*
 * XREFs of SfnINLPDELETEITEMSTRUCT @ 0x1C0217710
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

__int64 __fastcall SfnINLPDELETEITEMSTRUCT(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 result; // rax
  __int64 v32; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v33; // [rsp+50h] [rbp-E8h]
  __int64 v34; // [rsp+58h] [rbp-E0h]
  __int128 v35; // [rsp+60h] [rbp-D8h]
  __int64 v36; // [rsp+70h] [rbp-C8h]
  __int64 v37; // [rsp+78h] [rbp-C0h]
  __int128 v38; // [rsp+98h] [rbp-A0h]
  __int64 v39; // [rsp+B0h] [rbp-88h] BYREF
  int v40; // [rsp+B8h] [rbp-80h]
  int v41; // [rsp+BCh] [rbp-7Ch]
  __int64 v42; // [rsp+C0h] [rbp-78h]
  __int128 v43; // [rsp+C8h] [rbp-70h]
  __int128 v44; // [rsp+D8h] [rbp-60h]
  __int64 v45; // [rsp+E8h] [rbp-50h]
  __int64 v46; // [rsp+F0h] [rbp-48h]
  char v47; // [rsp+140h] [rbp+8h] BYREF
  char v48; // [rsp+148h] [rbp+10h] BYREF
  int v49; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+158h] [rbp+20h] BYREF

  v8 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0uLL;
  v36 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v41 = 0;
  v39 = v15;
  v40 = v8;
  v42 = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v43 = *(_OWORD *)a4;
  v44 = *(_OWORD *)(a4 + 16);
  v45 = a5;
  v46 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v32 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 472);
  v38 = *(_OWORD *)(v19 + 64);
  v35 = v38;
  v36 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(v19 + 72) = v15;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(11LL);
  v22 = KeUserModeCallback(11LL, &v39, 72LL, &v50, &v49);
  EtwTraceEndCallback(11LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v38;
  *(_QWORD *)(v29 + 80) = v36;
  if ( v22 < 0 || v49 != 24 )
    return 0LL;
  v30 = (__int64 *)v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v37 = *v30;
  return result;
}
