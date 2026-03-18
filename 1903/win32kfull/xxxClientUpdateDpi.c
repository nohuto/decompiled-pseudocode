/*
 * XREFs of xxxClientUpdateDpi @ 0x1C021FD3C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientUpdateDpi(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v13 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(58LL);
  v4 = KeUserModeCallback(58LL, &v13, 4LL, v10, &v14);
  EtwTraceEndCallback(58LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v14 != 24 )
    return 0LL;
  v8 = (__int64 *)v10[0];
  if ( v10[0] + 8 < v10[0] || v10[0] + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v12 = *v8;
  return result;
}
