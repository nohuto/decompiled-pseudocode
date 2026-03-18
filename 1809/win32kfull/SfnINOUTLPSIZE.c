/*
 * XREFs of SfnINOUTLPSIZE @ 0x1C0201FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINOUTLPSIZE(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
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
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v30; // [rsp+48h] [rbp-D0h] BYREF
  volatile signed __int32 *v31; // [rsp+50h] [rbp-C8h]
  __int64 v32; // [rsp+58h] [rbp-C0h]
  __int128 v33; // [rsp+60h] [rbp-B8h]
  __int64 v34; // [rsp+70h] [rbp-A8h]
  _QWORD v35[11]; // [rsp+78h] [rbp-A0h] BYREF
  __int128 v36; // [rsp+D0h] [rbp-48h]
  char v37; // [rsp+120h] [rbp+8h] BYREF
  char v38; // [rsp+128h] [rbp+10h] BYREF
  int v39; // [rsp+130h] [rbp+18h] BYREF
  unsigned __int64 v40; // [rsp+138h] [rbp+20h] BYREF

  v10 = a2;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0uLL;
  v34 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v35, 0, 0x30uLL);
  v35[0] = v14;
  LODWORD(v35[1]) = v10;
  v35[2] = a3;
  v35[3] = *a4;
  v35[4] = a5;
  v35[5] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v30 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v30;
  v31 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v36 = *(_OWORD *)(v17 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v18 = *(_QWORD *)a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v19;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v37,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(126LL);
  v20 = KeUserModeCallback(126LL, v35, 48LL, &v40, &v39);
  EtwTraceEndCallback(126LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v36;
  *(_QWORD *)(v24 + 80) = v34;
  if ( v20 >= 0 && v39 == 24 )
  {
    v25 = (__int64 *)v40;
    if ( v40 + 8 < v40 || v40 + 8 > MmUserProbeAddress )
      v25 = (__int64 *)MmUserProbeAddress;
    v26 = *v25;
    v35[6] = *v25;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v26;
    v27 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(_QWORD **)(v27 + 96) != a4 )
    {
      v28 = *(_QWORD **)(v40 + 16);
      if ( v28 + 1 < v28 || (unsigned __int64)(v28 + 1) > MmUserProbeAddress )
        v28 = (_QWORD *)MmUserProbeAddress;
      *a4 = *v28;
      return v26;
    }
  }
  return 0LL;
}
