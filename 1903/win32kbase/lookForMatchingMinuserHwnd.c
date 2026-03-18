/*
 * XREFs of lookForMatchingMinuserHwnd @ 0x1C01060F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

_BOOL8 __fastcall lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _BOOL8 result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v9,
    a2,
    a3);
  result = *(_BYTE *)(a2 + 24) == 23
        && ((v5 = a1[1],
             v6 = a1[2],
             v7 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a2 - (__int64)qword_1C0213758) >> 5) + 1),
             !v5)
         || *(_QWORD *)(v7 + 416) == v5)
        && (!v6 || v7 == v6)
        && *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a2 - (__int64)qword_1C0213758) >> 5)) + 56LL) == *a1;
  return result;
}
