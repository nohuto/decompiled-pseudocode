/*
 * XREFs of ClientWaitMessageExMPH @ 0x1C00FEDCC
 * Callers:
 *     NtUserWaitMessage @ 0x1C00FED60 (NtUserWaitMessage.c)
 *     xxxWaitMessageEx @ 0x1C01CF7DC (xxxWaitMessageEx.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientWaitMessageExMPH(int a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  int v10; // [rsp+78h] [rbp+20h] BYREF
  int v11; // [rsp+7Ch] [rbp+24h]

  v10 = a1;
  v11 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v8,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  EtwTraceBeginCallback(89LL);
  v2 = KeUserModeCallback(89LL, &v10, 8LL, v6, &v9);
  EtwTraceEndCallback(89LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8, v3);
  if ( v2 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v6[0];
  if ( (unsigned __int64)(v6[0] + 8LL) < v6[0] || v6[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v6[1] = *v4;
  return result;
}
