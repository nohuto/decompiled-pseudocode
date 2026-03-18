/*
 * XREFs of _HMPkheFromObject @ 0x1C0099E00
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

char *__fastcall HMPkheFromObject(_DWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v5,
    a2,
    a3);
  return (char *)gpKernelHandleTable + 24 * (unsigned __int16)*a1;
}
