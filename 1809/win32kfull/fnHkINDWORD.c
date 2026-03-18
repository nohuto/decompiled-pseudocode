/*
 * XREFs of fnHkINDWORD @ 0x1C001975C
 * Callers:
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v10; // rdi
  int v11; // ebx
  __int64 *v12; // rcx
  __int64 v13; // r8
  _DWORD *v14; // rcx
  _QWORD v16[10]; // [rsp+48h] [rbp-50h] BYREF
  char v17; // [rsp+A0h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp+10h] BYREF

  memset(v16, 0, 0x30uLL);
  LODWORD(v16[0]) = a1;
  v16[1] = a2;
  v16[5] = a3;
  v16[2] = a4;
  v16[3] = a5;
  v10 = a6;
  LODWORD(v16[4]) = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(40LL);
  v11 = KeUserModeCallback(40LL, v16, 48LL, &v18, &a6);
  EtwTraceEndCallback(40LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v11 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v12 = (__int64 *)v18;
  if ( v18 + 8 < v18 || v18 + 8 > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  v13 = *v12;
  v14 = *(_DWORD **)(v18 + 16);
  if ( v14 + 1 < v14 || (unsigned __int64)(v14 + 1) > MmUserProbeAddress )
    v14 = (_DWORD *)MmUserProbeAddress;
  *v10 ^= ((unsigned __int8)*v14 ^ (unsigned __int8)*v10) & 0x10;
  return v13;
}
