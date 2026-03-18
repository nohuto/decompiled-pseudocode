/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C021F1CC
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  ULONG64 v15; // rcx
  __int128 v16; // xmm3
  __int128 v17; // xmm4
  __int64 v18; // xmm0_8
  char v20; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-97h] BYREF
  int v22; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v23[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v24[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v24, 0, 0x48uLL);
  v24[1] = a2;
  LODWORD(v24[0]) = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    gdwInAtomicOperation,
    v6,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(71LL);
  v8 = KeUserModeCallback(71LL, v24, 72LL, v23, &v22);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v21,
    v9,
    v10,
    v11);
  if ( v8 < 0 || v22 != 24 )
    return 0LL;
  v12 = (__int64 *)v23[0];
  if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || v23[0] + 8LL > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v13 = *v12;
  v23[1] = *v12;
  v14 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 84) & 1) != 0 && *(_QWORD *)(v14 + 96) == a3 )
      return 0LL;
  }
  v15 = *(_QWORD *)(v23[0] + 16LL);
  if ( v15 + 56 < v15 || v15 + 56 > MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  v16 = *(_OWORD *)(v15 + 16);
  v17 = *(_OWORD *)(v15 + 32);
  v18 = *(_QWORD *)(v15 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v15;
  *(_OWORD *)(a3 + 16) = v16;
  *(_OWORD *)(a3 + 32) = v17;
  *(_QWORD *)(a3 + 48) = v18;
  return (unsigned int)v13;
}
