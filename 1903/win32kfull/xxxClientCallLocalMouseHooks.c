/*
 * XREFs of xxxClientCallLocalMouseHooks @ 0x1C021E220
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCallLocalMouseHooks(int a1, __int128 *a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG64 v8; // rcx
  _DWORD v10[2]; // [rsp+40h] [rbp-48h] BYREF
  __int128 v11; // [rsp+48h] [rbp-40h]
  __int128 v12; // [rsp+58h] [rbp-30h]
  __int64 v13; // [rsp+68h] [rbp-20h]
  int v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+74h] [rbp-14h]
  char v16; // [rsp+90h] [rbp+8h] BYREF
  int v17; // [rsp+98h] [rbp+10h] BYREF
  char v18; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+20h] BYREF

  v10[1] = 0;
  v15 = 0;
  v10[0] = a1;
  v11 = *a2;
  v12 = a2[1];
  v13 = *((_QWORD *)a2 + 4);
  v14 = a3;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v18,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  EtwTraceBeginCallback(120LL);
  v4 = KeUserModeCallback(120LL, v10, 56LL, &v19, &v17);
  EtwTraceEndCallback(120LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v16);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v18,
    v5,
    v6,
    v7);
  if ( v4 < 0 || v17 != 24 )
    return 0LL;
  v8 = v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v8 = MmUserProbeAddress;
  return *(_QWORD *)v8;
}
