/*
 * XREFs of xxxClientGetDDEHookData @ 0x1C01E1C74
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C01D06BC (xxxDDETrackPostHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxClientGetDDEHookData(int a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  __int128 v12; // xmm3
  __int128 v13; // xmm0
  __int64 v14; // xmm1_8
  char v16; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v17[3]; // [rsp+31h] [rbp-97h] BYREF
  int v18; // [rsp+34h] [rbp-94h] BYREF
  _QWORD v19[5]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v20[10]; // [rsp+60h] [rbp-68h] BYREF

  memset(v20, 0, 0x48uLL);
  v20[1] = a2;
  LODWORD(v20[0]) = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v17,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(71LL);
  v6 = KeUserModeCallback(71LL, v20, 72LL, v19, &v18);
  EtwTraceEndCallback(71LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v17, v7);
  if ( v6 < 0 || v18 != 24 )
    return 0LL;
  v8 = (__int64 *)v19[0];
  if ( (unsigned __int64)(v19[0] + 8LL) < v19[0] || v19[0] + 8LL > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v19[1] = *v8;
  v10 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v10 + 84) & 1) != 0 && *(_QWORD *)(v10 + 96) == a3 )
      return 0LL;
  }
  v11 = *(_QWORD *)(v19[0] + 16LL);
  if ( v11 + 56 < v11 || v11 + 56 > MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  v12 = *(_OWORD *)(v11 + 16);
  v13 = *(_OWORD *)(v11 + 32);
  v14 = *(_QWORD *)(v11 + 48);
  *(_OWORD *)a3 = *(_OWORD *)v11;
  *(_OWORD *)(a3 + 16) = v12;
  *(_OWORD *)(a3 + 32) = v13;
  *(_QWORD *)(a3 + 48) = v14;
  return (unsigned int)v9;
}
