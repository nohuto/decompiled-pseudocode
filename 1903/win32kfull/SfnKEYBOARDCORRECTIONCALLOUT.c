/*
 * XREFs of SfnKEYBOARDCORRECTIONCALLOUT @ 0x1C021B230
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v8; // rdi
  int v10; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // r14
  char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 result; // rax
  char v35; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v36[3]; // [rsp+31h] [rbp-237h] BYREF
  _DWORD v37[7]; // [rsp+34h] [rbp-234h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-218h] BYREF
  __int64 v39; // [rsp+58h] [rbp-210h] BYREF
  _QWORD *v40; // [rsp+60h] [rbp-208h]
  __int64 v41; // [rsp+68h] [rbp-200h]
  __int128 v42; // [rsp+70h] [rbp-1F8h]
  __int64 v43; // [rsp+80h] [rbp-1E8h]
  __int64 v44; // [rsp+88h] [rbp-1E0h]
  __int128 v45; // [rsp+A8h] [rbp-1C0h]
  __int64 v46; // [rsp+C0h] [rbp-1A8h] BYREF
  int v47; // [rsp+C8h] [rbp-1A0h]
  int v48; // [rsp+CCh] [rbp-19Ch]
  __int64 v49; // [rsp+D0h] [rbp-198h]
  char v50; // [rsp+D8h] [rbp-190h] BYREF
  __int64 v51; // [rsp+220h] [rbp-48h]
  __int64 v52; // [rsp+228h] [rbp-40h]

  v8 = a4;
  v10 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  if ( ThreadWin32Thread == *(_QWORD *)(a8 + 32) )
    return 0LL;
  v48 = 0;
  v46 = v16;
  v47 = v10 & 0x1FFFF;
  v49 = a3;
  *(_DWORD *)(v8 + 12) = 0;
  v17 = &v50;
  v18 = 2LL;
  do
  {
    *(_OWORD *)v17 = *(_OWORD *)v8;
    *((_OWORD *)v17 + 1) = *(_OWORD *)(v8 + 16);
    *((_OWORD *)v17 + 2) = *(_OWORD *)(v8 + 32);
    *((_OWORD *)v17 + 3) = *(_OWORD *)(v8 + 48);
    *((_OWORD *)v17 + 4) = *(_OWORD *)(v8 + 64);
    *((_OWORD *)v17 + 5) = *(_OWORD *)(v8 + 80);
    *((_OWORD *)v17 + 6) = *(_OWORD *)(v8 + 96);
    v17 += 128;
    *((_OWORD *)v17 - 1) = *(_OWORD *)(v8 + 112);
    v8 += 128LL;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v17 = *(_OWORD *)v8;
  *((_OWORD *)v17 + 1) = *(_OWORD *)(v8 + 16);
  *((_OWORD *)v17 + 2) = *(_OWORD *)(v8 + 32);
  *((_OWORD *)v17 + 3) = *(_OWORD *)(v8 + 48);
  *((_QWORD *)v17 + 8) = *(_QWORD *)(v8 + 64);
  v51 = a5;
  v52 = a6;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 128LL, v13, v14);
  v39 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    HMLockObject(a1);
  v22 = *(_QWORD *)(v15 + 472);
  v45 = *(_OWORD *)(v22 + 64);
  v42 = v45;
  v43 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(v22 + 72) = v16;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224LL);
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v15 + 472) + 80LL) = v24;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    gdwInAtomicOperation,
    v20,
    v21);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(52LL);
  v25 = KeUserModeCallback(52LL, &v46, 368LL, &v38, v37);
  EtwTraceEndCallback(52LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v36,
    v26,
    v27,
    v28);
  ThreadUnlock1(v30, v29, v31);
  v32 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v32 + 64) = v45;
  *(_QWORD *)(v32 + 80) = v43;
  if ( v25 < 0 || v37[0] != 24 )
    return 0LL;
  v33 = (__int64 *)v38;
  if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
    v33 = (__int64 *)MmUserProbeAddress;
  result = *v33;
  v44 = *v33;
  return result;
}
