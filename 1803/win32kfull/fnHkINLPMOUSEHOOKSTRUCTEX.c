/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00F6CB4
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

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v10; // rdi
  int v11; // ebx
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rcx
  _QWORD v17[13]; // [rsp+50h] [rbp-68h] BYREF
  char v18; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+C8h] [rbp+10h] BYREF

  memset(v17, 0, 0x50uLL);
  LODWORD(v17[0]) = a1;
  v17[1] = a2;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  *(_OWORD *)&v17[5] = *(_OWORD *)a3;
  *(_OWORD *)&v17[7] = *(_OWORD *)(a3 + 16);
  v17[9] = *(_QWORD *)(a3 + 32);
  v17[2] = a4;
  v17[3] = a5;
  v10 = a6;
  LODWORD(v17[4]) = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  EtwTraceBeginCallback(44LL);
  v11 = KeUserModeCallback(44LL, v17, 80LL, &v19, &a6);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v18);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5, v12);
  if ( v11 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v13 = (__int64 *)v19;
  if ( v19 + 8 < v19 || v19 + 8 > MmUserProbeAddress )
    v13 = (__int64 *)MmUserProbeAddress;
  v14 = *v13;
  v15 = *(_DWORD **)(v19 + 16);
  if ( v15 + 1 < v15 || (unsigned __int64)(v15 + 1) > MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v10 ^= ((unsigned __int8)*v15 ^ (unsigned __int8)*v10) & 0x10;
  return v14;
}
