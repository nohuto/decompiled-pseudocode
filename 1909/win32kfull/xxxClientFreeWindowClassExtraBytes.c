/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C0050668
 * Callers:
 *     xxxConsoleControl @ 0x1C0020828 (xxxConsoleControl.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD v8[5]; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  char v11; // [rsp+70h] [rbp+18h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x800) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v4 = *(_QWORD *)(a1 + 40) - *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 464);
  v8[1] = a2;
  v8[0] = v4;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    gdwInAtomicOperation,
    v5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v8, 16LL, &v12, &v11);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v9);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v10,
    v6,
    v7);
}
