/*
 * XREFs of HMChangeOwnerPheProcess @ 0x1C0102D30
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C0086AC8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerPheProcess(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // r8d
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v7,
    a2,
    a3);
  return HMChangeOwnerPheProcessWorker(a1, a2, v5);
}
