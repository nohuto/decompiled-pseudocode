/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C0215510
 * Callers:
 *     <none>
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // r8
  ULONG64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+4Ch] [rbp-4Ch]
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 v21; // [rsp+58h] [rbp-40h]
  __int64 v22; // [rsp+60h] [rbp-38h]
  __int64 v23; // [rsp+68h] [rbp-30h]
  char v24; // [rsp+A0h] [rbp+8h] BYREF
  char v25; // [rsp+A8h] [rbp+10h] BYREF
  int v26; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v19 = 0;
  if ( a1 )
    v10 = *a1;
  else
    v10 = 0LL;
  v17 = v10;
  v18 = v7;
  v20 = a3;
  v21 = a4;
  v22 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v11 = *(_QWORD *)(gpsi + 424LL);
  else
    v11 = *(_QWORD *)(gpsi + 616LL);
  v23 = v11;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v24,
    gdwInAtomicOperation,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  EtwTraceBeginCallback(125LL);
  v12 = KeUserModeCallback(125LL, &v17, 48LL, &v27, &v26);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v25);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v24,
    v13,
    v14);
  if ( v12 < 0 || v26 != 24 )
    return 0LL;
  v15 = v27;
  if ( v27 + 8 < v27 || v27 + 8 > MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  return *(_QWORD *)v15;
}
