/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C01DD590
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00E50F0 (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagWND *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  char v29; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-127h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-124h] BYREF
  __int64 v32; // [rsp+48h] [rbp-110h]
  __int128 v33; // [rsp+50h] [rbp-108h]
  __int64 v34; // [rsp+60h] [rbp-F8h]
  unsigned __int64 v35; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+78h] [rbp-E0h] BYREF
  volatile signed __int32 *v37; // [rsp+80h] [rbp-D8h]
  __int64 v38; // [rsp+88h] [rbp-D0h]
  _QWORD v39[14]; // [rsp+B0h] [rbp-A8h] BYREF

  v8 = a2;
  v32 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0uLL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v39, 0, sizeof(v39));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
    return v32;
  v39[0] = v12;
  LODWORD(v39[1]) = v8;
  v39[2] = a3;
  *(_DWORD *)(a4 + 68) = 0;
  *(_OWORD *)&v39[3] = *(_OWORD *)a4;
  *(_OWORD *)&v39[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v39[7] = *(_OWORD *)(a4 + 32);
  *(_OWORD *)&v39[9] = *(_OWORD *)(a4 + 48);
  v39[11] = *(_QWORD *)(a4 + 64);
  v39[12] = a5;
  v39[13] = a6;
  v15 = WindowFromDC(*(HDC *)a4);
  v39[3] = _GetDC(v15);
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
  v36 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v36;
  v37 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v11 + 472);
  v33 = *(_OWORD *)(v18 + 64);
  v34 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v12;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v30,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  EtwTraceBeginCallback(23LL);
  v21 = KeUserModeCallback(23LL, v39, 112LL, &v35, v31);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v26 + 64) = v33;
  *(_QWORD *)(v26 + 80) = v34;
  if ( v21 >= 0 && v31[0] == 24 )
  {
    v27 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v32 = *v27;
    _ReleaseDC(v39[3]);
    return v32;
  }
  return 0LL;
}
