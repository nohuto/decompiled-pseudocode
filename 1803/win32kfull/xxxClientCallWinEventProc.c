/*
 * XREFs of xxxClientCallWinEventProc @ 0x1C001F5DC
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxClientCallWinEventProc(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v6; // rax
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 result; // rax
  _QWORD v15[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  char v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  memset(v15, 0, 0x30uLL);
  v15[0] = a1;
  if ( a2 )
    v6 = *a2;
  else
    v6 = 0LL;
  v15[1] = v6;
  v15[3] = *(_QWORD *)(a3 + 24);
  LODWORD(v15[2]) = *(_DWORD *)(a3 + 20);
  v15[4] = *(_QWORD *)(a3 + 32);
  v15[5] = *(_QWORD *)(a3 + 40);
  v7 = 1;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  if ( ExIsResourceAcquiredExclusiveLite(gpresUser) || !ExIsResourceAcquiredSharedLite(gpresUser) )
    v7 = 0;
  LOBYTE(v16) = v7;
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  EtwTraceBeginCallback(88LL);
  v12 = KeUserModeCallback(88LL, v15, 48LL, &v19, &v18);
  EtwTraceEndCallback(88LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17);
  if ( v12 < 0 || v18 != 24 )
    return 0LL;
  v13 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  result = *v13;
  v16 = *v13;
  return result;
}
