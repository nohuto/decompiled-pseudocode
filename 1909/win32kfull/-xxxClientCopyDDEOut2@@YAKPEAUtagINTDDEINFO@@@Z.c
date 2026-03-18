/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0214830
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C021E414 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v10[3]; // [rsp+31h] [rbp-87h] BYREF
  int v11; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v13; // [rsp+50h] [rbp-68h] BYREF
  __int128 v14; // [rsp+60h] [rbp-58h]
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int64 v17; // [rsp+90h] [rbp-28h]

  v13 = *(_OWORD *)a1;
  v14 = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 2);
  v16 = *((_OWORD *)a1 + 3);
  v17 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v10,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(63LL);
  v4 = KeUserModeCallback(63LL, &v13, 72LL, v12, &v11);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v10,
    v5,
    v6);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v14 + 1);
  if ( v4 < 0 || v11 != 24 )
    return 0LL;
  v7 = (__int64 *)v12[0];
  if ( (unsigned __int64)(v12[0] + 8LL) < v12[0] || v12[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  result = *v7;
  v12[1] = *v7;
  return result;
}
