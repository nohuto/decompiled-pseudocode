/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C0019610
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v11; // [rsp+90h] [rbp+8h] BYREF
  char v12; // [rsp+98h] [rbp+10h] BYREF
  int v13; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+20h] BYREF

  memset(v10, 0, 0x30uLL);
  v10[0] = a1;
  if ( a2 )
    v6 = *a2;
  else
    v6 = 0LL;
  v10[1] = v6;
  v10[3] = *(_QWORD *)(a3 + 32);
  LODWORD(v10[2]) = *(_DWORD *)(a3 + 28);
  v10[4] = *(_QWORD *)(a3 + 40);
  v10[5] = *(_QWORD *)(a3 + 48);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(88LL);
  v7 = KeUserModeCallback(88LL, v10, 48LL, &v14, &v13);
  EtwTraceEndCallback(88LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12);
  if ( v7 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v11 = *v8;
  return result;
}
