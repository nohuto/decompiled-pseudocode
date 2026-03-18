/*
 * XREFs of xxxClientBroadcastThemeChange @ 0x1C012BE14
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientBroadcastThemeChange(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v7[3]; // [rsp+31h] [rbp-47h] BYREF
  int v8; // [rsp+34h] [rbp-44h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-40h] BYREF
  _QWORD v10[2]; // [rsp+50h] [rbp-28h] BYREF

  v10[0] = a1;
  v10[1] = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v7,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  EtwTraceBeginCallback(121LL);
  v2 = KeUserModeCallback(121LL, v10, 16LL, v9, &v8);
  EtwTraceEndCallback(121LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v7, v3);
  if ( v2 < 0 || v8 != 24 )
    return 0LL;
  v4 = (__int64 *)v9[0];
  if ( (unsigned __int64)(v9[0] + 8LL) < v9[0] || v9[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v9[1] = *v4;
  return result;
}
