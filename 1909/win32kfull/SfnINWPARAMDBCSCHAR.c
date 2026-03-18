/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C015CD80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01136B0 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v8; // r14d
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
  unsigned __int64 v29; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-B8h]
  __int128 v33; // [rsp+68h] [rbp-B0h]
  __int64 v34; // [rsp+78h] [rbp-A0h]
  __int64 v35; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v36; // [rsp+88h] [rbp-90h]
  int v37; // [rsp+8Ch] [rbp-8Ch]
  __int64 v38; // [rsp+90h] [rbp-88h]
  __int64 v39; // [rsp+98h] [rbp-80h]
  __int64 v40; // [rsp+A0h] [rbp-78h]
  __int64 v41; // [rsp+A8h] [rbp-70h]
  int v42; // [rsp+B0h] [rbp-68h]
  int v43; // [rsp+B4h] [rbp-64h]
  __int64 v44; // [rsp+B8h] [rbp-60h]
  __int128 v45; // [rsp+D8h] [rbp-40h]
  char v46; // [rsp+120h] [rbp+8h] BYREF
  char v47; // [rsp+128h] [rbp+10h] BYREF
  __int64 v48; // [rsp+130h] [rbp+18h] BYREF
  int v49; // [rsp+138h] [rbp+20h] BYREF

  v48 = a3;
  v8 = a2;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0uLL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v37 = 0;
  v43 = 0;
  v35 = v14;
  v36 = v8;
  v42 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(v8, (__int64)&v48);
  v38 = v48;
  v39 = a4;
  v40 = a5;
  v41 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v30 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v30;
  v31 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v45 = *(_OWORD *)(v17 + 64);
  v33 = v45;
  v34 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v46,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  EtwTraceBeginCallback(95LL);
  v20 = KeUserModeCallback(95LL, &v35, 56LL, &v29, &v49);
  EtwTraceEndCallback(95LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v47);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v46,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v45;
  *(_QWORD *)(v26 + 80) = v34;
  if ( v20 < 0 || v49 != 24 )
    return 0LL;
  v27 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v44 = *v27;
  return result;
}
