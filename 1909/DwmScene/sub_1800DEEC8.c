/*
 * XREFs of sub_1800DEEC8 @ 0x1800DEEC8
 * Callers:
 *     sub_18006AC70 @ 0x18006AC70 (sub_18006AC70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DEEC8(__int64 a1, _QWORD *a2, unsigned int a3, int a4, unsigned int a5)
{
  __int64 v6; // rbx
  __int64 result; // rax

  v6 = a3;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(16LL * a3 + a1 + 8), a2);
  result = a5;
  *(_DWORD *)(a1 + 4 * v6 + 728) = a4;
  *(_DWORD *)(a1 + 4 * v6 + 908) = a5;
  return result;
}
