/*
 * XREFs of sub_1800E0240 @ 0x1800E0240
 * Callers:
 *     sub_1800E00FC @ 0x1800E00FC (sub_1800E00FC.c)
 *     sub_1800E0A60 @ 0x1800E0A60 (sub_1800E0A60.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800E0240(__int64 a1)
{
  __int64 result; // rax

  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 40) = -1;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 44) = 1065353216;
  *(_DWORD *)(a1 + 48) = 1065353216;
  *(_DWORD *)(a1 + 52) = 1065353216;
  *(_DWORD *)(a1 + 56) = 1065353216;
  *(_WORD *)(a1 + 60) = 256;
  return result;
}
