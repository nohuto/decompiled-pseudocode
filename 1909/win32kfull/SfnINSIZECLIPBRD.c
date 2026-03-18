/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C021A5C0
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

__int64 __fastcall SfnINSIZECLIPBRD(_QWORD *a1, __int64 a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int128 v21; // xmm6
  __int64 v22; // xmm7_8
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  ULONG64 v32; // rcx
  char v34; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v35[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v36[5]; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v37; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v38; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v40; // [rsp+68h] [rbp-C0h]
  __int64 v41; // [rsp+70h] [rbp-B8h]
  __int128 v42; // [rsp+78h] [rbp-B0h]
  __int64 v43; // [rsp+88h] [rbp-A0h]
  __int64 v44; // [rsp+A8h] [rbp-80h] BYREF
  int v45; // [rsp+B0h] [rbp-78h]
  int v46; // [rsp+B4h] [rbp-74h]
  __int64 v47; // [rsp+B8h] [rbp-70h]
  __int128 v48; // [rsp+C0h] [rbp-68h]
  __int64 v49; // [rsp+D0h] [rbp-58h]
  __int64 v50; // [rsp+D8h] [rbp-50h]

  v8 = a2;
  v37 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0uLL;
  v43 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v46 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v44 = v14;
    v45 = v8;
    v47 = a3;
    v48 = *a4;
    v49 = a5;
    v50 = a6;
    v18 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17);
    v39 = *(_QWORD *)(v18 + 408);
    *(_QWORD *)(v18 + 408) = &v39;
    v40 = a1;
    if ( a1 )
      HMLockObject(a1);
    v20 = *(_QWORD *)(v13 + 472);
    v21 = *(_OWORD *)(v20 + 64);
    v42 = v21;
    v22 = *(_QWORD *)(v20 + 80);
    v43 = v22;
    *(_QWORD *)(v20 + 72) = v14;
    if ( a1 )
      v23 = *a1;
    else
      v23 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v23;
    if ( a1 )
      v24 = *(_QWORD *)(a1[5] + 224LL);
    else
      v24 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v24;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      gdwInAtomicOperation,
      v19);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    EtwTraceBeginCallback(24LL);
    v25 = KeUserModeCallback(24LL, &v44, 56LL, &v38, v36);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v34);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v35,
      v26,
      v27);
    ThreadUnlock1(v29, v28, v30);
    v31 = *(_QWORD *)(v13 + 472);
    *(_OWORD *)(v31 + 64) = v21;
    *(_QWORD *)(v31 + 80) = v22;
    if ( v25 < 0 || v36[0] != 24 )
      return 0LL;
    v32 = v38;
    if ( v38 + 8 < v38 || v38 + 8 > MmUserProbeAddress )
      v32 = MmUserProbeAddress;
    return *(_QWORD *)v32;
  }
  return v37;
}
