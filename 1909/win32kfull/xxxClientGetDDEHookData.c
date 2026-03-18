/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C021EC8C
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C020B98C (xxxDDETrackPostHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  __int64 v16; // xmm0_8
  char v18; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v19[3]; // [rsp+31h] [rbp-97h] BYREF
  int v20; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v21[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v22[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v22, 0, 0x48uLL);
  v22[1] = a2;
  LODWORD(v22[0]) = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v19,
    gdwInAtomicOperation,
    v6);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(71LL);
  v7 = KeUserModeCallback(71LL, v22, 72LL, v21, &v20);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v19,
    v8,
    v9);
  if ( v7 < 0 || v20 != 24 )
    return 0LL;
  v10 = (__int64 *)v21[0];
  if ( (unsigned __int64)(v21[0] + 8LL) < v21[0] || v21[0] + 8LL > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v21[1] = *v10;
  v12 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v12 )
  {
    if ( (*(_DWORD *)(v12 + 84) & 1) != 0 && *(_QWORD *)(v12 + 96) == a3 )
      return 0LL;
  }
  v13 = *(_QWORD *)(v21[0] + 16LL);
  if ( v13 + 56 < v13 || v13 + 56 > MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  v14 = *(_OWORD *)(v13 + 16);
  v15 = *(_OWORD *)(v13 + 32);
  v16 = *(_QWORD *)(v13 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v13;
  *(_OWORD *)(a3 + 16) = v14;
  *(_OWORD *)(a3 + 32) = v15;
  *(_QWORD *)(a3 + 48) = v16;
  return (unsigned int)v11;
}
