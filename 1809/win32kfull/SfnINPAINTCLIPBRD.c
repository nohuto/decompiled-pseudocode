/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1C0202B80
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _WindowFromDC @ 0x1C00FF34C (_WindowFromDC.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v25; // rcx
  __int64 *v26; // rcx
  char v28; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v29[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v30[5]; // [rsp+34h] [rbp-134h] BYREF
  __int64 v31; // [rsp+48h] [rbp-120h]
  unsigned __int64 v32; // [rsp+58h] [rbp-110h] BYREF
  __int64 v33; // [rsp+60h] [rbp-108h] BYREF
  volatile signed __int32 *v34; // [rsp+68h] [rbp-100h]
  __int64 v35; // [rsp+70h] [rbp-F8h]
  __int128 v36; // [rsp+78h] [rbp-F0h]
  __int64 v37; // [rsp+88h] [rbp-E0h]
  __int128 v38; // [rsp+A8h] [rbp-C0h]
  _QWORD v39[14]; // [rsp+C0h] [rbp-A8h] BYREF

  v8 = a2;
  v31 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0uLL;
  v37 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v39, 0, sizeof(v39));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 688), 4u) )
    return v31;
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
  v33 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v33;
  v34 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v11 + 480);
  v38 = *(_OWORD *)(v18 + 64);
  v36 = v38;
  v37 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v12;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v29,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  EtwTraceBeginCallback(23LL);
  v21 = KeUserModeCallback(23LL, v39, 112LL, &v32, v30);
  EtwTraceEndCallback(23LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v28);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v29, v22);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v25 + 64) = v38;
  *(_QWORD *)(v25 + 80) = v37;
  if ( v21 >= 0 && v30[0] == 24 )
  {
    v26 = (__int64 *)v32;
    if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
      v26 = (__int64 *)MmUserProbeAddress;
    v31 = *v26;
    _ReleaseDC(v39[3]);
    return v31;
  }
  return 0LL;
}
