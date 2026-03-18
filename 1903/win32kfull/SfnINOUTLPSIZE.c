/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C02196A0
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

__int64 __fastcall SfnINOUTLPSIZE(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
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
  __int64 *v35; // rcx
  __int64 v37; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-D8h]
  __int64 v39; // [rsp+58h] [rbp-D0h]
  __int128 v40; // [rsp+60h] [rbp-C8h]
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int64 v42; // [rsp+78h] [rbp-B0h] BYREF
  int v43; // [rsp+80h] [rbp-A8h]
  int v44; // [rsp+84h] [rbp-A4h]
  __int64 v45; // [rsp+88h] [rbp-A0h]
  __int64 v46; // [rsp+90h] [rbp-98h]
  __int64 v47; // [rsp+98h] [rbp-90h]
  __int64 v48; // [rsp+A0h] [rbp-88h]
  __int64 v49; // [rsp+A8h] [rbp-80h]
  __int64 v50; // [rsp+B0h] [rbp-78h]
  __int128 v51; // [rsp+D8h] [rbp-50h]
  char v52; // [rsp+130h] [rbp+8h] BYREF
  char v53; // [rsp+138h] [rbp+10h] BYREF
  int v54; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v55; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v44 = 0;
  v42 = v17;
  v43 = v10;
  v45 = a3;
  v46 = *a4;
  v47 = a5;
  v48 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v37 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v51 = *(_OWORD *)(v21 + 64);
  v40 = v51;
  v41 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  EtwTraceBeginCallback(126LL);
  v24 = KeUserModeCallback(126LL, &v42, 48LL, &v55, &v54);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v53);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v52,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v51;
  *(_QWORD *)(v31 + 80) = v41;
  if ( v24 >= 0 && v54 == 24 )
  {
    v32 = (__int64 *)v55;
    if ( v55 + 8 < v55 || v55 + 8 > MmUserProbeAddress )
      v32 = (__int64 *)MmUserProbeAddress;
    v33 = *v32;
    v49 = *v32;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v33;
    v34 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v34 || (*(_DWORD *)(v34 + 84) & 1) == 0 || *(__int64 **)(v34 + 96) != a4 )
    {
      v35 = *(__int64 **)(v55 + 16);
      if ( v35 + 1 < v35 || (unsigned __int64)(v35 + 1) > MmUserProbeAddress )
        v35 = (__int64 *)MmUserProbeAddress;
      v50 = *v35;
      *a4 = v50;
      return v33;
    }
  }
  return 0LL;
}
