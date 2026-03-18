/*
 * XREFs of SfnGESTURE @ 0x1C01FE160
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnGESTURE(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v8; // r12d
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 result; // rax
  _BYTE v26[4]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v27[7]; // [rsp+34h] [rbp-D4h] BYREF
  unsigned __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  __int128 v32; // [rsp+70h] [rbp-98h]
  __int64 v33; // [rsp+80h] [rbp-88h]
  _QWORD v34[10]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v35; // [rsp+D8h] [rbp-30h]
  char v36; // [rsp+110h] [rbp+8h] BYREF

  v8 = a2;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0uLL;
  v33 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v34, 0, 0x30uLL);
  LOBYTE(v13) = 21;
  if ( !HMValidateHandle(a4, v13) )
    return 0LL;
  v34[0] = v12;
  LODWORD(v34[1]) = v8;
  v34[2] = a3;
  v34[3] = a4;
  v34[4] = a5;
  v34[5] = a6;
  v15 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
  v29 = *(_QWORD *)(v15 + 416);
  *(_QWORD *)(v15 + 416) = &v29;
  v30 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v16 = *(_QWORD *)(v11 + 480);
  v35 = *(_OWORD *)(v16 + 64);
  v32 = v35;
  v33 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v12;
  if ( a1 )
    v17 = *(_QWORD *)a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v18 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v18;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v26,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  EtwTraceBeginCallback(113LL);
  v19 = KeUserModeCallback(113LL, v34, 48LL, &v28, v27);
  EtwTraceEndCallback(113LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v36);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v26, v20);
  ThreadUnlock1(v22, v21);
  v23 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v23 + 64) = v35;
  *(_QWORD *)(v23 + 80) = v33;
  if ( v19 < 0 || v27[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v28;
  if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v34[6] = *v24;
  return result;
}
