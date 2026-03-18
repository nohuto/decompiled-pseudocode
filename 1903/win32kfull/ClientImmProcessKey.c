/*
 * XREFs of ClientImmProcessKey @ 0x1C00B1754
 * Callers:
 *     xxxImmProcessKey @ 0x1C00B185C (xxxImmProcessKey.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+38h] [rbp-30h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  __int64 v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+58h] [rbp-10h]
  int v16; // [rsp+5Ch] [rbp-Ch]
  int v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+10h] BYREF
  char v19; // [rsp+80h] [rbp+18h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h]

  v13 = 0;
  v16 = 0;
  v11[0] = a1;
  v11[1] = a2;
  v12 = a3;
  v14 = a4;
  v15 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v5 = KeUserModeCallback(93LL, v11, 40LL, &v18, &v17);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v17 != 24 )
    return 0LL;
  v9 = (__int64 *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  result = *v9;
  v20 = *v9;
  return result;
}
