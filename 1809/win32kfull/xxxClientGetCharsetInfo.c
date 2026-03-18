/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C012F0C8
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C012F020 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  _OWORD *v9; // rcx
  __int128 v10; // xmm1
  char v12; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v13[3]; // [rsp+31h] [rbp-67h] BYREF
  int v14; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v15[4]; // [rsp+38h] [rbp-60h] BYREF
  _DWORD v16[10]; // [rsp+58h] [rbp-40h] BYREF

  memset(v16, 0, 0x24uLL);
  v16[0] = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v13,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(69LL);
  v4 = KeUserModeCallback(69LL, v16, 36LL, v15, &v14);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v13, v5);
  if ( v4 < 0 || v14 != 24 )
    return 0LL;
  v6 = (__int64 *)v15[0];
  if ( (unsigned __int64)(v15[0] + 8LL) < v15[0] || v15[0] + 8LL > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  v7 = *v6;
  v15[1] = *v6;
  v8 = *(_QWORD *)(gptiCurrent + 512LL);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 84) & 1) != 0 && *(_OWORD **)(v8 + 96) == a2 )
      return 0LL;
  }
  v9 = *(_OWORD **)(v15[0] + 16LL);
  if ( v9 + 2 < v9 || (unsigned __int64)(v9 + 2) > MmUserProbeAddress )
    v9 = (_OWORD *)MmUserProbeAddress;
  v10 = v9[1];
  *a2 = *v9;
  a2[1] = v10;
  return (unsigned int)v7;
}
