/*
 * XREFs of SfnINOUTLPPOINT5 @ 0x1C00E5C80
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

__int64 __fastcall SfnINOUTLPPOINT5(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  ULONG64 v29; // rcx
  __int128 v30; // xmm1
  __int64 v31; // xmm0_8
  char v33; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v37; // [rsp+50h] [rbp-E8h]
  __int64 v38; // [rsp+60h] [rbp-D8h]
  __int64 v39; // [rsp+70h] [rbp-C8h] BYREF
  volatile signed __int32 *v40; // [rsp+78h] [rbp-C0h]
  __int64 v41; // [rsp+80h] [rbp-B8h]
  __int64 v42; // [rsp+88h] [rbp-B0h]
  _QWORD v43[10]; // [rsp+B0h] [rbp-88h] BYREF

  v10 = a2;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v43, 0, sizeof(v43));
  v43[0] = v14;
  LODWORD(v43[1]) = v10;
  v43[2] = a3;
  *(_OWORD *)&v43[3] = *(_OWORD *)a4;
  *(_OWORD *)&v43[5] = *(_OWORD *)(a4 + 16);
  v43[7] = *(_QWORD *)(a4 + 32);
  v43[8] = a5;
  v43[9] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v39 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v39;
  v40 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v37 = *(_OWORD *)(v17 + 64);
  v38 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(18LL);
  v20 = KeUserModeCallback(18LL, v43, 80LL, &v36, v35);
  EtwTraceEndCallback(18LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v25 + 64) = v37;
  *(_QWORD *)(v25 + 80) = v38;
  if ( v20 < 0 || v35[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v36;
  if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v42 = *v26;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v27;
  v28 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v28 || (*(_DWORD *)(v28 + 84) & 1) == 0 || *(_QWORD *)(v28 + 96) != a4 )
  {
    v29 = *(_QWORD *)(v36 + 16);
    if ( v29 + 40 < v29 || v29 + 40 > MmUserProbeAddress )
      v29 = MmUserProbeAddress;
    v30 = *(_OWORD *)(v29 + 16);
    v31 = *(_QWORD *)(v29 + 32);
    *(_OWORD *)a4 = *(_OWORD *)v29;
    *(_OWORD *)(a4 + 16) = v30;
    *(_QWORD *)(a4 + 32) = v31;
    return v27;
  }
  return 0LL;
}
