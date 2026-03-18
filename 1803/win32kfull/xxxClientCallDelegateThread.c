/*
 * XREFs of xxxClientCallDelegateThread @ 0x1C012DD20
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  __int64 result; // rax
  _QWORD v10[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+8h] BYREF
  char v12; // [rsp+A8h] [rbp+10h] BYREF
  int v13; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp+20h] BYREF

  memset(v10, 0, 0x40uLL);
  v10[0] = a1;
  v10[1] = a3;
  v10[2] = *(_QWORD *)a2;
  LODWORD(v10[3]) = *(_DWORD *)(a2 + 8);
  v10[4] = *(_QWORD *)(a2 + 16);
  v10[5] = *(_QWORD *)(a2 + 24);
  LODWORD(v10[6]) = *(_DWORD *)(a2 + 32);
  *(_QWORD *)((char *)&v10[6] + 4) = *(_QWORD *)(a2 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v12,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(50LL);
  v6 = KeUserModeCallback(50LL, v10, 64LL, &v14, &v13);
  EtwTraceEndCallback(50LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v12, v7);
  if ( v6 < 0 || v13 != 24 )
    return 0LL;
  v8 = (__int64 *)v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  v11 = *v8;
  return result;
}
