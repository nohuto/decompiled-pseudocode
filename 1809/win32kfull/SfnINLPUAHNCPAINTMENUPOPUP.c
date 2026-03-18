/*
 * XREFs of SfnINLPUAHNCPAINTMENUPOPUP @ 0x1C02017D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C01060C4 (_ServerFixupMenuDC.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINLPUAHNCPAINTMENUPOPUP(
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
  HDC v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 v27; // rbx
  unsigned __int64 v29; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-D8h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-D0h]
  __int64 v32; // [rsp+60h] [rbp-C8h]
  __int128 v33; // [rsp+68h] [rbp-C0h]
  __int64 v34; // [rsp+78h] [rbp-B0h]
  _QWORD v35[12]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v36; // [rsp+E0h] [rbp-48h]
  char v37; // [rsp+130h] [rbp+8h] BYREF
  char v38; // [rsp+138h] [rbp+10h] BYREF
  int v39; // [rsp+140h] [rbp+18h] BYREF
  __int64 v40; // [rsp+148h] [rbp+20h]

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
  memset(v35, 0, 0x40uLL);
  v40 = 0LL;
  v16 = ServerFixupMenuDC(*(HDC *)(a4 + 8), *(_QWORD *)a4, 0, 0);
  if ( v16 )
  {
    v40 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v16;
  }
  v35[0] = v14;
  LODWORD(v35[1]) = v10 & 0x1FFFF;
  v35[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v35[3] = *(_OWORD *)a4;
  v35[5] = *(_QWORD *)(a4 + 16);
  v35[6] = a5;
  v35[7] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v30 = *(_QWORD *)(v17 + 416);
  *(_QWORD *)(v17 + 416) = &v30;
  v31 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v13 + 480);
  v36 = *(_OWORD *)(v18 + 64);
  v33 = v36;
  v34 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v37,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(110LL);
  v21 = KeUserModeCallback(110LL, v35, 64LL, &v29, &v39);
  EtwTraceEndCallback(110LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37, v22);
  ThreadUnlock1(v24, v23);
  v25 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v25 + 64) = v36;
  *(_QWORD *)(v25 + 80) = v34;
  if ( v21 < 0 || v39 != 24 )
    return 0LL;
  v26 = (__int64 *)v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v26 = (__int64 *)MmUserProbeAddress;
  v27 = *v26;
  v35[8] = *v26;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v40;
  }
  return v27;
}
