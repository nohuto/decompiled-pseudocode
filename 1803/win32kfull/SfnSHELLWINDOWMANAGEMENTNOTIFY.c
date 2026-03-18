/*
 * XREFs of SfnSHELLWINDOWMANAGEMENTNOTIFY @ 0x1C00F8160
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

__int64 __fastcall SfnSHELLWINDOWMANAGEMENTNOTIFY(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int v8; // r15d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 result; // rax
  char v26; // [rsp+30h] [rbp-118h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-117h] BYREF
  _DWORD v28[5]; // [rsp+34h] [rbp-114h] BYREF
  __int128 v29; // [rsp+48h] [rbp-100h]
  __int64 v30; // [rsp+58h] [rbp-F0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-D8h] BYREF
  volatile signed __int32 *v33; // [rsp+78h] [rbp-D0h]
  __int64 v34; // [rsp+80h] [rbp-C8h]
  __int64 v35; // [rsp+88h] [rbp-C0h]
  _QWORD v36[12]; // [rsp+B0h] [rbp-98h] BYREF

  v8 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0uLL;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v36, 0, sizeof(v36));
  v36[0] = v12;
  LODWORD(v36[1]) = v8 & 0x1FFFF;
  v36[2] = a3;
  *(_DWORD *)(a4 + 12) = 0;
  *(_OWORD *)&v36[3] = *(_OWORD *)a4;
  *(_OWORD *)&v36[5] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v36[7] = *(_OWORD *)(a4 + 32);
  v36[9] = *(_QWORD *)(a4 + 48);
  v36[10] = a5;
  v36[11] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v32 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 472);
  v29 = *(_OWORD *)(v15 + 64);
  v30 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 472) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v27,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(54LL);
  v18 = KeUserModeCallback(54LL, v36, 96LL, &v31, v28);
  EtwTraceEndCallback(54LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v27, v19);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v23 + 64) = v29;
  *(_QWORD *)(v23 + 80) = v30;
  if ( v18 < 0 || v28[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v35 = *v24;
  return result;
}
