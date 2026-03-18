/*
 * XREFs of xxxClientCallDefaultInputHandler @ 0x1C0206618
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z @ 0x1C01FD394 (-CallDefaultInputHandler@Delivery@InputTraceLogging@@SAXPEBUtagMSG@@@Z.c)
 */

__int64 __fastcall xxxClientCallDefaultInputHandler(struct tagMSG *a1)
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
  InputTraceLogging::Delivery::CallDefaultInputHandler(a1);
  v6[0] = *(_QWORD *)a1;
  LODWORD(v6[1]) = *((_DWORD *)a1 + 2);
  v6[2] = *((_QWORD *)a1 + 2);
  v6[3] = *((_QWORD *)a1 + 3);
  LODWORD(v6[4]) = *((_DWORD *)a1 + 8);
  *(_QWORD *)((char *)&v6[4] + 4) = *(_QWORD *)((char *)a1 + 36);
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
