/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C01DDD10
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  __int64 v26; // r8
  __int64 v27; // rcx
  ULONG64 v28; // rcx
  char v30; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v33; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v34; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+60h] [rbp-C8h] BYREF
  volatile signed __int32 *v36; // [rsp+68h] [rbp-C0h]
  __int64 v37; // [rsp+70h] [rbp-B8h]
  __int128 v38; // [rsp+78h] [rbp-B0h]
  __int64 v39; // [rsp+88h] [rbp-A0h]
  _QWORD v40[7]; // [rsp+A8h] [rbp-80h] BYREF

  v8 = a2;
  v33 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0uLL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v40, 0, sizeof(v40));
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v40[0] = v12;
    LODWORD(v40[1]) = v8;
    v40[2] = a3;
    *(_OWORD *)&v40[3] = *a4;
    v40[5] = a5;
    v40[6] = a6;
    v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
    v35 = *(_QWORD *)(v16 + 408);
    *(_QWORD *)(v16 + 408) = &v35;
    v36 = a1;
    if ( a1 )
      _InterlockedIncrement(a1 + 2);
    v17 = *(_QWORD *)(v11 + 472);
    v18 = *(_OWORD *)(v17 + 64);
    v38 = v18;
    v19 = *(_QWORD *)(v17 + 80);
    v39 = v19;
    *(_QWORD *)(v17 + 72) = v12;
    if ( a1 )
      v20 = *(_QWORD *)a1;
    else
      v20 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v20;
    if ( a1 )
      v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
    else
      v21 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v21;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v31,
      gdwInAtomicOperation);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, v40, 56LL, &v34, v32);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31, v23);
    ThreadUnlock1(v25, v24, v26);
    v27 = *(_QWORD *)(v11 + 472);
    *(_OWORD *)(v27 + 64) = v18;
    *(_QWORD *)(v27 + 80) = v19;
    if ( v22 < 0 || v32[0] != 24 )
      return 0LL;
    v28 = v34;
    if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
      v28 = MmUserProbeAddress;
    return *(_QWORD *)v28;
  }
  return v33;
}
