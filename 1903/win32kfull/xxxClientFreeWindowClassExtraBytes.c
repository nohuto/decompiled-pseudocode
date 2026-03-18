/*
 * XREFs of xxxClientFreeWindowClassExtraBytes @ 0x1C00AF848
 * Callers:
 *     xxxConsoleControl @ 0x1C001A2C8 (xxxConsoleControl.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

void __fastcall xxxClientFreeWindowClassExtraBytes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  char v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF
  char v15; // [rsp+70h] [rbp+18h] BYREF
  char v16; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 464);
  v8 = *(_QWORD *)(a1 + 40) - v6;
  v12[1] = a2;
  v12[0] = v8;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v14,
    gdwInAtomicOperation,
    v6,
    v7);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  EtwTraceBeginCallback(124LL);
  KeUserModeCallback(124LL, v12, 16LL, &v16, &v15);
  EtwTraceEndCallback(124LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v13);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v14,
    v9,
    v10,
    v11);
}
