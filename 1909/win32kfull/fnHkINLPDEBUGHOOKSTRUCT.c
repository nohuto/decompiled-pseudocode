/*
 * XREFs of fnHkINLPDEBUGHOOKSTRUCT @ 0x1C021CF30
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z @ 0x1C01659C4 (-CopyDebugHookLParam@@YAH_KPEAT_DEBUGLPARAM@@PEAUtagDEBUGHOOKINFO@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall fnHkINLPDEBUGHOOKSTRUCT(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 result; // rax
  char v15; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-B7h] BYREF
  int v17; // [rsp+34h] [rbp-B4h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-B0h] BYREF
  _OWORD v19[8]; // [rsp+50h] [rbp-98h] BYREF

  memset(v19, 0, 0x78uLL);
  LODWORD(v19[0]) = a1;
  *((_QWORD *)&v19[0] + 1) = a2;
  *(_DWORD *)(a3 + 28) = 0;
  v19[1] = *(_OWORD *)a3;
  v19[2] = *(_OWORD *)(a3 + 16);
  *((_QWORD *)&v19[6] + 1) = a4;
  *(_QWORD *)&v19[7] = a5;
  if ( a2 - 13 <= 1 )
    return 0LL;
  LODWORD(v19[6]) = CopyDebugHookLParam(a2, (union _DEBUGLPARAM *)&v19[3], (struct tagDEBUGHOOKINFO *)a3);
  *((_QWORD *)&v19[1] + 1) = 0LL;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(43LL);
  v10 = KeUserModeCallback(43LL, v19, 120LL, v18, &v17);
  EtwTraceEndCallback(43LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v11,
    v12);
  if ( v10 < 0 || v17 != 24 )
    return 0LL;
  v13 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  result = *v13;
  v18[1] = *v13;
  return result;
}
