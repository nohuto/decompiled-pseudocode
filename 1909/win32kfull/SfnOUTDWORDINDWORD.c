/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C021B0E0
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

__int64 __fastcall SfnOUTDWORDINDWORD(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
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
  _DWORD *v31; // rdx
  __int64 v33; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD *v34; // [rsp+60h] [rbp-C8h]
  __int64 v35; // [rsp+68h] [rbp-C0h]
  __int128 v36; // [rsp+70h] [rbp-B8h]
  __int64 v37; // [rsp+80h] [rbp-A8h]
  __int64 v38; // [rsp+88h] [rbp-A0h] BYREF
  int v39; // [rsp+90h] [rbp-98h]
  __int64 v40; // [rsp+94h] [rbp-94h]
  int v41; // [rsp+9Ch] [rbp-8Ch]
  __int64 v42; // [rsp+A0h] [rbp-88h]
  __int64 v43; // [rsp+A8h] [rbp-80h]
  __int64 v44; // [rsp+B0h] [rbp-78h]
  __int64 v45; // [rsp+B8h] [rbp-70h]
  __int128 v46; // [rsp+E0h] [rbp-48h]
  char v47; // [rsp+130h] [rbp+8h] BYREF
  char v48; // [rsp+138h] [rbp+10h] BYREF
  int v49; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v50; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
  v15 = ThreadWin32Thread;
  if ( a1 )
    v16 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v16 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v38 = v16;
  v39 = v10;
  v42 = a4;
  v43 = a5;
  v44 = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14);
  v33 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    HMLockObject(a1);
  v19 = *(_QWORD *)(v15 + 472);
  v46 = *(_OWORD *)(v19 + 64);
  v36 = v46;
  v37 = *(_QWORD *)(v19 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    gdwInAtomicOperation,
    v18);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  EtwTraceBeginCallback(33LL);
  v22 = KeUserModeCallback(33LL, &v38, 48LL, &v50, &v49);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v48);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v47,
    v23,
    v24);
  ThreadUnlock1(v26, v25, v27);
  v28 = *(_QWORD *)(v15 + 472);
  *(_OWORD *)(v28 + 64) = v46;
  *(_QWORD *)(v28 + 80) = v37;
  if ( v22 < 0 || v49 != 24 )
    return 0LL;
  v29 = (__int64 *)v50;
  if ( v50 + 8 < v50 || v50 + 8 > MmUserProbeAddress )
    v29 = (__int64 *)MmUserProbeAddress;
  v30 = *v29;
  v45 = *v29;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v31 = *(_DWORD **)(v50 + 16);
    if ( (unsigned __int64)v31 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v31;
  }
  return v30;
}
