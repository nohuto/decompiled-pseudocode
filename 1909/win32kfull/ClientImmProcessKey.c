/*
 * XREFs of ClientImmProcessKey @ 0x1C00525B4
 * Callers:
 *     xxxImmProcessKey @ 0x1C00526BC (xxxImmProcessKey.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall ClientImmProcessKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[2]; // [rsp+38h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]
  __int64 v13; // [rsp+50h] [rbp-18h]
  int v14; // [rsp+58h] [rbp-10h]
  int v15; // [rsp+5Ch] [rbp-Ch]
  int v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  char v18; // [rsp+80h] [rbp+18h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h]

  v12 = 0;
  v15 = 0;
  v10[0] = a1;
  v10[1] = a2;
  v11 = a3;
  v13 = a4;
  v14 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v18,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(93LL);
  v5 = KeUserModeCallback(93LL, v10, 40LL, &v17, &v16);
  EtwTraceEndCallback(93LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v18,
    v6,
    v7);
  if ( v5 < 0 || v16 != 24 )
    return 0LL;
  v8 = (__int64 *)v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v19 = *v8;
  return result;
}
