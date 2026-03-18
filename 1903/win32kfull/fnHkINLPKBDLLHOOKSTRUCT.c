/*
 * XREFs of fnHkINLPKBDLLHOOKSTRUCT @ 0x1C021D644
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPKBDLLHOOKSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 result; // rax
  char v11; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v12[3]; // [rsp+31h] [rbp-67h] BYREF
  int v13; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v16; // [rsp+58h] [rbp-40h]
  __int64 v17; // [rsp+60h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp-30h]
  __int128 v19; // [rsp+70h] [rbp-28h]
  __int64 v20; // [rsp+80h] [rbp-18h]

  v15[1] = 0;
  v15[0] = a1;
  v16 = a2;
  v19 = *(_OWORD *)a3;
  v20 = *(_QWORD *)(a3 + 16);
  v17 = a4;
  v18 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(45LL);
  v5 = KeUserModeCallback(45LL, v15, 56LL, v14, &v13);
  EtwTraceEndCallback(45LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v12,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v13 != 24 )
    return 0LL;
  v9 = (__int64 *)v14[0];
  if ( (unsigned __int64)(v14[0] + 8LL) < v14[0] || v14[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  result = *v9;
  v14[1] = *v9;
  return result;
}
