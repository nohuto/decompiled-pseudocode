/*
 * XREFs of xxxClientCopyImage @ 0x1C006C42C
 * Callers:
 *     xxxEnsureMonitorCursors @ 0x1C0008198 (xxxEnsureMonitorCursors.c)
 *     xxxCreateWindowSmIcon @ 0x1C006ADA8 (xxxCreateWindowSmIcon.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     xxxCreateClassSmIcon @ 0x1C006BF64 (xxxCreateClassSmIcon.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  ULONG64 v10; // rdx
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+4Ch] [rbp-1Ch]
  int v15; // [rsp+50h] [rbp-18h]
  int v16; // [rsp+54h] [rbp-14h]
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  char v18; // [rsp+78h] [rbp+10h] BYREF
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v18, a2);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v12, 24LL, &v17, &v19);
  EtwTraceEndCallback(64LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v18, v7);
  if ( v6 < 0 || v19 != 24 )
    return 0LL;
  v9 = (__int64 *)v17;
  v10 = v17 + 8;
  if ( v17 + 8 < v17 || v10 > MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  result = *v9;
  if ( *v9 )
  {
    if ( v5 )
    {
      LOBYTE(v10) = 3;
      return HMValidateHandleNoRip(result, v10, v8);
    }
  }
  return result;
}
