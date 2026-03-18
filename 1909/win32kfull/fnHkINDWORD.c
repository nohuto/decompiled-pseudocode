/*
 * XREFs of fnHkINDWORD @ 0x1C004BF20
 * Callers:
 *     xxxHkCallHook @ 0x1C0043F00 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004ECF4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004ED94 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C004EDCC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C004F434 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 */

__int64 __fastcall fnHkINDWORD(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // rdi
  int v7; // ebx
  __int64 *v8; // rcx
  __int64 v9; // r8
  _DWORD *v10; // rcx
  _DWORD v12[2]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  int v17; // [rsp+6Ch] [rbp-1Ch]
  __int64 v18; // [rsp+70h] [rbp-18h]
  char v19; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp+10h] BYREF

  v12[1] = 0;
  v17 = 0;
  v12[0] = a1;
  v13 = a2;
  v18 = a3;
  v14 = a4;
  v15 = a5;
  v6 = a6;
  v16 = *a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  EtwTraceBeginCallback(40LL);
  v7 = KeUserModeCallback(40LL, v12, 48LL, &v20, &a6);
  EtwTraceEndCallback(40LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v19);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v7 < 0 || (_DWORD)a6 != 24 )
    return 0LL;
  v8 = (__int64 *)v20;
  if ( v20 + 8 < v20 || v20 + 8 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  v9 = *v8;
  v10 = *(_DWORD **)(v20 + 16);
  if ( v10 + 1 < v10 || (unsigned __int64)(v10 + 1) > MmUserProbeAddress )
    v10 = (_DWORD *)MmUserProbeAddress;
  *v6 ^= ((unsigned __int8)*v10 ^ (unsigned __int8)*v6) & 0x10;
  return v9;
}
