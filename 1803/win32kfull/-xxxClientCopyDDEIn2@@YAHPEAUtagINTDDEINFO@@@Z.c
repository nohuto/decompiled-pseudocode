/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x1C01D8568
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1C01E1060 (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1)
{
  int v1; // ebx
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v6[3]; // [rsp+31h] [rbp-87h] BYREF
  int v7; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v9[4]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v10; // [rsp+90h] [rbp-28h]

  v9[0] = *(_OWORD *)a1;
  v9[1] = *((_OWORD *)a1 + 1);
  v9[2] = *((_OWORD *)a1 + 2);
  v9[3] = *((_OWORD *)a1 + 3);
  v10 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v6,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v9, 72LL, v8, &v7);
  EtwTraceEndCallback(61LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v6, v2);
  if ( v1 < 0 || v7 != 24 )
    return 0LL;
  v3 = (__int64 *)v8[0];
  if ( (unsigned __int64)(v8[0] + 8LL) < v8[0] || v8[0] + 8LL > MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  result = *v3;
  v8[1] = *v3;
  return result;
}
