/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C021D5D0
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // r8
  __int64 v10; // rax
  bool v11; // zf
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  ULONG64 v19; // rcx
  __int64 v20; // xmm0_8
  _QWORD v22[13]; // [rsp+50h] [rbp-68h] BYREF
  char v23; // [rsp+C0h] [rbp+8h] BYREF
  int v24; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v25; // [rsp+D0h] [rbp+18h] BYREF

  memset(v22, 0, 0x48uLL);
  LODWORD(v22[0]) = a1;
  v22[1] = a2;
  LODWORD(v22[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v22[5] = *(_OWORD *)a3;
    v22[7] = *(_QWORD *)(a3 + 16);
  }
  v22[3] = a4;
  v22[4] = a5;
  LODWORD(v22[8]) = 0;
  if ( a2 )
  {
    v10 = HMValidateHandle(a2, 5);
    if ( v10 )
    {
      v11 = (*(_BYTE *)(v10 + 64) & 4) == 0;
      v12 = v22[8];
      if ( !v11 )
        v12 = 1;
      LODWORD(v22[8]) = v12;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  EtwTraceBeginCallback(49LL);
  v13 = KeUserModeCallback(49LL, v22, 72LL, &v25, &v24);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v14,
    v15);
  if ( v13 >= 0 && v24 == 24 )
  {
    v16 = (__int64 *)v25;
    if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
      v16 = (__int64 *)MmUserProbeAddress;
    v17 = *v16;
    if ( !a3 )
      return v17;
    v18 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v18 || (*(_DWORD *)(v18 + 84) & 1) == 0 || *(_QWORD *)(v18 + 96) != a3 )
    {
      v19 = *(_QWORD *)(v25 + 16);
      if ( v19 + 24 < v19 || v19 + 24 > MmUserProbeAddress )
        v19 = MmUserProbeAddress;
      v20 = *(_QWORD *)(v19 + 16);
      *(_OWORD *)a3 = *(_OWORD *)v19;
      *(_QWORD *)(a3 + 16) = v20;
      return v17;
    }
  }
  return -1LL;
}
