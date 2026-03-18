/*
 * XREFs of SfnNCDESTROY @ 0x1C00E5180
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
 */

__int64 __fastcall SfnNCDESTROY(
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
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 result; // rax
  __int128 v26; // [rsp+40h] [rbp-C8h]
  __int64 v27; // [rsp+50h] [rbp-B8h]
  __int64 v28; // [rsp+60h] [rbp-A8h] BYREF
  volatile signed __int32 *v29; // [rsp+68h] [rbp-A0h]
  __int64 v30; // [rsp+70h] [rbp-98h]
  _QWORD v31[18]; // [rsp+78h] [rbp-90h] BYREF
  char v32; // [rsp+110h] [rbp+8h] BYREF
  char v33; // [rsp+118h] [rbp+10h] BYREF
  int v34; // [rsp+120h] [rbp+18h] BYREF
  unsigned __int64 v35; // [rsp+128h] [rbp+20h] BYREF

  v8 = a2;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v31, 0, 0x30uLL);
  v31[0] = v12;
  LODWORD(v31[1]) = v8;
  v31[2] = a3;
  v31[3] = a4;
  v31[4] = a5;
  v31[5] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v28 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v28;
  v29 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 472);
  v26 = *(_OWORD *)(v15 + 64);
  v27 = *(_QWORD *)(v15 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v32,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  EtwTraceBeginCallback(3LL);
  v18 = KeUserModeCallback(3LL, v31, 48LL, &v35, &v34);
  EtwTraceEndCallback(3LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v33);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v32, v19);
  v20 = *((_QWORD *)a1 + 5);
  *(_QWORD *)(v20 + 224) = 0LL;
  ThreadUnlock1(v20, v21, v22);
  v23 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v23 + 64) = v26;
  *(_QWORD *)(v23 + 80) = v27;
  if ( v18 < 0 || v34 != 24 )
    return 0LL;
  v24 = (__int64 *)v35;
  if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v31[6] = *v24;
  return result;
}
