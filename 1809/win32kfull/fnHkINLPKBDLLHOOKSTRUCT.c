/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C0205E60
 * Callers:
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-67h] BYREF
  int v15; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[56]; // [rsp+50h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  *(_DWORD *)v17 = a1;
  *(_QWORD *)&v17[8] = a2;
  *(_OWORD *)&v17[32] = *(_OWORD *)a3;
  *(_QWORD *)&v17[48] = *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v17[16] = a4;
  *(_QWORD *)&v17[24] = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(45LL);
  v9 = KeUserModeCallback(45LL, v17, 56LL, v16, &v15);
  EtwTraceEndCallback(45LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v14, v10);
  if ( v9 < 0 || v15 != 24 )
    return 0LL;
  v11 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  result = *v11;
  v16[1] = *v11;
  return result;
}
