/*
 * XREFs of SfnINLPDELETEITEMSTRUCT @ 0x1C02171D0
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

__int64 __fastcall SfnINLPDELETEITEMSTRUCT(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
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
  __int64 result; // rax
  __int64 v29; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD *v30; // [rsp+50h] [rbp-E8h]
  __int64 v31; // [rsp+58h] [rbp-E0h]
  __int128 v32; // [rsp+60h] [rbp-D8h]
  __int64 v33; // [rsp+70h] [rbp-C8h]
  __int64 v34; // [rsp+78h] [rbp-C0h]
  __int128 v35; // [rsp+98h] [rbp-A0h]
  __int64 v36; // [rsp+B0h] [rbp-88h] BYREF
  int v37; // [rsp+B8h] [rbp-80h]
  int v38; // [rsp+BCh] [rbp-7Ch]
  __int64 v39; // [rsp+C0h] [rbp-78h]
  __int128 v40; // [rsp+C8h] [rbp-70h]
  __int128 v41; // [rsp+D8h] [rbp-60h]
  __int64 v42; // [rsp+E8h] [rbp-50h]
  __int64 v43; // [rsp+F0h] [rbp-48h]
  char v44; // [rsp+140h] [rbp+8h] BYREF
  char v45; // [rsp+148h] [rbp+10h] BYREF
  int v46; // [rsp+150h] [rbp+18h] BYREF
  unsigned __int64 v47; // [rsp+158h] [rbp+20h] BYREF

  v8 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v38 = 0;
  v36 = v14;
  v37 = v8;
  v39 = a3;
  *((_DWORD *)a4 + 3) = 0;
  v40 = *a4;
  v41 = a4[1];
  v42 = a5;
  v43 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v29 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v29;
  v30 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v35 = *(_OWORD *)(v17 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  EtwTraceBeginCallback(11LL);
  v20 = KeUserModeCallback(11LL, &v36, 72LL, &v47, &v46);
  EtwTraceEndCallback(11LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v45);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v44,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v35;
  *(_QWORD *)(v26 + 80) = v33;
  if ( v20 < 0 || v46 != 24 )
    return 0LL;
  v27 = (__int64 *)v47;
  if ( v47 + 8 < v47 || v47 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v34 = *v27;
  return result;
}
