/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C021DB10
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  bool v13; // zf
  int v14; // eax
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  ULONG64 v22; // rcx
  __int64 v23; // xmm0_8
  _QWORD v25[13]; // [rsp+50h] [rbp-68h] BYREF
  char v26; // [rsp+C0h] [rbp+8h] BYREF
  int v27; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+D0h] [rbp+18h] BYREF

  memset(v25, 0, 0x48uLL);
  LODWORD(v25[0]) = a1;
  v25[1] = a2;
  LODWORD(v25[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v25[5] = *(_OWORD *)a3;
    v25[7] = *(_QWORD *)(a3 + 16);
  }
  v25[3] = a4;
  v25[4] = a5;
  LODWORD(v25[8]) = 0;
  if ( a2 )
  {
    LOBYTE(v9) = 5;
    v12 = HMValidateHandle(a2, v9, v10, v11);
    if ( v12 )
    {
      v13 = (*(_BYTE *)(v12 + 64) & 4) == 0;
      v14 = v25[8];
      if ( !v13 )
        v14 = 1;
      LODWORD(v25[8]) = v14;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    v10,
    v11);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  EtwTraceBeginCallback(49LL);
  v15 = KeUserModeCallback(49LL, v25, 72LL, &v28, &v27);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v26);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v16,
    v17,
    v18);
  if ( v15 >= 0 && v27 == 24 )
  {
    v19 = (__int64 *)v28;
    if ( v28 + 8 < v28 || v28 + 8 > MmUserProbeAddress )
      v19 = (__int64 *)MmUserProbeAddress;
    v20 = *v19;
    if ( !a3 )
      return v20;
    v21 = *(_QWORD *)(gptiCurrent + 504LL);
    if ( !v21 || (*(_DWORD *)(v21 + 84) & 1) == 0 || *(_QWORD *)(v21 + 96) != a3 )
    {
      v22 = *(_QWORD *)(v28 + 16);
      if ( v22 + 24 < v22 || v22 + 24 > MmUserProbeAddress )
        v22 = MmUserProbeAddress;
      v23 = *(_QWORD *)(v22 + 16);
      *(_OWORD *)a3 = *(_OWORD *)v22;
      *(_QWORD *)(a3 + 16) = v23;
      return v20;
    }
  }
  return -1LL;
}
