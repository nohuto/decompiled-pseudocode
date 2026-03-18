/*
 * XREFs of SfnINOUTLPRECT @ 0x1C00FA580
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

__int64 __fastcall SfnINOUTLPRECT(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
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
  __int64 *v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int128 *v31; // rcx
  char v33; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v34[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v35[5]; // [rsp+34h] [rbp-114h] BYREF
  unsigned __int64 v36; // [rsp+48h] [rbp-100h] BYREF
  __int64 v37; // [rsp+58h] [rbp-F0h] BYREF
  volatile signed __int32 *v38; // [rsp+60h] [rbp-E8h]
  __int64 v39; // [rsp+68h] [rbp-E0h]
  __int128 v40; // [rsp+70h] [rbp-D8h]
  __int64 v41; // [rsp+80h] [rbp-C8h]
  __int64 v42; // [rsp+88h] [rbp-C0h]
  __int128 v43; // [rsp+B0h] [rbp-98h]
  _QWORD v44[7]; // [rsp+C0h] [rbp-88h] BYREF

  v10 = a2;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0uLL;
  v41 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v44, 0, sizeof(v44));
  v44[0] = v14;
  LODWORD(v44[1]) = v10;
  v44[2] = a3;
  *(_OWORD *)&v44[3] = *a4;
  v44[5] = a5;
  v44[6] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v37 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v37;
  v38 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 472);
  v18 = *(_OWORD *)(v17 + 64);
  v40 = v18;
  v19 = *(_QWORD *)(v17 + 80);
  v41 = v19;
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v34,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(20LL);
  v22 = KeUserModeCallback(20LL, v44, 56LL, &v36, v35);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v34, v23);
  ThreadUnlock1(v25, v24, v26);
  v27 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v27 + 64) = v18;
  *(_QWORD *)(v27 + 80) = v19;
  if ( v22 >= 0 && v35[0] == 24 )
  {
    v28 = (__int64 *)v36;
    if ( v36 + 8 < v36 || v36 + 8 > MmUserProbeAddress )
      v28 = (__int64 *)MmUserProbeAddress;
    v29 = *v28;
    v42 = *v28;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v29;
    v30 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v30 || (*(_DWORD *)(v30 + 84) & 1) == 0 || *(_OWORD **)(v30 + 96) != a4 )
    {
      v31 = *(__int128 **)(v36 + 16);
      if ( v31 + 1 < v31 || (unsigned __int64)(v31 + 1) > MmUserProbeAddress )
        v31 = (__int128 *)MmUserProbeAddress;
      v43 = *v31;
      *a4 = v43;
      return v29;
    }
  }
  return 0LL;
}
