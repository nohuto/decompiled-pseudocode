/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C0219D60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _WindowFromDC @ 0x1C00E3ECC (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
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
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  char v33; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-134h] BYREF
  __int64 v36; // [rsp+48h] [rbp-120h]
  unsigned __int64 v37; // [rsp+58h] [rbp-110h] BYREF
  __int64 v38; // [rsp+60h] [rbp-108h] BYREF
  _QWORD *v39; // [rsp+68h] [rbp-100h]
  __int64 v40; // [rsp+70h] [rbp-F8h]
  __int128 v41; // [rsp+78h] [rbp-F0h]
  __int64 v42; // [rsp+88h] [rbp-E0h]
  __int128 v43; // [rsp+A8h] [rbp-C0h]
  __int64 v44; // [rsp+C0h] [rbp-A8h] BYREF
  int v45; // [rsp+C8h] [rbp-A0h]
  int v46; // [rsp+CCh] [rbp-9Ch]
  __int64 v47; // [rsp+D0h] [rbp-98h]
  __int128 v48; // [rsp+D8h] [rbp-90h]
  __int128 v49; // [rsp+E8h] [rbp-80h]
  __int128 v50; // [rsp+F8h] [rbp-70h]
  __int128 v51; // [rsp+108h] [rbp-60h]
  __int64 v52; // [rsp+118h] [rbp-50h]
  __int64 v53; // [rsp+120h] [rbp-48h]
  __int64 v54; // [rsp+128h] [rbp-40h]

  v8 = a2;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0uLL;
  v42 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v46 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v36;
  v44 = v14;
  v45 = v8;
  v47 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v48 = *a4;
  v49 = a4[1];
  v50 = a4[2];
  v51 = a4[3];
  v52 = *((_QWORD *)a4 + 8);
  v53 = a5;
  v54 = a6;
  v16 = WindowFromDC(*(HDC *)a4);
  *(_QWORD *)&v48 = _GetDC(v16);
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18);
  v38 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v38;
  v39 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v13 + 472);
  v43 = *(_OWORD *)(v21 + 64);
  v41 = v43;
  v42 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v14;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v23;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(23LL);
  v24 = KeUserModeCallback(23LL, &v44, 112LL, &v37, v35);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v30 + 64) = v43;
  *(_QWORD *)(v30 + 80) = v42;
  if ( v24 >= 0 && v35[0] == 24 )
  {
    v31 = (__int64 *)v37;
    if ( v37 + 8 < v37 || v37 + 8 > MmUserProbeAddress )
      v31 = (__int64 *)MmUserProbeAddress;
    v36 = *v31;
    _ReleaseDC(v48);
    return v36;
  }
  return 0LL;
}
