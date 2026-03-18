/*
 * XREFs of xxxClientRimDevCallback @ 0x1C021FBB0
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01D435C (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 result; // rax
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-30h]
  int v18; // [rsp+4Ch] [rbp-2Ch]
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]
  __int16 v21; // [rsp+58h] [rbp-20h]
  __int16 v22; // [rsp+5Ah] [rbp-1Eh]
  int v23; // [rsp+5Ch] [rbp-1Ch]
  __int64 v24; // [rsp+60h] [rbp-18h]
  __int64 v25; // [rsp+68h] [rbp-10h]
  int v26; // [rsp+80h] [rbp+8h] BYREF

  v23 = 0;
  v16[0] = a5;
  v16[1] = a6;
  v17 = a3;
  v18 = a1;
  v19 = a2;
  v20 = a4;
  v21 = a7;
  v22 = a8;
  v24 = a9;
  v25 = a10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a8,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  EtwTraceBeginCallback(118LL);
  v10 = KeUserModeCallback(118LL, v16, 56LL, &a5, &v26);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a8,
    v11,
    v12,
    v13);
  if ( v10 < 0 || v26 != 24 )
    return 0LL;
  v14 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
    v14 = (__int64 *)MmUserProbeAddress;
  result = *v14;
  a6 = *v14;
  return result;
}
