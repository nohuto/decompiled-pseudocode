/*
 * XREFs of ClientFreeLibrary @ 0x1C00D8C60
 * Callers:
 *     xxxDoSysExpunge @ 0x1C00D7298 (xxxDoSysExpunge.c)
 *     xxxLoadHmodIndex @ 0x1C00D86B0 (xxxLoadHmodIndex.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientFreeLibrary(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  int v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v7,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  EtwTraceBeginCallback(68LL);
  v1 = KeUserModeCallback(68LL, &v9, 8LL, v5, &v8);
  EtwTraceEndCallback(68LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v7, v2);
  if ( v1 < 0 || v8 != 24 )
    return 0LL;
  v3 = (__int64 *)v5[0];
  if ( v5[0] + 8 < v5[0] || v5[0] + 8 > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v6 = *v3;
  return result;
}
