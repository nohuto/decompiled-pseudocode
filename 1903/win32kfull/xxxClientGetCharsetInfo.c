/*
 * XREFs of xxxClientGetCharsetInfo @ 0x1C013B3D0
 * Callers:
 *     EditionInitSystemCharsetInfoForLayout @ 0x1C013B320 (EditionInitSystemCharsetInfoForLayout.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientGetCharsetInfo(int a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  char v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[3]; // [rsp+31h] [rbp-67h] BYREF
  int v17; // [rsp+34h] [rbp-64h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-60h] BYREF
  int v19; // [rsp+58h] [rbp-40h] BYREF
  __int128 v20; // [rsp+5Ch] [rbp-3Ch]
  __int128 v21; // [rsp+6Ch] [rbp-2Ch]

  v20 = 0LL;
  v21 = 0LL;
  v19 = a1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  EtwTraceBeginCallback(69LL);
  v5 = KeUserModeCallback(69LL, &v19, 36LL, v18, &v17);
  EtwTraceEndCallback(69LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v15);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v16,
    v6,
    v7,
    v8);
  if ( v5 < 0 || v17 != 24 )
    return 0LL;
  v9 = (__int64 *)v18[0];
  if ( (unsigned __int64)(v18[0] + 8LL) < v18[0] || v18[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v18[1] = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(_OWORD **)(v11 + 96) == a2 )
      return 0LL;
  }
  v12 = *(_OWORD **)(v18[0] + 16LL);
  if ( v12 + 2 < v12 || (unsigned __int64)(v12 + 2) > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v12[1];
  *a2 = *v12;
  a2[1] = v13;
  return (unsigned int)v10;
}
