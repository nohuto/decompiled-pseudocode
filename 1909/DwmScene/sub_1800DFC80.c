/*
 * XREFs of sub_1800DFC80 @ 0x1800DFC80
 * Callers:
 *     sub_1800E0B70 @ 0x1800E0B70 (sub_1800E0B70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DFC80(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 68) = 1;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 8), (_QWORD *)(a1 + 40));
  result = *(unsigned int *)(a1 + 64);
  *(_DWORD *)(a1 + 56) = result;
  return result;
}
