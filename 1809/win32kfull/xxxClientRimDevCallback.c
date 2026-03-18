/*
 * XREFs of xxxClientRimDevCallback @ 0x1C02081B8
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x1C01C05BC (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6,
        __int16 a7,
        __int16 a8,
        __int64 a9,
        __int64 a10)
{
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 result; // rax
  _QWORD v18[7]; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+80h] [rbp+8h] BYREF

  memset(v18, 0, sizeof(v18));
  v18[0] = a5;
  v18[1] = a6;
  v18[2] = __PAIR64__(a1, a3);
  v18[3] = __PAIR64__(a4, a2);
  LOWORD(v18[4]) = a7;
  WORD1(v18[4]) = a8;
  v18[5] = a9;
  v18[6] = a10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a8,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  EtwTraceBeginCallback(118LL);
  v14 = KeUserModeCallback(118LL, v18, 56LL, &a5, &v19);
  EtwTraceEndCallback(118LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a8, v15);
  if ( v14 < 0 || v19 != 24 )
    return 0LL;
  v16 = (__int64 *)a5;
  if ( a5 + 8 < a5 || a5 + 8 > MmUserProbeAddress )
    v16 = (__int64 *)MmUserProbeAddress;
  result = *v16;
  a6 = *v16;
  return result;
}
