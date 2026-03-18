/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C010ACC0
 * Callers:
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     xxxConsoleControl @ 0x1C00B28FC (xxxConsoleControl.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF
  char v9; // [rsp+70h] [rbp+18h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("MSRC 68061: xxxClientFreeWindowClassExtraBytes called for console window!");
  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 472);
  v6[1] = a2;
  v6[0] = v4;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v8,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v6, 16LL, &v10, &v9);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8, v5);
}
