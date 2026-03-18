/*
 * XREFs of lookForMatchingMinuserHwnd @ 0x1C00E03C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall lookForMatchingMinuserHwnd(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  _BOOL8 result; // rax

  v3 = 3LL * (unsigned int)((a2 - (__int64)qword_1C01CBA58) >> 5);
  result = *(_BYTE *)(a2 + 24) == 23
        && ((v4 = a1[1], v5 = a1[2], v6 = *((_QWORD *)gpKernelHandleTable + v3 + 1), !v4) || *(_QWORD *)(v6 + 424) == v4)
        && (!v5 || v6 == v5)
        && *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + v3) + 56LL) == *a1;
  return result;
}
