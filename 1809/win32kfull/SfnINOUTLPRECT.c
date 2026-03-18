/*
 * XREFs of SfnINOUTLPRECT @ 0x1C011B5C0
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
  __int64 v26; // rcx
  __int64 *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  _OWORD *v30; // rcx
  char v32; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v33[3]; // [rsp+31h] [rbp-107h] BYREF
  _DWORD v34[5]; // [rsp+34h] [rbp-104h] BYREF
  unsigned __int64 v35; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-E0h] BYREF
  volatile signed __int32 *v37; // [rsp+60h] [rbp-D8h]
  __int64 v38; // [rsp+68h] [rbp-D0h]
  __int128 v39; // [rsp+70h] [rbp-C8h]
  __int64 v40; // [rsp+80h] [rbp-B8h]
  __int64 v41; // [rsp+88h] [rbp-B0h]
  _QWORD v42[7]; // [rsp+B0h] [rbp-88h] BYREF

  v10 = a2;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v40 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v13 = ThreadWin32Thread;
  if ( a1 )
    v14 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v14 = 0LL;
  memset(v42, 0, sizeof(v42));
  v42[0] = v14;
  LODWORD(v42[1]) = v10;
  v42[2] = a3;
  *(_OWORD *)&v42[3] = *a4;
  v42[5] = a5;
  v42[6] = a6;
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
  v36 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v36;
  v37 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v17 = *(_QWORD *)(v13 + 480);
  v18 = *(_OWORD *)(v17 + 64);
  v39 = v18;
  v19 = *(_QWORD *)(v17 + 80);
  v40 = v19;
  *(_QWORD *)(v17 + 72) = v14;
  if ( a1 )
    v20 = *(_QWORD *)a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v21 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 480) + 80LL) = v21;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v33,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  EtwTraceBeginCallback(20LL);
  v22 = KeUserModeCallback(20LL, v42, 56LL, &v35, v34);
  EtwTraceEndCallback(20LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v32);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v33, v23);
  ThreadUnlock1(v25, v24);
  v26 = *(_QWORD *)(v13 + 480);
  *(_OWORD *)(v26 + 64) = v18;
  *(_QWORD *)(v26 + 80) = v19;
  if ( v22 >= 0 && v34[0] == 24 )
  {
    v27 = (__int64 *)v35;
    if ( v35 + 8 < v35 || v35 + 8 > MmUserProbeAddress )
      v27 = (__int64 *)MmUserProbeAddress;
    v28 = *v27;
    v41 = *v27;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v28;
    v29 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v29 || (*(_DWORD *)(v29 + 84) & 1) == 0 || *(_OWORD **)(v29 + 96) != a4 )
    {
      v30 = *(_OWORD **)(v35 + 16);
      if ( v30 + 1 < v30 || (unsigned __int64)(v30 + 1) > MmUserProbeAddress )
        v30 = (_OWORD *)MmUserProbeAddress;
      *a4 = *v30;
      return v28;
    }
  }
  return 0LL;
}
