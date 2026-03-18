/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C01E0A58
 * Callers:
 *     xxxHkCallHook @ 0x1C0042460 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  ULONG64 v17; // rcx
  __int64 v18; // xmm1_8
  _QWORD v20[13]; // [rsp+50h] [rbp-68h] BYREF
  char v21; // [rsp+C0h] [rbp+8h] BYREF
  int v22; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+D0h] [rbp+18h] BYREF

  memset(v20, 0, 0x48uLL);
  LODWORD(v20[0]) = a1;
  v20[1] = a2;
  LODWORD(v20[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v20[5] = *(_OWORD *)a3;
    v20[7] = *(_QWORD *)(a3 + 16);
  }
  v20[3] = a4;
  v20[4] = a5;
  LODWORD(v20[8]) = 0;
  if ( a2 )
  {
    v9 = HMValidateHandle(a2, 5);
    if ( v9 )
    {
      v10 = (*(_BYTE *)(v9 + 64) & 4) == 0;
      v11 = v20[8];
      if ( !v10 )
        v11 = 1;
      LODWORD(v20[8]) = v11;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  EtwTraceBeginCallback(49LL);
  v12 = KeUserModeCallback(49LL, v20, 72LL, &v23, &v22);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v21);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5, v13);
  if ( v12 >= 0 && v22 == 24 )
  {
    v14 = (__int64 *)v23;
    if ( v23 + 8 < v23 || v23 + 8 > MmUserProbeAddress )
      v14 = (__int64 *)MmUserProbeAddress;
    v15 = *v14;
    if ( !a3 )
      return v15;
    v16 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v16 || (*(_DWORD *)(v16 + 84) & 1) == 0 || *(_QWORD *)(v16 + 96) != a3 )
    {
      v17 = *(_QWORD *)(v23 + 16);
      if ( v17 + 24 < v17 || v17 + 24 > MmUserProbeAddress )
        v17 = MmUserProbeAddress;
      v18 = *(_QWORD *)(v17 + 16);
      *(_OWORD *)a3 = *(_OWORD *)v17;
      *(_QWORD *)(a3 + 16) = v18;
      return v15;
    }
  }
  return -1LL;
}
