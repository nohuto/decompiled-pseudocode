/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C01FE4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebx
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  _QWORD v15[11]; // [rsp+40h] [rbp-58h] BYREF
  char v16; // [rsp+A0h] [rbp+8h] BYREF
  char v17; // [rsp+A8h] [rbp+10h] BYREF
  int v18; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  memset(v15, 0, 0x30uLL);
  if ( a1 )
    v9 = *a1;
  else
    v9 = 0LL;
  v15[0] = v9;
  LODWORD(v15[1]) = v7;
  v15[2] = a3;
  v15[3] = a4;
  v15[4] = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v10 = *(_QWORD *)(gpsi + 424LL);
  else
    v10 = *(_QWORD *)(gpsi + 616LL);
  v15[5] = v10;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  EtwTraceBeginCallback(125LL);
  v11 = KeUserModeCallback(125LL, v15, 48LL, &v19, &v18);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v17);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v16, v12);
  if ( v11 < 0 || v18 != 24 )
    return 0LL;
  v13 = v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v13 = MmUserProbeAddress;
  return *(_QWORD *)v13;
}
