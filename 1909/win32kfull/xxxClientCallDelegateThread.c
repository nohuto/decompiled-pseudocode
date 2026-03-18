/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C021D9A8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 *v6; // rcx
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+40h] [rbp-48h] BYREF
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  __int64 v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  __int64 v14; // [rsp+74h] [rbp-14h]
  int v15; // [rsp+7Ch] [rbp-Ch]
  __int64 v16; // [rsp+90h] [rbp+8h] BYREF
  char v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v10 = 0;
  v15 = 0;
  v8[0] = a1;
  v8[1] = a3;
  v8[2] = *(_QWORD *)a2;
  v9 = *(_DWORD *)(a2 + 8);
  v11 = *(_QWORD *)(a2 + 16);
  v12 = *(_QWORD *)(a2 + 24);
  v13 = *(_DWORD *)(a2 + 32);
  v14 = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v17,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(50LL);
  v3 = KeUserModeCallback(50LL, v8, 64LL, &v19, &v18);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v17,
    v4,
    v5);
  if ( v3 < 0 || v18 != 24 )
    return 0LL;
  v6 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v6 = (__int64 *)MmUserProbeAddress;
  result = *v6;
  v16 = *v6;
  return result;
}
