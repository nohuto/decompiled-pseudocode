/*
 * XREFs of ClientGetMessageMPH @ 0x1C00E57A0
 * Callers:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     NtUserGetMessage @ 0x1C0046E80 (NtUserGetMessage.c)
 *     NtUserPeekMessage @ 0x1C0046F80 (NtUserPeekMessage.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall ClientGetMessageMPH(_OWORD *a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  _OWORD *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v16; // [rsp+48h] [rbp-20h] BYREF
  int v17; // [rsp+50h] [rbp-18h]
  int v18; // [rsp+54h] [rbp-14h]
  int v19; // [rsp+58h] [rbp-10h]
  int v20; // [rsp+5Ch] [rbp-Ch]
  unsigned __int64 v21; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v16 = a2;
  v17 = a3;
  v18 = a4;
  v19 = a5;
  v20 = a6;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&a6,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(73LL);
  v7 = KeUserModeCallback(73LL, &v16, 24LL, &v21, &v22);
  EtwTraceEndCallback(73LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a6, v8);
  if ( v7 < 0 || v22 != 24 )
    return 0LL;
  v9 = (__int64 *)v21;
  if ( v21 + 8 < v21 || v21 + 8 > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v10 = *v9;
  v11 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( v11 )
  {
    if ( (*(_DWORD *)(v11 + 84) & 1) != 0 && *(_OWORD **)(v11 + 96) == a1 )
      return 0LL;
  }
  v12 = *(_OWORD **)(v21 + 16);
  if ( v12 + 3 < v12 || (unsigned __int64)(v12 + 3) > MmUserProbeAddress )
    v12 = (_OWORD *)MmUserProbeAddress;
  v13 = v12[1];
  v14 = v12[2];
  *a1 = *v12;
  a1[1] = v13;
  a1[2] = v14;
  return (unsigned int)v10;
}
