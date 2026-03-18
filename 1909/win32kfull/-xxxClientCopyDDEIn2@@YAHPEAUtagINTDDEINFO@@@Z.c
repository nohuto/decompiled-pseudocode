/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C02146C4
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C021DF5C (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 result; // rax
  char v8; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v9[3]; // [rsp+31h] [rbp-87h] BYREF
  int v10; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v12[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v13; // [rsp+90h] [rbp-28h]

  v12[0] = *(_OWORD *)a1;
  v12[1] = *((_OWORD *)a1 + 1);
  v12[2] = *((_OWORD *)a1 + 2);
  v12[3] = *((_OWORD *)a1 + 3);
  v13 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v9,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  EtwTraceBeginCallback(61LL);
  v3 = KeUserModeCallback(61LL, v12, 72LL, v11, &v10);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v9, v4, v5);
  if ( v3 < 0 || v10 != 24 )
    return 0LL;
  v6 = (__int64 *)v11[0];
  if ( (unsigned __int64)(v11[0] + 8LL) < v11[0] || v11[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v11[1] = *v6;
  return result;
}
