/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C0219160
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
  __int64 *v32; // rcx
  __int64 v34; // [rsp+48h] [rbp-E0h] BYREF
  _QWORD *v35; // [rsp+50h] [rbp-D8h]
  __int64 v36; // [rsp+58h] [rbp-D0h]
  __int128 v37; // [rsp+60h] [rbp-C8h]
  __int64 v38; // [rsp+70h] [rbp-B8h]
  __int64 v39; // [rsp+78h] [rbp-B0h] BYREF
  int v40; // [rsp+80h] [rbp-A8h]
  int v41; // [rsp+84h] [rbp-A4h]
  __int64 v42; // [rsp+88h] [rbp-A0h]
  __int64 v43; // [rsp+90h] [rbp-98h]
  __int64 v44; // [rsp+98h] [rbp-90h]
  __int64 v45; // [rsp+A0h] [rbp-88h]
  __int64 v46; // [rsp+A8h] [rbp-80h]
  __int64 v47; // [rsp+B0h] [rbp-78h]
  __int128 v48; // [rsp+D8h] [rbp-50h]
  char v49; // [rsp+130h] [rbp+8h] BYREF
  char v50; // [rsp+138h] [rbp+10h] BYREF
  int v51; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v52; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v41 = 0;
  v39 = v16;
  v40 = v10;
  v42 = a3;
  v43 = *a4;
  v44 = a5;
  v45 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v34 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v34;
  v35 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v48 = *(_OWORD *)(v19 + 64);
  v37 = v48;
  v38 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(126LL);
  v22 = KeUserModeCallback(126LL, &v39, 48LL, &v52, &v51);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v48;
  *(_QWORD *)(v28 + 80) = v38;
  if ( v22 >= 0 && v51 == 24 )
  {
    v29 = (__int64 *)v52;
    if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
      v29 = (__int64 *)MmUserProbeAddress;
    v30 = *v29;
    v46 = *v29;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v30;
    v31 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v31 || (*(_DWORD *)(v31 + 84) & 1) == 0 || *(__int64 **)(v31 + 96) != a4 )
    {
      v32 = *(__int64 **)(v52 + 16);
      if ( v32 + 1 < v32 || (unsigned __int64)(v32 + 1) > MmUserProbeAddress )
        v32 = (__int64 *)MmUserProbeAddress;
      v47 = *v32;
      *a4 = v47;
      return v30;
    }
  }
  return 0LL;
}
