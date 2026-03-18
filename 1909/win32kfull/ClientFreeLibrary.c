/*
 * XREFs of ClientFreeLibrary @ 0x1C0102438
 * Callers:
 *     xxxLoadHmodIndex @ 0x1C005383C (xxxLoadHmodIndex.c)
 *     xxxDoSysExpunge @ 0x1C01022DC (xxxDoSysExpunge.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientFreeLibrary(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 result; // rax
  unsigned __int64 v8[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  char v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(68LL);
  v3 = KeUserModeCallback(68LL, &v12, 8LL, v8, &v11);
  EtwTraceEndCallback(68LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    v4,
    v5);
  if ( v3 < 0 || v11 != 24 )
    return 0LL;
  v6 = (__int64 *)v8[0];
  if ( v8[0] + 8 < v8[0] || v8[0] + 8 > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v9 = *v6;
  return result;
}
