/*
 * XREFs of SfnSENTDDEMSG @ 0x1C01DF490
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C01D04B0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int v9; // r14d
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  signed int v14; // r14d
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
  __int64 result; // rax
  _DWORD v28[6]; // [rsp+30h] [rbp-108h] BYREF
  __int128 v29; // [rsp+48h] [rbp-F0h]
  __int64 v30; // [rsp+58h] [rbp-E0h]
  unsigned __int64 v31; // [rsp+68h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-C8h] BYREF
  volatile signed __int32 *v33; // [rsp+78h] [rbp-C0h]
  __int64 v34; // [rsp+80h] [rbp-B8h]
  _QWORD v35[7]; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-78h] BYREF
  int v37; // [rsp+C8h] [rbp-70h]
  __int64 v38; // [rsp+D0h] [rbp-68h]
  __int64 v39; // [rsp+D8h] [rbp-60h]
  __int64 v40; // [rsp+F0h] [rbp-48h]
  char v41; // [rsp+140h] [rbp+8h] BYREF
  char v42; // [rsp+148h] [rbp+10h] BYREF

  v9 = a2;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v29 = 0uLL;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v12 = ThreadWin32Thread;
  if ( a1 )
    v13 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v13 = 0LL;
  memset(v35, 0, sizeof(v35));
  v14 = v9 & 0xBFFFFFFF;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v32 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v32;
  v33 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v12 + 472);
  v29 = *(_OWORD *)(v17 + 64);
  v30 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v13;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v12 + 472) + 80LL) = v19;
  if ( v14 >= 0 )
  {
    v35[0] = v13;
    LODWORD(v35[1]) = v14;
    v35[2] = a3;
    v35[3] = a4;
  }
  else
  {
    if ( a1 )
      v36 = *(_QWORD *)a1;
    else
      v36 = 0LL;
    v37 = v14 & 0x7FFFFFFF;
    v38 = a3;
    v39 = a4;
    xxxDDETrackGetMessageHook((__int64)&v36);
    v35[0] = *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v36) - *(_QWORD *)(v12 + 464);
    LODWORD(v35[1]) = v37;
    v35[2] = v38;
    v35[3] = v39;
  }
  v35[4] = a5;
  v35[5] = a6;
  LODWORD(v35[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v41,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  EtwTraceBeginCallback(38LL);
  v20 = KeUserModeCallback(38LL, v35, 56LL, &v31, v28);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v42);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v41, v21);
  ThreadUnlock1(v23, v22, v24);
  v25 = *(_QWORD *)(v12 + 472);
  *(_OWORD *)(v25 + 64) = v29;
  *(_QWORD *)(v25 + 80) = v30;
  if ( v20 < 0 || v28[0] != 24 )
    return 0LL;
  v26 = (__int64 *)v31;
  if ( v31 + 8 < v31 || v31 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  result = *v26;
  v40 = *v26;
  return result;
}
