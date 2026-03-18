/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C011D930
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
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
  char v32; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v34[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v35; // [rsp+50h] [rbp-108h] BYREF
  __int64 v36; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v37; // [rsp+60h] [rbp-F8h]
  __int64 v38; // [rsp+68h] [rbp-F0h]
  __int128 v39; // [rsp+70h] [rbp-E8h]
  __int64 v40; // [rsp+80h] [rbp-D8h]
  __int64 v41; // [rsp+88h] [rbp-D0h]
  __int128 v42; // [rsp+A8h] [rbp-B0h]
  __int64 v43; // [rsp+C0h] [rbp-98h] BYREF
  int v44; // [rsp+C8h] [rbp-90h]
  int v45; // [rsp+CCh] [rbp-8Ch]
  __int64 v46; // [rsp+D0h] [rbp-88h]
  __int128 v47; // [rsp+D8h] [rbp-80h]
  __int128 v48; // [rsp+E8h] [rbp-70h]
  __int128 v49; // [rsp+F8h] [rbp-60h]
  __int64 v50; // [rsp+108h] [rbp-50h]
  __int64 v51; // [rsp+110h] [rbp-48h]
  __int64 v52; // [rsp+118h] [rbp-40h]

  v8 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  v45 = 0;
  v43 = v15;
  v44 = v8 & 0x1FFFF;
  v46 = a3;
  *(_DWORD *)(a4 + 12) = 0;
  v47 = *(_OWORD *)a4;
  v48 = *(_OWORD *)(a4 + 16);
  v49 = *(_OWORD *)(a4 + 32);
  v50 = *(_QWORD *)(a4 + 48);
  v51 = a5;
  v52 = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
  v36 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v14 + 472);
  v42 = *(_OWORD *)(v19 + 64);
  v39 = v42;
  v40 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation,
    v17,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(54LL);
  v22 = KeUserModeCallback(54LL, &v43, 96LL, &v35, v34);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    v23,
    v24,
    v25);
  ThreadUnlock1(v27, v26, v28);
  v29 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v29 + 64) = v42;
  *(_QWORD *)(v29 + 80) = v40;
  if ( v22 < 0 || v34[0] != 24 )
    return 0LL;
  v30 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v30 = (__int64 *)MmUserProbeAddress;
  result = *v30;
  v41 = *v30;
  return result;
}
