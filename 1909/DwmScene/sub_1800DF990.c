/*
 * XREFs of sub_1800DF990 @ 0x1800DF990
 * Callers:
 *     sub_1800E0B70 @ 0x1800E0B70 (sub_1800E0B70.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DF990(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbp

  v1 = (_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 440) = 1;
  v3 = 8LL;
  do
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v1, v1 + 32);
    v1 += 2;
    --v3;
  }
  while ( v3 );
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 392), (_QWORD *)(a1 + 424));
  return sub_1800DF870(a1);
}
