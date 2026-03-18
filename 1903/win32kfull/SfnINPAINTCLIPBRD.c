/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C021A2A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     _WindowFromDC @ 0x1C010992C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 *v34; // rcx
  char v36; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v37[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v38[5]; // [rsp+34h] [rbp-134h] BYREF
  __int64 v39; // [rsp+48h] [rbp-120h]
  unsigned __int64 v40; // [rsp+58h] [rbp-110h] BYREF
  __int64 v41; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v42; // [rsp+68h] [rbp-100h]
  __int64 v43; // [rsp+70h] [rbp-F8h]
  __int128 v44; // [rsp+78h] [rbp-F0h]
  __int64 v45; // [rsp+88h] [rbp-E0h]
  __int128 v46; // [rsp+A8h] [rbp-C0h]
  __int64 v47; // [rsp+C0h] [rbp-A8h] BYREF
  int v48; // [rsp+C8h] [rbp-A0h]
  int v49; // [rsp+CCh] [rbp-9Ch]
  __int64 v50; // [rsp+D0h] [rbp-98h]
  __int128 v51; // [rsp+D8h] [rbp-90h]
  __int128 v52; // [rsp+E8h] [rbp-80h]
  __int128 v53; // [rsp+F8h] [rbp-70h]
  __int128 v54; // [rsp+108h] [rbp-60h]
  __int64 v55; // [rsp+118h] [rbp-50h]
  __int64 v56; // [rsp+120h] [rbp-48h]
  __int64 v57; // [rsp+128h] [rbp-40h]

  v8 = a2;
  v39 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0uLL;
  v45 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v49 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v39;
  v47 = v14;
  v48 = v8;
  v50 = a3;
  *(_DWORD *)(a4 + 68) = 0;
  v51 = *(_OWORD *)a4;
  v52 = *(_OWORD *)(a4 + 16);
  v53 = *(_OWORD *)(a4 + 32);
  v54 = *(_OWORD *)(a4 + 48);
  v55 = *(_QWORD *)(a4 + 64);
  v56 = a5;
  v57 = a6;
  v16 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v51 = _GetDC(v16);
  v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v41 = *(_QWORD *)(v20 + 408);
  *(_QWORD *)(v20 + 408) = &v41;
  v42 = a1;
  if ( a1 )
    HMLockObject(a1);
  v23 = *(_QWORD *)(v13 + 472);
  v46 = *(_OWORD *)(v23 + 64);
  v44 = v46;
  v45 = *(_QWORD *)(v23 + 80);
  *(_QWORD *)(v23 + 72) = v14;
  if ( a1 )
    v24 = *a1;
  else
    v24 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v24;
  if ( a1 )
    v25 = *(_QWORD *)(a1[5] + 224LL);
  else
    v25 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v25;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    gdwInAtomicOperation,
    v21,
    v22);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(23LL);
  v26 = KeUserModeCallback(23LL, &v47, 112LL, &v40, v38);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v37,
    v27,
    v28,
    v29);
  ThreadUnlock1(v31, v30, v32);
  v33 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v33 + 64) = v46;
  *(_QWORD *)(v33 + 80) = v45;
  if ( v26 >= 0 && v38[0] == 24 )
  {
    v34 = (__int64 *)v40;
    if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
      v34 = (__int64 *)MmUserProbeAddress;
    v39 = *v34;
    _ReleaseDC(v51);
    return v39;
  }
  return 0LL;
}
