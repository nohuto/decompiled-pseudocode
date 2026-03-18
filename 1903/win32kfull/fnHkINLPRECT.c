/*
 * XREFs of fnHkINLPRECT @ 0x1C021D924
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int128 *v13; // rcx
  char v15; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-77h] BYREF
  int v17; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v19; // [rsp+58h] [rbp-50h]
  _DWORD v20[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v21; // [rsp+70h] [rbp-38h]
  __int128 v22; // [rsp+78h] [rbp-30h]
  __int64 v23; // [rsp+88h] [rbp-20h]
  __int64 v24; // [rsp+90h] [rbp-18h]

  v20[1] = 0;
  v20[0] = a1;
  v21 = a2;
  v22 = *a3;
  v23 = a4;
  v24 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation,
    (__int64)a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v20, 48LL, v18, &v17);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v7,
    v8,
    v9);
  if ( v6 < 0 || v17 != 24 )
    return 0LL;
  v10 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v18[1] = *v10;
  v12 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 1) != 0 && *(__int128 **)(v12 + 96) == a3 )
      return 0LL;
  }
  v13 = *(__int128 **)(v18[0] + 16LL);
  if ( v13 + 1 < v13 || (unsigned __int64)(v13 + 1) > MmUserProbeAddress )
    v13 = (__int128 *)MmUserProbeAddress;
  v19 = *v13;
  *a3 = v19;
  return v11;
}
