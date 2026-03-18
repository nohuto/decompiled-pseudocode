/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C021ACF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnKEYBOARDCORRECTIONCALLOUT(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 v15; // r14
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 *v30; // rcx
  __int64 result; // rax
  char v32; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-237h] BYREF
  _DWORD v34[7]; // [rsp+34h] [rbp-234h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-218h] BYREF
  __int64 v36; // [rsp+58h] [rbp-210h] BYREF
  _QWORD *v37; // [rsp+60h] [rbp-208h]
  __int64 v38; // [rsp+68h] [rbp-200h]
  __int128 v39; // [rsp+70h] [rbp-1F8h]
  __int64 v40; // [rsp+80h] [rbp-1E8h]
  __int64 v41; // [rsp+88h] [rbp-1E0h]
  __int128 v42; // [rsp+A8h] [rbp-1C0h]
  __int64 v43; // [rsp+C0h] [rbp-1A8h] BYREF
  int v44; // [rsp+C8h] [rbp-1A0h]
  int v45; // [rsp+CCh] [rbp-19Ch]
  __int64 v46; // [rsp+D0h] [rbp-198h]
  char v47; // [rsp+D8h] [rbp-190h] BYREF
  __int64 v48; // [rsp+220h] [rbp-48h]
  __int64 v49; // [rsp+228h] [rbp-40h]

  v10 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  if ( ThreadWin32Thread == *(_QWORD *)(a8 + 32) )
    return 0LL;
  v45 = 0;
  v43 = v15;
  v44 = v10 & 0x1FFFF;
  v46 = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v16 = &v47;
  v17 = 2LL;
  do
  {
    *(_OWORD *)v16 = *(_OWORD *)a4;
    *((_OWORD *)v16 + 1) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v16 + 2) = *(_OWORD *)(a4 + 32);
    *((_OWORD *)v16 + 3) = *(_OWORD *)(a4 + 48);
    *((_OWORD *)v16 + 4) = *(_OWORD *)(a4 + 64);
    *((_OWORD *)v16 + 5) = *(_OWORD *)(a4 + 80);
    *((_OWORD *)v16 + 6) = *(_OWORD *)(a4 + 96);
    v16 += 128;
    *((_OWORD *)v16 - 1) = *(_OWORD *)(a4 + 112);
    a4 += 128LL;
    --v17;
  }
  while ( v17 );
  *(_OWORD *)v16 = *(_OWORD *)a4;
  *((_OWORD *)v16 + 1) = *(_OWORD *)(a4 + 16);
  *((_OWORD *)v16 + 2) = *(_OWORD *)(a4 + 32);
  *((_OWORD *)v16 + 3) = *(_OWORD *)(a4 + 48);
  *((_QWORD *)v16 + 8) = *(_QWORD *)(a4 + 64);
  v48 = a5;
  v49 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v13);
  v36 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  v20 = *(_QWORD *)(v14 + 472);
  v42 = *(_OWORD *)(v20 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(v20 + 72) = v15;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v22;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation,
    v19);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(52LL);
  v23 = KeUserModeCallback(52LL, &v43, 368LL, &v35, v34);
  EtwTraceEndCallback(52LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v42;
  *(_QWORD *)(v29 + 80) = v40;
  if ( v23 < 0 || v34[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v41 = *v30;
  return result;
}
