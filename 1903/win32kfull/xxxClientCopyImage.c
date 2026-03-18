/*
 * XREFs of xxxClientCopyImage @ 0x1C00B4D58
 * Callers:
 *     xxxCreateClassSmIcon @ 0x1C00B6100 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B9750 (xxxCreateWindowSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00ADED4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADF74 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00ADFAC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00AE614 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rcx
  ULONG64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+4Ch] [rbp-1Ch]
  int v18; // [rsp+50h] [rbp-18h]
  int v19; // [rsp+54h] [rbp-14h]
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  char v21; // [rsp+78h] [rbp+10h] BYREF
  int v22; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v19 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v21,
    a2,
    gdwInAtomicOperation,
    a4);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v15, 24LL, &v20, &v22);
  EtwTraceEndCallback(64LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v21,
    v7,
    v8,
    v9);
  if ( v6 < 0 || v22 != 24 )
    return 0LL;
  v12 = (__int64 *)v20;
  v13 = v20 + 8;
  if ( v20 + 8 < v20 || v13 > MmUserProbeAddress )
    v12 = (__int64 *)MmUserProbeAddress;
  result = *v12;
  if ( *v12 )
  {
    if ( v5 )
    {
      LOBYTE(v13) = 3;
      return HMValidateHandleNoRip(result, v13, v10, v11);
    }
  }
  return result;
}
