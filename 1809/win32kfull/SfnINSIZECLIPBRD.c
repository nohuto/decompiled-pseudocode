/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C02033A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  ULONG64 v27; // rcx
  char v29; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v30[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v31[5]; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v32; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v33; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-C8h] BYREF
  volatile signed __int32 *v35; // [rsp+68h] [rbp-C0h]
  __int64 v36; // [rsp+70h] [rbp-B8h]
  __int128 v37; // [rsp+78h] [rbp-B0h]
  __int64 v38; // [rsp+88h] [rbp-A0h]
  _QWORD v39[7]; // [rsp+A8h] [rbp-80h] BYREF

  v8 = a2;
  v32 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v39, 0, sizeof(v39));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 688), 4u) )
  {
    v39[0] = v12;
    LODWORD(v39[1]) = v8;
    v39[2] = a3;
    *(_OWORD *)&v39[3] = *a4;
    v39[5] = a5;
    v39[6] = a6;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
    v34 = *(_QWORD *)(v16 + 416);
    *(_QWORD *)(v16 + 416) = &v34;
    v35 = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v17 = *(_QWORD *)(v11 + 480);
    v18 = *(_OWORD *)(v17 + 64);
    v37 = v18;
    v19 = *(_QWORD *)(v17 + 80);
    v38 = v19;
    *(_QWORD *)(v17 + 72) = v12;
    if ( a1 )
      v20 = *(_QWORD *)a1;
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v20;
    if ( a1 )
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v21 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v21;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v30,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, v39, 56LL, &v33, v31);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v29);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v30, v23);
    ThreadUnlock1(v25, v24);
    v26 = *(_QWORD *)(v11 + 480);
    *(_OWORD *)(v26 + 64) = v18;
    *(_QWORD *)(v26 + 80) = v19;
    if ( v22 < 0 || v31[0] != 24 )
      return 0LL;
    v27 = v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v27 = MmUserProbeAddress;
    return *(_QWORD *)v27;
  }
  return v32;
}
