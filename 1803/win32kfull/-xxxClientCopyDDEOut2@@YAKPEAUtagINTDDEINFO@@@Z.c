/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C01D86BC
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C01E14B4 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v7[3]; // [rsp+31h] [rbp-87h] BYREF
  int v8; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v10; // [rsp+50h] [rbp-68h] BYREF
  __int128 v11; // [rsp+60h] [rbp-58h]
  __int128 v12; // [rsp+70h] [rbp-48h]
  __int128 v13; // [rsp+80h] [rbp-38h]
  __int64 v14; // [rsp+90h] [rbp-28h]

  v10 = *(_OWORD *)a1;
  v11 = *((_OWORD *)a1 + 1);
  v12 = *((_OWORD *)a1 + 2);
  v13 = *((_OWORD *)a1 + 3);
  v14 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v7,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  EtwTraceBeginCallback(63LL);
  v2 = KeUserModeCallback(63LL, &v10, 72LL, v9, &v8);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v6);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v7, v3);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v11 + 1);
  if ( v2 < 0 || v8 != 24 )
    return 0LL;
  v4 = (__int64 *)v9[0];
  if ( (unsigned __int64)(v9[0] + 8LL) < v9[0] || v9[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v9[1] = *v4;
  return result;
}
