/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C0206918
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  _QWORD v10[11]; // [rsp+40h] [rbp-58h] BYREF
  char v11; // [rsp+A0h] [rbp+8h] BYREF
  int v12; // [rsp+A8h] [rbp+10h] BYREF
  char v13; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+B8h] [rbp+20h] BYREF

  memset(v10, 0, 0x38uLL);
  LODWORD(v10[0]) = a1;
  *(_OWORD *)&v10[1] = *(_OWORD *)a2;
  *(_OWORD *)&v10[3] = *(_OWORD *)(a2 + 16);
  v10[5] = *(_QWORD *)(a2 + 32);
  LODWORD(v10[6]) = a3;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v13,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  EtwTraceBeginCallback(120LL);
  v6 = KeUserModeCallback(120LL, v10, 56LL, &v14, &v12);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v11);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v13, v7);
  if ( v6 < 0 || v12 != 24 )
    return 0LL;
  v8 = v14;
  if ( v14 + 8 < v14 || v14 + 8 > MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  return *(_QWORD *)v8;
}
