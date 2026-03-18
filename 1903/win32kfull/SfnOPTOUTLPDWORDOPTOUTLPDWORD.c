/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1C0152E00
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

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r14d
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
  _DWORD *v35; // rdx
  __int64 v37; // [rsp+58h] [rbp-C0h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-B8h]
  __int64 v39; // [rsp+68h] [rbp-B0h]
  __int128 v40; // [rsp+70h] [rbp-A8h]
  __int64 v41; // [rsp+80h] [rbp-98h]
  __int64 v42; // [rsp+88h] [rbp-90h] BYREF
  int v43; // [rsp+90h] [rbp-88h]
  int v44; // [rsp+94h] [rbp-84h]
  __int64 v45; // [rsp+98h] [rbp-80h]
  __int64 v46; // [rsp+A0h] [rbp-78h]
  __int64 v47; // [rsp+A8h] [rbp-70h]
  __int128 v48; // [rsp+D0h] [rbp-48h]
  char v49; // [rsp+120h] [rbp+8h] BYREF
  char v50; // [rsp+128h] [rbp+10h] BYREF
  int v51; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v52; // [rsp+138h] [rbp+20h] BYREF

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, (__int64)a4);
  v16 = ThreadWin32Thread;
  if ( a1 )
    v17 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v17 = 0LL;
  v44 = 0;
  v42 = v17;
  v43 = v10;
  v45 = a5;
  v46 = a6;
  v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v37 = *(_QWORD *)(v18 + 408);
  *(_QWORD *)(v18 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v16 + 472);
  v48 = *(_OWORD *)(v21 + 64);
  v40 = v48;
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
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    gdwInAtomicOperation,
    v19,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  EtwTraceBeginCallback(31LL);
  v24 = KeUserModeCallback(31LL, &v42, 32LL, &v52, &v51);
  EtwTraceEndCallback(31LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v50);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v49,
    v25,
    v26,
    v27);
  ThreadUnlock1(v29, v28, v30);
  v31 = *(_QWORD *)(v16 + 472);
  *(_OWORD *)(v31 + 64) = v48;
  *(_QWORD *)(v31 + 80) = v41;
  if ( v24 < 0 || v51 != 24 )
    return 0LL;
  v32 = (__int64 *)v52;
  if ( v52 + 8 < v52 || v52 + 8 > MmUserProbeAddress )
    v32 = (__int64 *)MmUserProbeAddress;
  v33 = *v32;
  v47 = *v32;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
    {
      v34 = *(_DWORD **)(v52 + 16);
      if ( (unsigned __int64)v34 >= MmUserProbeAddress )
        v34 = (_DWORD *)MmUserProbeAddress;
      *a3 = *v34;
    }
    if ( a4 )
    {
      v35 = (_DWORD *)(*(_QWORD *)(v52 + 16) + 4LL);
      if ( (unsigned __int64)v35 >= MmUserProbeAddress )
        v35 = (_DWORD *)MmUserProbeAddress;
      *a4 = *v35;
    }
  }
  return v33;
}
