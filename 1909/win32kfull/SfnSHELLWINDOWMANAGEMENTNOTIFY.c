/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00F73C0
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
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
  char v29; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v31[7]; // [rsp+34h] [rbp-124h] BYREF
  unsigned __int64 v32; // [rsp+50h] [rbp-108h] BYREF
  __int64 v33; // [rsp+58h] [rbp-100h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-F8h]
  __int64 v35; // [rsp+68h] [rbp-F0h]
  __int128 v36; // [rsp+70h] [rbp-E8h]
  __int64 v37; // [rsp+80h] [rbp-D8h]
  __int64 v38; // [rsp+88h] [rbp-D0h]
  __int128 v39; // [rsp+A8h] [rbp-B0h]
  __int64 v40; // [rsp+C0h] [rbp-98h] BYREF
  int v41; // [rsp+C8h] [rbp-90h]
  int v42; // [rsp+CCh] [rbp-8Ch]
  __int64 v43; // [rsp+D0h] [rbp-88h]
  __int128 v44; // [rsp+D8h] [rbp-80h]
  __int128 v45; // [rsp+E8h] [rbp-70h]
  __int128 v46; // [rsp+F8h] [rbp-60h]
  __int64 v47; // [rsp+108h] [rbp-50h]
  __int64 v48; // [rsp+110h] [rbp-48h]
  __int64 v49; // [rsp+118h] [rbp-40h]

  v8 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v42 = 0;
  v40 = v14;
  v41 = v8 & 0x1FFFF;
  v43 = a3;
  *((_DWORD *)a4 + 3) = 0;
  v44 = *a4;
  v45 = a4[1];
  v46 = a4[2];
  v47 = *((_QWORD *)a4 + 6);
  v48 = a5;
  v49 = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v33 = *(_QWORD *)(v15 + 408);
  *(_QWORD *)(v15 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    HMLockObject(a1);
  v17 = *(_QWORD *)(v13 + 472);
  v39 = *(_OWORD *)(v17 + 64);
  v36 = v39;
  v37 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation,
    v16);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(54LL);
  v20 = KeUserModeCallback(54LL, &v40, 96LL, &v32, v31);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    v21,
    v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v39;
  *(_QWORD *)(v26 + 80) = v37;
  if ( v20 < 0 || v31[0] != 24 )
    return 0LL;
  v27 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  result = *v27;
  v38 = *v27;
  return result;
}
