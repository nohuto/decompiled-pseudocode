/*
 * XREFs of fnHkINLPRECT @ 0x1C021D3E4
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall fnHkINLPRECT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int128 *v12; // rcx
  char v14; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v15[3]; // [rsp+31h] [rbp-77h] BYREF
  int v16; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v18; // [rsp+58h] [rbp-50h]
  _DWORD v19[2]; // [rsp+68h] [rbp-40h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  __int128 v21; // [rsp+78h] [rbp-30h]
  __int64 v22; // [rsp+88h] [rbp-20h]
  __int64 v23; // [rsp+90h] [rbp-18h]

  v19[1] = 0;
  v19[0] = a1;
  v20 = a2;
  v21 = *a3;
  v22 = a4;
  v23 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v15,
    gdwInAtomicOperation,
    (__int64)a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(48LL);
  v6 = KeUserModeCallback(48LL, v19, 48LL, v17, &v16);
  EtwTraceEndCallback(48LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)v15,
    v7,
    v8);
  if ( v6 < 0 || v16 != 24 )
    return 0LL;
  v9 = (__int64 *)v17[0];
  if ( (unsigned __int64)(v17[0] + 8LL) < v17[0] || v17[0] + 8LL > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v17[1] = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(__int128 **)(v11 + 96) == a3 )
      return 0LL;
  }
  v12 = *(__int128 **)(v17[0] + 16LL);
  if ( v12 + 1 < v12 || (unsigned __int64)(v12 + 1) > MmUserProbeAddress )
    v12 = (__int128 *)MmUserProbeAddress;
  v18 = *v12;
  *a3 = v18;
  return v10;
}
