/*
 * XREFs of SfnGESTURE @ 0x1C01D8F50
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SfnGESTURE(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
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
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 result; // rax
  _BYTE v26[4]; // [rsp+30h] [rbp-C8h] BYREF
  _DWORD v27[5]; // [rsp+34h] [rbp-C4h] BYREF
  __int128 v28; // [rsp+48h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v30; // [rsp+68h] [rbp-90h] BYREF
  __int64 v31; // [rsp+70h] [rbp-88h] BYREF
  volatile signed __int32 *v32; // [rsp+78h] [rbp-80h]
  __int64 v33; // [rsp+80h] [rbp-78h]
  _QWORD v34[11]; // [rsp+88h] [rbp-70h] BYREF
  char v35; // [rsp+100h] [rbp+8h] BYREF

  v8 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v28 = 0uLL;
  v29 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v12 = 0LL;
  memset(v34, 0, 0x30uLL);
  if ( !HMValidateHandle(a4, 21) )
    return 0LL;
  v34[0] = v12;
  LODWORD(v34[1]) = v8;
  v34[2] = a3;
  v34[3] = a4;
  v34[4] = a5;
  v34[5] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v31 = *(_QWORD *)(v14 + 408);
  *(_QWORD *)(v14 + 408) = &v31;
  v32 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 472);
  v28 = *(_OWORD *)(v15 + 64);
  v29 = *(_QWORD *)(v15 + 80);
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
    (ReleaseAndReacquirePerObjectLocks *)v26,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(113LL);
  v18 = KeUserModeCallback(113LL, v34, 48LL, &v30, v27);
  EtwTraceEndCallback(113LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v26, v19);
  ThreadUnlock1(v21, v20, v22);
  v23 = *(_QWORD *)(v11 + 472);
  *(_OWORD *)(v23 + 64) = v28;
  *(_QWORD *)(v23 + 80) = v29;
  if ( v18 < 0 || v27[0] != 24 )
    return 0LL;
  v24 = (__int64 *)v30;
  if ( v30 + 8 < v30 || v30 + 8 > MmUserProbeAddress )
    v24 = (__int64 *)MmUserProbeAddress;
  result = *v24;
  v34[6] = *v24;
  return result;
}
