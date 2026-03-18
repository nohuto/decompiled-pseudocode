/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C01153D0
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C0115320 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  char v13; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v14[3]; // [rsp+31h] [rbp-67h] BYREF
  int v15; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-60h] BYREF
  int v17; // [rsp+58h] [rbp-40h] BYREF
  __int128 v18; // [rsp+5Ch] [rbp-3Ch]
  __int128 v19; // [rsp+6Ch] [rbp-2Ch]

  v18 = 0LL;
  v19 = 0LL;
  v17 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(69LL);
  v4 = KeUserModeCallback(69LL, &v17, 36LL, v16, &v15);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v14,
    v5,
    v6);
  if ( v4 < 0 || v15 != 24 )
    return 0LL;
  v7 = (__int64 *)v16[0];
  if ( (unsigned __int64)(v16[0] + 8LL) < v16[0] || v16[0] + 8LL > MmUserProbeAddress )
    v7 = (__int64 *)MmUserProbeAddress;
  v8 = *v7;
  v16[1] = *v7;
  v9 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 84) & 1) != 0 && *(_OWORD **)(v9 + 96) == a2 )
      return 0LL;
  }
  v10 = *(_OWORD **)(v16[0] + 16LL);
  if ( v10 + 2 < v10 || (unsigned __int64)(v10 + 2) > MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v11 = v10[1];
  *a2 = *v10;
  a2[1] = v11;
  return (unsigned int)v8;
}
