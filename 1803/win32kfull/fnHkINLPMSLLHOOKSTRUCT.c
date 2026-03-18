/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1C01E06D0
 * Callers:
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 result; // rax
  char v13; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-77h] BYREF
  int v15; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-70h] BYREF
  _OWORD v17[4]; // [rsp+50h] [rbp-58h] BYREF

  memset(v17, 0, sizeof(v17));
  LODWORD(v17[0]) = a1;
  *((_QWORD *)&v17[0] + 1) = a2;
  *(_DWORD *)(a3 + 20) = 0;
  v17[2] = *(_OWORD *)a3;
  v17[3] = *(_OWORD *)(a3 + 16);
  *(_QWORD *)&v17[1] = a4;
  *((_QWORD *)&v17[1] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(46LL);
  v9 = KeUserModeCallback(46LL, v17, 64LL, v16, &v15);
  EtwTraceEndCallback(46LL);
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
