/*
 * XREFs of xxxClientWOWGetProcModule @ 0x1C00B08F8
 * Callers:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0134CC8 (xxxSetClassData.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientWOWGetProcModule(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(90LL);
  v4 = KeUserModeCallback(90LL, &v14, 8LL, v10, &v13);
  EtwTraceEndCallback(90LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v10[0];
  if ( v10[0] + 8 < v10[0] || v10[0] + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v11 = *v8;
  return result;
}
