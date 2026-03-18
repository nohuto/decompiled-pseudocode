/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1C021AB00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int128 v23; // xmm6
  __int64 v24; // xmm7_8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  ULONG64 v35; // rcx
  char v37; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v38[3]; // [rsp+31h] [rbp-F7h] BYREF
  _DWORD v39[5]; // [rsp+34h] [rbp-F4h] BYREF
  __int64 v40; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v41; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-C8h] BYREF
  _QWORD *v43; // [rsp+68h] [rbp-C0h]
  __int64 v44; // [rsp+70h] [rbp-B8h]
  __int128 v45; // [rsp+78h] [rbp-B0h]
  __int64 v46; // [rsp+88h] [rbp-A0h]
  __int64 v47; // [rsp+A8h] [rbp-80h] BYREF
  int v48; // [rsp+B0h] [rbp-78h]
  int v49; // [rsp+B4h] [rbp-74h]
  __int64 v50; // [rsp+B8h] [rbp-70h]
  __int128 v51; // [rsp+C0h] [rbp-68h]
  __int64 v52; // [rsp+D0h] [rbp-58h]
  __int64 v53; // [rsp+D8h] [rbp-50h]

  v8 = a2;
  v40 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0uLL;
  v46 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, (__int64)a4);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  v49 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12, v11);
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(CurrentProcessWin32Process + 680), 4u) )
  {
    v47 = v14;
    v48 = v8;
    v50 = a3;
    v51 = *a4;
    v52 = a5;
    v53 = a6;
    v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16, v17, v18);
    v42 = *(_QWORD *)(v19 + 408);
    *(_QWORD *)(v19 + 408) = &v42;
    v43 = a1;
    if ( a1 )
      HMLockObject(a1);
    v22 = *(_QWORD *)(v13 + 472);
    v23 = *(_OWORD *)(v22 + 64);
    v45 = v23;
    v24 = *(_QWORD *)(v22 + 80);
    v46 = v24;
    *(_QWORD *)(v22 + 72) = v14;
    if ( a1 )
      v25 = *a1;
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v25;
    if ( a1 )
      v26 = *(_QWORD *)(a1[5] + 224LL);
    else
      v26 = 0LL;
    *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v26;
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v38,
      gdwInAtomicOperation,
      v20,
      v21);
    LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
    EtwTraceBeginCallback(24LL);
    v27 = KeUserModeCallback(24LL, &v47, 56LL, &v41, v39);
    EtwTraceEndCallback(24LL);
    LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
    ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
      (ReleaseAndReacquirePerObjectLocks *)v38,
      v28,
      v29,
      v30);
    ThreadUnlock1(v32, v31, v33);
    v34 = *(_QWORD *)(v13 + 472);
    *(_OWORD *)(v34 + 64) = v23;
    *(_QWORD *)(v34 + 80) = v24;
    if ( v27 < 0 || v39[0] != 24 )
      return 0LL;
    v35 = v41;
    if ( v41 + 8 < v41 || v41 + 8 > MmUserProbeAddress )
      v35 = MmUserProbeAddress;
    return *(_QWORD *)v35;
  }
  return v40;
}
