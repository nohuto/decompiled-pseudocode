/*
 * XREFs of xxxClientCharToWchar @ 0x1C01E0F54
 * Callers:
 *     EditionClientCharToWchar @ 0x1C01BDC10 (EditionClientCharToWchar.c)
 * Callees:
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0020920 (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00209AC (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020BF8 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0020C50 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 */

__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 *v4; // rcx
  __int64 result; // rax
  _QWORD v6[5]; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+60h] [rbp+8h] BYREF
  char v8; // [rsp+68h] [rbp+10h] BYREF
  __int16 v9; // [rsp+70h] [rbp+18h] BYREF
  __int16 v10; // [rsp+72h] [rbp+1Ah]
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v9 = a1;
  v10 = a2;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks(
    (ReleaseAndReacquirePerObjectLocks *)&v8,
    gdwInAtomicOperation);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  EtwTraceBeginCallback(82LL);
  v2 = KeUserModeCallback(82LL, &v9, 4LL, v6, &v11);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v7);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&v8, v3);
  if ( v2 < 0 || v11 != 24 )
    return 95LL;
  v4 = (__int64 *)v6[0];
  if ( (unsigned __int64)(v6[0] + 8LL) < v6[0] || v6[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  result = *v4;
  v6[1] = *v4;
  return result;
}
