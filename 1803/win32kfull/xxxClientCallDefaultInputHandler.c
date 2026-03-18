/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C01E0CA8
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD v6[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v7; // [rsp+80h] [rbp+8h] BYREF
  char v8; // [rsp+88h] [rbp+10h] BYREF
  int v9; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  memset(v6, 0, 0x30uLL);
  v6[0] = *(_QWORD *)a1;
  LODWORD(v6[1]) = *(_DWORD *)(a1 + 8);
  v6[2] = *(_QWORD *)(a1 + 16);
  v6[3] = *(_QWORD *)(a1 + 24);
  LODWORD(v6[4]) = *(_DWORD *)(a1 + 32);
  *(_QWORD *)((char *)&v6[4] + 4) = *(_QWORD *)(a1 + 36);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v8,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  EtwTraceBeginCallback(116LL);
  v2 = KeUserModeCallback(116LL, v6, 48LL, &v10, &v9);
  EtwTraceEndCallback(116LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8, v3);
  if ( v2 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v10;
  if ( v10 + 8 < v10 || v10 + 8 > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v7 = *v4;
  return result;
}
