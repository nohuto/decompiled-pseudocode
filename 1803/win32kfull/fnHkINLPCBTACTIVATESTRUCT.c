/*
 * XREFs of fnHkINLPCBTACTIVATESTRUCT @ 0x1C0130A44
 * Callers:
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall fnHkINLPCBTACTIVATESTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v9; // ebx
  __int64 v10; // rdx
  ULONG64 v11; // rcx
  _OWORD v13[4]; // [rsp+40h] [rbp-48h] BYREF
  char v14; // [rsp+90h] [rbp+8h] BYREF
  int v15; // [rsp+98h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+A0h] [rbp+18h] BYREF

  memset(v13, 0, 0x30uLL);
  LODWORD(v13[0]) = a1;
  *((_QWORD *)&v13[0] + 1) = a2;
  *(_DWORD *)(a3 + 4) = 0;
  v13[1] = *(_OWORD *)a3;
  *(_QWORD *)&v13[2] = a4;
  *((_QWORD *)&v13[2] + 1) = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  EtwTraceBeginCallback(41LL);
  v9 = KeUserModeCallback(41LL, v13, 48LL, &v16, &v15);
  EtwTraceEndCallback(41LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v14);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5, v10);
  if ( v9 < 0 || v15 != 24 )
    return 0LL;
  v11 = v16;
  if ( v16 + 8 < v16 || v16 + 8 > MmUserProbeAddress )
    v11 = MmUserProbeAddress;
  return *(_QWORD *)v11;
}
