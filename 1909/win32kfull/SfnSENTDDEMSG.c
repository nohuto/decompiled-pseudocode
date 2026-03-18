/*
 * XREFs of SfnSENTDDEMSG @ 0x1C021C380
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     xxxDDETrackGetMessageHook @ 0x1C020B5F0 (xxxDDETrackGetMessageHook.c)
 */

__int64 __fastcall SfnSENTDDEMSG(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  signed int v16; // r14d
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 result; // rax
  _DWORD v33[8]; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v35; // [rsp+58h] [rbp-F0h] BYREF
  _QWORD *v36; // [rsp+60h] [rbp-E8h]
  __int64 v37; // [rsp+68h] [rbp-E0h]
  __int128 v38; // [rsp+70h] [rbp-D8h]
  __int64 v39; // [rsp+80h] [rbp-C8h]
  _QWORD v40[7]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v41[10]; // [rsp+C0h] [rbp-88h] BYREF
  __int128 v42; // [rsp+110h] [rbp-38h]
  char v43; // [rsp+150h] [rbp+8h] BYREF
  char v44; // [rsp+158h] [rbp+10h] BYREF

  memset(v41, 0, 0x30uLL);
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0uLL;
  v39 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v14 = ThreadWin32Thread;
  if ( a1 )
    v15 = a1[5] - *(_QWORD *)(ThreadWin32Thread + 464);
  else
    v15 = 0LL;
  memset(v40, 0, sizeof(v40));
  v16 = a2 & 0xBFFFFFFF;
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18);
  v35 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v35;
  v36 = a1;
  if ( a1 )
    HMLockObject(a1);
  v21 = *(_QWORD *)(v14 + 472);
  v42 = *(_OWORD *)(v21 + 64);
  v38 = v42;
  v39 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(v21 + 72) = v15;
  if ( a1 )
    v22 = *a1;
  else
    v22 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224LL);
  else
    v23 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v14 + 472) + 80LL) = v23;
  if ( v16 >= 0 )
  {
    v40[0] = v15;
    LODWORD(v40[1]) = v16;
    v40[2] = a3;
    v40[3] = a4;
  }
  else
  {
    if ( a1 )
      v41[0] = *a1;
    LODWORD(v41[1]) = v16 & 0x7FFFFFFF;
    v41[2] = a3;
    v41[3] = a4;
    xxxDDETrackGetMessageHook((__int64)v41);
    v40[0] = _HMObjectFromHandle(v41[0]) - *(_QWORD *)(v14 + 464);
    LODWORD(v40[1]) = v41[1];
    v40[2] = v41[2];
    v40[3] = v41[3];
  }
  v40[4] = a5;
  v40[5] = a6;
  LODWORD(v40[6]) = (a7 & 1) == 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v43,
    gdwInAtomicOperation,
    v20);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  EtwTraceBeginCallback(38LL);
  v24 = KeUserModeCallback(38LL, v40, 56LL, &v34, v33);
  EtwTraceEndCallback(38LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v44);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v43,
    v25,
    v26);
  ThreadUnlock1(v28, v27, v29);
  v30 = *(_QWORD *)(v14 + 472);
  *(_OWORD *)(v30 + 64) = v42;
  *(_QWORD *)(v30 + 80) = v39;
  if ( v24 < 0 || v33[0] != 24 )
    return 0LL;
  v31 = (__int64 *)v34;
  if ( v34 + 8 < v34 || v34 + 8 > MmUserProbeAddress )
    v31 = (__int64 *)MmUserProbeAddress;
  result = *v31;
  v41[6] = *v31;
  return result;
}
