/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x1C00FAEA4
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 *v10; // rcx
  __int64 v11; // r8
  _DWORD *v12; // rcx
  _DWORD v14[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v15; // [rsp+58h] [rbp-50h]
  __int64 v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+68h] [rbp-40h]
  int v18; // [rsp+70h] [rbp-38h]
  int v19; // [rsp+74h] [rbp-34h]
  __int128 v20; // [rsp+78h] [rbp-30h]
  __int128 v21; // [rsp+88h] [rbp-20h]
  __int64 v22; // [rsp+98h] [rbp-10h]
  char v23; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+B8h] [rbp+10h] BYREF

  v14[1] = 0;
  v19 = 0;
  v14[0] = a1;
  v15 = a2;
  *(_DWORD *)(a3 + 20) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  v20 = *(_OWORD *)a3;
  v21 = *(_OWORD *)(a3 + 16);
  v22 = *(_QWORD *)(a3 + 32);
  v16 = a4;
  v17 = a5;
  v6 = a6;
  v18 = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    gdwInAtomicOperation,
    a3);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  EtwTraceBeginCallback(44LL);
  v7 = KeUserModeCallback(44LL, v14, 80LL, &v24, &a6);
  EtwTraceEndCallback(44LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v23);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a5,
    v8,
    v9);
  if ( v7 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v10 = (__int64 *)v24;
  if ( v24 + 8 < v24 || v24 + 8 > MmUserProbeAddress )
    v10 = (__int64 *)MmUserProbeAddress;
  v11 = *v10;
  v12 = *(_DWORD **)(v24 + 16);
  if ( v12 + 1 < v12 || (unsigned __int64)(v12 + 1) > MmUserProbeAddress )
    v12 = (_DWORD *)MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v12 ^ (unsigned __int8)*v6) & 0x10;
  return v11;
}
