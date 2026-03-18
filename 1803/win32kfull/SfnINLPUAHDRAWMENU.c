/*
 * XREFs of SfnINLPUAHDRAWMENU @ 0x1C00EB230
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _ServerFixupMenuDC @ 0x1C00EBA98 (_ServerFixupMenuDC.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENU(
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
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // rbx
  __int128 v30; // [rsp+40h] [rbp-D8h]
  __int64 v31; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-B0h] BYREF
  volatile signed __int32 *v34; // [rsp+70h] [rbp-A8h]
  __int64 v35; // [rsp+78h] [rbp-A0h]
  _QWORD v36[19]; // [rsp+80h] [rbp-98h] BYREF
  char v37; // [rsp+120h] [rbp+8h] BYREF
  char v38; // [rsp+128h] [rbp+10h] BYREF
  int v39; // [rsp+130h] [rbp+18h] BYREF
  __int64 v40; // [rsp+138h] [rbp+20h]

  v10 = a2;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v14 = 0LL;
  memset(v36, 0, 0x40uLL);
  v40 = 0LL;
  v16 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v16 )
  {
    v40 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v16;
  }
  v36[0] = v14;
  LODWORD(v36[1]) = v10 & 0x1FFFF;
  v36[2] = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)&v36[3] = *(_OWORD *)a4;
  v36[5] = *(_QWORD *)(a4 + 16);
  v36[6] = a5;
  v36[7] = a6;
  v17 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v33 = *(_QWORD *)(v17 + 408);
  *(_QWORD *)(v17 + 408) = &v33;
  v34 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v18 = *(_QWORD *)(v13 + 472);
  v30 = *(_OWORD *)(v18 + 64);
  v31 = *(_QWORD *)(v18 + 80);
  *(_QWORD *)(v18 + 72) = v14;
  if ( a1 )
    v19 = *(_QWORD *)a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 472) + 80LL) = v20;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v37,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  EtwTraceBeginCallback(106LL);
  v21 = KeUserModeCallback(106LL, v36, 64LL, &v32, &v39);
  EtwTraceEndCallback(106LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v38);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v37, v22);
  ThreadUnlock1(v24, v23, v25);
  v26 = *(_QWORD *)(v13 + 472);
  *(_OWORD *)(v26 + 64) = v30;
  *(_QWORD *)(v26 + 80) = v31;
  if ( v21 < 0 || v39 != 24 )
    return 0LL;
  v27 = (__int64 *)v32;
  if ( v32 + 8 < v32 || v32 + 8 > MmUserProbeAddress )
    v27 = (__int64 *)MmUserProbeAddress;
  v28 = *v27;
  v36[8] = *v27;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v40;
  }
  return v28;
}
