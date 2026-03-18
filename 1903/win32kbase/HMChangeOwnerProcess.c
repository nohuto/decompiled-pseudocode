/*
 * XREFs of HMChangeOwnerProcess @ 0x1C008AE60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMChangeOwnerPheProcessWorker @ 0x1C008AEA8 (HMChangeOwnerPheProcessWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcess(_DWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v5,
    a2,
    a3);
  return HMChangeOwnerPheProcessWorker((char *)qword_1C0213758 + dword_1C0213760 * (unsigned int)(unsigned __int16)*a1);
}
