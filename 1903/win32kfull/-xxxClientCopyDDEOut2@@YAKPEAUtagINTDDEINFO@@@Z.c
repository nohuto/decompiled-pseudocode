/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0214D70
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x1C021E954 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 result; // rax
  char v11; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-87h] BYREF
  int v13; // [rsp+34h] [rbp-84h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-80h] BYREF
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int128 v16; // [rsp+60h] [rbp-58h]
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  __int64 v19; // [rsp+90h] [rbp-28h]

  v15 = *(_OWORD *)a1;
  v16 = *((_OWORD *)a1 + 1);
  v17 = *((_OWORD *)a1 + 2);
  v18 = *((_OWORD *)a1 + 3);
  v19 = *((_QWORD *)a1 + 8);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(63LL);
  v5 = KeUserModeCallback(63LL, &v15, 72LL, v14, &v13);
  EtwTraceEndCallback(63LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    v6,
    v7,
    v8);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v16 + 1);
  if ( v5 < 0 || v13 != 24 )
    return 0LL;
  v9 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  result = *v9;
  v14[1] = *v9;
  return result;
}
