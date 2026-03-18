/*
 * XREFs of SfnOUTLPCOMBOBOXINFO @ 0x1C001AE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnOUTLPCOMBOBOXINFO(
        volatile signed __int32 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int128 v28; // xmm3
  char v30; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v31[3]; // [rsp+31h] [rbp-137h] BYREF
  _DWORD v32[5]; // [rsp+34h] [rbp-134h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-120h] BYREF
  __int64 v34; // [rsp+58h] [rbp-110h] BYREF
  volatile signed __int32 *v35; // [rsp+60h] [rbp-108h]
  __int64 v36; // [rsp+68h] [rbp-100h]
  __int128 v37; // [rsp+70h] [rbp-F8h]
  __int64 v38; // [rsp+80h] [rbp-E8h]
  __int64 v39; // [rsp+88h] [rbp-E0h]
  __int128 v40; // [rsp+B0h] [rbp-B8h]
  _QWORD v41[14]; // [rsp+C0h] [rbp-A8h] BYREF

  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0uLL;
  v38 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v41, 0, 0x68uLL);
  v41[0] = v14;
  LODWORD(v41[1]) = a2;
  v41[2] = a3;
  *(_OWORD *)&v41[3] = *a4;
  *(_OWORD *)&v41[5] = a4[1];
  *(_OWORD *)&v41[7] = a4[2];
  *(_OWORD *)&v41[9] = a4[3];
  v41[11] = a5;
  v41[12] = a6;
  v15 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v34 = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = &v34;
  v35 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v13 + 480);
  v40 = *(_OWORD *)(v16 + 64);
  v37 = v40;
  v38 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v31,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  EtwTraceBeginCallback(104LL);
  v19 = KeUserModeCallback(104LL, v41, 104LL, &v33, v32);
  EtwTraceEndCallback(104LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v30);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v31, v20);
  ThreadUnlock1();
  v21 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v21 + 64) = v40;
  *(_QWORD *)(v21 + 80) = v38;
  if ( v19 >= 0 && v32[0] == 24 )
  {
    v22 = (__int64 *)v33;
    if ( v33 + 8 < v33 || v33 + 8 > MmUserProbeAddress )
      v22 = (__int64 *)MmUserProbeAddress;
    v23 = *v22;
    v39 = *v22;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(_OWORD **)(v24 + 96) != a4 )
    {
      v25 = *(_OWORD **)(v33 + 16);
      if ( v25 + 4 < v25 || (unsigned __int64)(v25 + 4) > MmUserProbeAddress )
        v25 = (_OWORD *)MmUserProbeAddress;
      v26 = v25[1];
      v27 = v25[2];
      v28 = v25[3];
      *a4 = *v25;
      a4[1] = v26;
      a4[2] = v27;
      a4[3] = v28;
      return v23;
    }
  }
  return 0LL;
}
