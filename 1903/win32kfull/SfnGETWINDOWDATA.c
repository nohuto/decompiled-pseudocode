/*
 * XREFs of SfnGETWINDOWDATA @ 0x1C0215A50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall SfnGETWINDOWDATA(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  int v20; // [rsp+48h] [rbp-50h]
  int v21; // [rsp+4Ch] [rbp-4Ch]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int64 v23; // [rsp+58h] [rbp-40h]
  __int64 v24; // [rsp+60h] [rbp-38h]
  __int64 v25; // [rsp+68h] [rbp-30h]
  char v26; // [rsp+A0h] [rbp+8h] BYREF
  char v27; // [rsp+A8h] [rbp+10h] BYREF
  int v28; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v29; // [rsp+B8h] [rbp+20h] BYREF

  v7 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v21 = 0;
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0LL;
  v19 = v11;
  v20 = v7;
  v22 = a3;
  v23 = a4;
  v24 = a5;
  if ( (*(_BYTE *)(a1[5] + 18) & 8) != 0 )
    v12 = *(_QWORD *)(gpsi + 424LL);
  else
    v12 = *(_QWORD *)(gpsi + 616LL);
  v25 = v12;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v26,
    gdwInAtomicOperation,
    v9,
    v10);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  EtwTraceBeginCallback(125LL);
  v13 = KeUserModeCallback(125LL, &v19, 48LL, &v29, &v28);
  EtwTraceEndCallback(125LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v27);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v26,
    v14,
    v15,
    v16);
  if ( v13 < 0 || v28 != 24 )
    return 0LL;
  v17 = v29;
  if ( v29 + 8 < v29 || v29 + 8 > MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  return *(_QWORD *)v17;
}
