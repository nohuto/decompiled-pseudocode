/*
 * XREFs of xxxClientCharToWchar @ 0x1C021E37C
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01F6A70 (EditionClientCharToWchar.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+60h] [rbp+8h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  __int16 v13; // [rsp+70h] [rbp+18h] BYREF
  __int16 v14; // [rsp+72h] [rbp+1Ah]
  int v15; // [rsp+78h] [rbp+20h] BYREF

  v13 = a1;
  v14 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(82LL);
  v4 = KeUserModeCallback(82LL, &v13, 4LL, v10, &v15);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v15 != 24 )
    return 95LL;
  v8 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || v10[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v10[1] = *v8;
  return result;
}
