/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C021B620
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
  _DWORD *v34; // rdx
  __int64 v36; // [rsp+58h] [rbp-D0h] BYREF
  _QWORD *v37; // [rsp+60h] [rbp-C8h]
  __int64 v38; // [rsp+68h] [rbp-C0h]
  __int128 v39; // [rsp+70h] [rbp-B8h]
  __int64 v40; // [rsp+80h] [rbp-A8h]
  __int64 v41; // [rsp+88h] [rbp-A0h] BYREF
  int v42; // [rsp+90h] [rbp-98h]
  __int64 v43; // [rsp+94h] [rbp-94h]
  int v44; // [rsp+9Ch] [rbp-8Ch]
  __int64 v45; // [rsp+A0h] [rbp-88h]
  __int64 v46; // [rsp+A8h] [rbp-80h]
  __int64 v47; // [rsp+B0h] [rbp-78h]
  __int64 v48; // [rsp+B8h] [rbp-70h]
  __int128 v49; // [rsp+E0h] [rbp-48h]
  char v50; // [rsp+130h] [rbp+8h] BYREF
  char v51; // [rsp+138h] [rbp+10h] BYREF
  int v52; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v53; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v43 = 0LL;
  v44 = 0;
  v41 = v17;
  v42 = v10;
  v45 = a4;
  v46 = a5;
  v47 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v36 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v49 = *(_OWORD *)(v21 + 64);
  v39 = v49;
  v40 = *(_QWORD *)(v21 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  EtwTraceBeginCallback(33LL);
  v24 = KeUserModeCallback(33LL, &v41, 48LL, &v53, &v52);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v51);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v50,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v49;
  *(_QWORD *)(v31 + 80) = v40;
  if ( v24 < 0 || v52 != 24 )
    return 0LL;
  v32 = (__int64 *)v53;
  if ( v53 + 8 < v53 || v53 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v48 = *v32;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v34 = *(_DWORD **)(v53 + 16);
    if ( (unsigned __int64)v34 >= MmUserProbeAddress )
      v34 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v34;
  }
  return v33;
}
