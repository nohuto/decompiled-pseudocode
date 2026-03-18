/*
 * XREFs of SfnOUTDWORDINDWORD @ 0x1C0203EC0
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

__int64 __fastcall SfnOUTDWORDINDWORD(
        volatile signed __int32 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  int v10; // r15d
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
  _DWORD *v27; // rdx
  __int64 v29; // [rsp+58h] [rbp-D0h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-C8h]
  __int64 v31; // [rsp+68h] [rbp-C0h]
  __int128 v32; // [rsp+70h] [rbp-B8h]
  __int64 v33; // [rsp+80h] [rbp-A8h]
  _QWORD v34[11]; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v35; // [rsp+E0h] [rbp-48h]
  char v36; // [rsp+130h] [rbp+8h] BYREF
  char v37; // [rsp+138h] [rbp+10h] BYREF
  int v38; // [rsp+140h] [rbp+18h] BYREF
  unsigned __int64 v39; // [rsp+148h] [rbp+20h] BYREF

  v10 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v34, 0, 0x30uLL);
  v34[0] = v14;
  LODWORD(v34[1]) = v10;
  v34[3] = a4;
  v34[4] = a5;
  v34[5] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v29 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v29;
  v30 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v35 = *(_OWORD *)(v17 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v17 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)&v36,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  EtwTraceBeginCallback(33LL);
  v20 = KeUserModeCallback(33LL, v34, 48LL, &v39, &v38);
  EtwTraceEndCallback(33LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v37);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v36, v21);
  ThreadUnlock1(v23, v22);
  v24 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v24 + 64) = v35;
  *(_QWORD *)(v24 + 80) = v33;
  if ( v20 < 0 || v38 != 24 )
    return 0LL;
  v25 = (__int64 *)v39;
  if ( v39 + 8 < v39 || v39 + 8 > MmUserProbeAddress )
    v25 = (__int64 *)MmUserProbeAddress;
  v26 = *v25;
  v34[6] = *v25;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v27 = *(_DWORD **)(v39 + 16);
    if ( (unsigned __int64)v27 >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *a3 = *v27;
  }
  return v26;
}
