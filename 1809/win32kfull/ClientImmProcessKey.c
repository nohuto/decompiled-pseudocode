/*
 * XREFs of ClientImmProcessKey @ 0x1C01045EC
 * Callers:
 *     xxxImmProcessKey @ 0x1C01042F4 (xxxImmProcessKey.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 result; // rax
  _QWORD v13[10]; // [rsp+38h] [rbp-50h] BYREF
  int v14; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+98h] [rbp+10h] BYREF
  char v16; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h]

  memset(v13, 0, 0x28uLL);
  v13[0] = a1;
  v13[1] = a2;
  LODWORD(v13[2]) = a3;
  v13[3] = a4;
  LODWORD(v13[4]) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v9 = KeUserModeCallback(93LL, v13, 40LL, &v15, &v14);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16, v10);
  if ( v9 < 0 || v14 != 24 )
    return 0LL;
  v11 = (__int64 *)v15;
  if ( v15 + 8 < v15 || v15 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  result = *v11;
  v17 = *v11;
  return result;
}
