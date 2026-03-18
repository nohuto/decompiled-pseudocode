/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C02063B0
 * Callers:
 *     xxxHkCallHook @ 0x1C002AC90 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  ULONG64 v18; // rcx
  __int64 v19; // xmm0_8
  _QWORD v21[13]; // [rsp+50h] [rbp-68h] BYREF
  char v22; // [rsp+C0h] [rbp+8h] BYREF
  int v23; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+D0h] [rbp+18h] BYREF

  memset(v21, 0, 0x48uLL);
  LODWORD(v21[0]) = a1;
  v21[1] = a2;
  LODWORD(v21[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v21[5] = *(_OWORD *)a3;
    v21[7] = *(_QWORD *)(a3 + 16);
  }
  v21[3] = a4;
  v21[4] = a5;
  LODWORD(v21[8]) = 0;
  if ( a2 )
  {
    LOBYTE(v9) = 5;
    v10 = HMValidateHandle(a2, v9);
    if ( v10 )
    {
      v11 = (*(_BYTE *)(v10 + 64) & 4) == 0;
      v12 = v21[8];
      if ( !v11 )
        v12 = 1;
      LODWORD(v21[8]) = v12;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  EtwTraceBeginCallback(49LL);
  v13 = KeUserModeCallback(49LL, v21, 72LL, &v24, &v23);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v22);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5, v14);
  if ( v13 >= 0 && v23 == 24 )
  {
    v15 = (__int64 *)v24;
    if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
      v15 = (__int64 *)MmUserProbeAddress;
    v16 = *v15;
    if ( !a3 )
      return v16;
    v17 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v17 || (*(_DWORD *)(v17 + 84) & 1) == 0 || *(_QWORD *)(v17 + 96) != a3 )
    {
      v18 = *(_QWORD *)(v24 + 16);
      if ( v18 + 24 < v18 || v18 + 24 > MmUserProbeAddress )
        v18 = MmUserProbeAddress;
      v19 = *(_QWORD *)(v18 + 16);
      *(_OWORD *)a3 = *(_OWORD *)v18;
      *(_QWORD *)(a3 + 16) = v19;
      return v16;
    }
  }
  return -1LL;
}
