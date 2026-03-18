/*
 * XREFs of SfnINWPARAMDBCSCHAR @ 0x1C015BDD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01396B0 (RtlWCSMessageWParamCharToMB.c)
 */

__int64 __fastcall SfnINWPARAMDBCSCHAR(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  unsigned int v8; // r14d
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
  unsigned __int64 v32; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v34; // [rsp+58h] [rbp-C0h]
  __int64 v35; // [rsp+60h] [rbp-B8h]
  __int128 v36; // [rsp+68h] [rbp-B0h]
  __int64 v37; // [rsp+78h] [rbp-A0h]
  __int64 v38; // [rsp+80h] [rbp-98h] BYREF
  unsigned int v39; // [rsp+88h] [rbp-90h]
  int v40; // [rsp+8Ch] [rbp-8Ch]
  __int64 v41; // [rsp+90h] [rbp-88h]
  __int64 v42; // [rsp+98h] [rbp-80h]
  __int64 v43; // [rsp+A0h] [rbp-78h]
  __int64 v44; // [rsp+A8h] [rbp-70h]
  int v45; // [rsp+B0h] [rbp-68h]
  int v46; // [rsp+B4h] [rbp-64h]
  __int64 v47; // [rsp+B8h] [rbp-60h]
  __int128 v48; // [rsp+D8h] [rbp-40h]
  char v49; // [rsp+120h] [rbp+8h] BYREF
  char v50; // [rsp+128h] [rbp+10h] BYREF
  __int64 v51; // [rsp+130h] [rbp+18h] BYREF
  int v52; // [rsp+138h] [rbp+20h] BYREF

  v51 = a3;
  v8 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v40 = 0;
  v46 = 0;
  v38 = v15;
  v39 = v8;
  v45 = a7 & 1;
  if ( (a7 & 1) != 0 )
    RtlWCSMessageWParamCharToMB(v8, (__int64)&v51);
  v41 = v51;
  v42 = a4;
  v43 = a5;
  v44 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v33 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 472);
  v48 = *(_OWORD *)(v19 + 64);
  v36 = v48;
  v37 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(95LL);
  v22 = KeUserModeCallback(95LL, &v38, 56LL, &v32, &v52);
  EtwTraceEndCallback(95LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v48;
  *(_QWORD *)(v29 + 80) = v37;
  if ( v22 < 0 || v52 != 24 )
    return 0LL;
  v30 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v47 = *v30;
  return result;
}
