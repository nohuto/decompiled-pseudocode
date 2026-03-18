/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C0120634
 * Callers:
 *     xxxHkCallHook @ 0x1C00A3130 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rcx
  _DWORD v15[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 v18; // [rsp+68h] [rbp-40h]
  int v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+74h] [rbp-34h]
  __int128 v21; // [rsp+78h] [rbp-30h]
  __int128 v22; // [rsp+88h] [rbp-20h]
  __int64 v23; // [rsp+98h] [rbp-10h]
  char v24; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+B8h] [rbp+10h] BYREF

  v15[1] = 0;
  v20 = 0;
  v15[0] = a1;
  v16 = a2;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  v21 = *(_OWORD *)a3;
  v22 = *(_OWORD *)(a3 + 16);
  v23 = *(_QWORD *)(a3 + 32);
  v17 = a4;
  v18 = a5;
  v6 = a6;
  v19 = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    a3,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  EtwTraceBeginCallback(44LL);
  v7 = KeUserModeCallback(44LL, v15, 80LL, &v25, &a6);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v24);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v8,
    v9,
    v10);
  if ( v7 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v11 = (__int64 *)v25;
  if ( v25 + 8 < v25 || v25 + 8 > MmUserProbeAddress )
    v11 = (__int64 *)MmUserProbeAddress;
  v12 = *v11;
  v13 = *(_DWORD **)(v25 + 16);
  if ( v13 + 1 < v13 || (unsigned __int64)(v13 + 1) > MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v13 ^ (unsigned __int8)*v6) & 0x10;
  return v12;
}
