/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1C00FBDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 result; // rax
  char v10; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v11[3]; // [rsp+31h] [rbp-67h] BYREF
  int v12; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+70h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp-20h]

  v14[0] = a1;
  v14[1] = a2;
  v15 = *a3;
  v16 = a4;
  v17 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v11,
    gdwInAtomicOperation,
    (__int64)a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  EtwTraceBeginCallback(87LL);
  v5 = KeUserModeCallback(87LL, v14, 48LL, v13, &v12);
  EtwTraceEndCallback(87LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v10);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v11,
    v6,
    v7);
  if ( v5 < 0 || v12 != 24 )
    return 0LL;
  v8 = (__int64 *)v13[0];
  if ( (unsigned __int64)(v13[0] + 8LL) < v13[0] || v13[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v13[1] = *v8;
  return result;
}
