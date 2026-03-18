/*
 * XREFs of SfnINWPARAMCHAR @ 0x1C0203730
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C01303C4 (RtlWCSMessageWParamCharToMB.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnINWPARAMCHAR(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v8; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // r14
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
  __int64 v22; // rcx
  __int64 *v23; // rcx
  __int64 result; // rax
  WCHAR v25[8]; // [rsp+40h] [rbp-D8h] BYREF
  unsigned __int64 v26; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+58h] [rbp-C0h] BYREF
  volatile signed __int32 *v28; // [rsp+60h] [rbp-B8h]
  __int64 v29; // [rsp+68h] [rbp-B0h]
  __int128 v30; // [rsp+70h] [rbp-A8h]
  __int64 v31; // [rsp+80h] [rbp-98h]
  _QWORD v32[10]; // [rsp+88h] [rbp-90h] BYREF
  __int128 v33; // [rsp+D8h] [rbp-40h]
  char v34; // [rsp+120h] [rbp+8h] BYREF
  char v35; // [rsp+128h] [rbp+10h] BYREF
  __int64 v36; // [rsp+130h] [rbp+18h] BYREF
  int v37; // [rsp+138h] [rbp+20h] BYREF

  v36 = a3;
  v8 = a2;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0uLL;
  v31 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v11 = ThreadWin32Thread;
  if ( a1 )
    v12 = *((_QWORD *)a1 + 5) - *(_QWORD *)(ThreadWin32Thread + 472);
  else
    v12 = 0LL;
  memset(v32, 0, 0x30uLL);
  v32[0] = v12;
  LODWORD(v32[1]) = v8;
  if ( (a7 & 1) != 0 )
  {
    if ( v8 == 47 || v8 == 288 )
    {
      *(_QWORD *)v25 = (unsigned __int16)v36;
      RtlWCSMessageWParamCharToMB(v8, v25);
      v36 = (WORD1(v36) << 16) | v25[0];
    }
    else
    {
      RtlWCSMessageWParamCharToMB(v8, (WCHAR *)&v36);
    }
  }
  v32[2] = v36;
  v32[3] = a4;
  v32[4] = a5;
  v32[5] = a6;
  v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13);
  v27 = *(_QWORD *)(v14 + 416);
  *(_QWORD *)(v14 + 416) = &v27;
  v28 = a1;
  if ( a1 )
    _InterlockedIncrement(a1 + 2);
  v15 = *(_QWORD *)(v11 + 480);
  v33 = *(_OWORD *)(v15 + 64);
  v30 = v33;
  v31 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v12;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 224LL);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 480) + 80LL) = v17;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v34,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  EtwTraceBeginCallback(2LL);
  v18 = KeUserModeCallback(2LL, v32, 48LL, &v26, &v37);
  EtwTraceEndCallback(2LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v35);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v34, v19);
  ThreadUnlock1(v21, v20);
  v22 = *(_QWORD *)(v11 + 480);
  *(_OWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 80) = v31;
  if ( v18 < 0 || v37 != 24 )
    return 0LL;
  v23 = (__int64 *)v26;
  if ( v26 + 8 < v26 || v26 + 8 > MmUserProbeAddress )
    v23 = (__int64 *)MmUserProbeAddress;
  result = *v23;
  v32[6] = *v23;
  return result;
}
