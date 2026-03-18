/*
 * XREFs of xxxClientCopyImage @ 0x1C00B468C
 * Callers:
 *     xxxCreateClassSmIcon @ 0x1C00B6560 (xxxCreateClassSmIcon.c)
 *     xxxCreateWindowSmIcon @ 0x1C00B8310 (xxxCreateWindowSmIcon.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00DED40 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00198F4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0019994 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00199CC (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C001A5C8 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxClientCopyImage(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // edi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rcx
  ULONG64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]
  int v13; // [rsp+4Ch] [rbp-1Ch]
  int v14; // [rsp+50h] [rbp-18h]
  int v15; // [rsp+54h] [rbp-14h]
  unsigned __int64 v16; // [rsp+70h] [rbp+8h] BYREF
  char v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v5 = a2;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  v14 = a4;
  v15 = a5;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17, a2);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  EtwTraceBeginCallback(64LL);
  v6 = KeUserModeCallback(64LL, &v11, 24LL, &v16, &v18);
  EtwTraceEndCallback(64LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&a5);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v17, v7);
  if ( v6 < 0 || v18 != 24 )
    return 0LL;
  v8 = (__int64 *)v16;
  v9 = v16 + 8;
  if ( v16 + 8 < v16 || v9 > MmUserProbeAddress )
    v8 = (__int64 *)MmUserProbeAddress;
  result = *v8;
  if ( *v8 )
  {
    if ( v5 )
    {
      LOBYTE(v9) = 3;
      return HMValidateHandleNoRip(result, v9);
    }
  }
  return result;
}
