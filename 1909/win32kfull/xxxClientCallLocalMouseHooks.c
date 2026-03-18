/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C021DCE0
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int128 *a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  ULONG64 v6; // rcx
  _DWORD v8[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v9; // [rsp+48h] [rbp-40h]
  __int128 v10; // [rsp+58h] [rbp-30h]
  __int64 v11; // [rsp+68h] [rbp-20h]
  int v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+74h] [rbp-14h]
  char v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  char v16; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  v8[1] = 0;
  v13 = 0;
  v8[0] = a1;
  v9 = *a2;
  v10 = a2[1];
  v11 = *((_QWORD *)a2 + 4);
  v12 = a3;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(120LL);
  v3 = KeUserModeCallback(120LL, v8, 56LL, &v17, &v15);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v16,
    v4,
    v5);
  if ( v3 < 0 || v15 != 24 )
    return 0LL;
  v6 = v17;
  if ( v17 + 8 < v17 || v17 + 8 > MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  return *(_QWORD *)v6;
}
