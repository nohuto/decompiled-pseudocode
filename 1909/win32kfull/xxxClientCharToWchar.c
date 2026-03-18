/*
 * XREFs of xxxClientCharToWchar @ 0x1C021DE3C
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01F67C0 (EditionClientCharToWchar.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 result; // rax
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  __int16 v11; // [rsp+70h] [rbp+18h] BYREF
  __int16 v12; // [rsp+72h] [rbp+1Ah]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v11 = a1;
  v12 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(82LL);
  v3 = KeUserModeCallback(82LL, &v11, 4LL, v8, &v13);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    v4,
    v5);
  if ( v3 < 0 || v13 != 24 )
    return 95LL;
  v6 = (__int64 *)v8[0];
  if ( (unsigned __int64)(v8[0] + 8LL) < v8[0] || v8[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v8[1] = *v6;
  return result;
}
