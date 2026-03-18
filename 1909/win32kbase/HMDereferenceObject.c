/*
 * XREFs of HMDereferenceObject @ 0x1C006259C
 * Callers:
 *     ??1CHMRefHwndByHandle@@QEAA@XZ @ 0x1C0024380 (--1CHMRefHwndByHandle@@QEAA@XZ.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 */

__int64 __fastcall HMDereferenceObject(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v5,
    a2,
    a3);
  HMUnlockObjectWorker(a1);
  return 0LL;
}
