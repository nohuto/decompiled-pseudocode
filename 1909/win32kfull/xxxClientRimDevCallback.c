/*
 * XREFs of xxxClientRimDevCallback @ 0x1C021F670
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01D41CC (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 result; // rax
  _QWORD v15[2]; // [rsp+38h] [rbp-40h] BYREF
  int v16; // [rsp+48h] [rbp-30h]
  int v17; // [rsp+4Ch] [rbp-2Ch]
  int v18; // [rsp+50h] [rbp-28h]
  int v19; // [rsp+54h] [rbp-24h]
  __int16 v20; // [rsp+58h] [rbp-20h]
  __int16 v21; // [rsp+5Ah] [rbp-1Eh]
  int v22; // [rsp+5Ch] [rbp-1Ch]
  __int64 v23; // [rsp+60h] [rbp-18h]
  __int64 v24; // [rsp+68h] [rbp-10h]
  int v25; // [rsp+80h] [rbp+8h] BYREF

  v22 = 0;
  v15[0] = a5;
  v15[1] = a6;
  v16 = a3;
  v17 = a1;
  v18 = a2;
  v19 = a4;
  v20 = a7;
  v21 = a8;
  v23 = a9;
  v24 = a10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a8,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  EtwTraceBeginCallback(118LL);
  v10 = KeUserModeCallback(118LL, v15, 56LL, &a5, &v25);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a8,
    v11,
    v12);
  if ( v10 < 0 || v25 != 24 )
    return 0LL;
  v13 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  result = *v13;
  a6 = *v13;
  return result;
}
