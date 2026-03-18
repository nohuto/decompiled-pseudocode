/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C021DEE8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+58h] [rbp-30h]
  int v12; // [rsp+5Ch] [rbp-2Ch]
  __int64 v13; // [rsp+60h] [rbp-28h]
  __int64 v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+70h] [rbp-18h]
  __int64 v16; // [rsp+74h] [rbp-14h]
  int v17; // [rsp+7Ch] [rbp-Ch]
  __int64 v18; // [rsp+90h] [rbp+8h] BYREF
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+20h] BYREF

  v12 = 0;
  v17 = 0;
  v10[0] = a1;
  v10[1] = a3;
  v10[2] = *(_QWORD *)a2;
  v11 = *(_DWORD *)(a2 + 8);
  v13 = *(_QWORD *)(a2 + 16);
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_DWORD *)(a2 + 32);
  v16 = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(50LL);
  v4 = KeUserModeCallback(50LL, v10, 64LL, &v21, &v20);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v19,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v20 != 24 )
    return 0LL;
  v8 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v18 = *v8;
  return result;
}
