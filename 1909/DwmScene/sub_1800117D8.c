/*
 * XREFs of sub_1800117D8 @ 0x1800117D8
 * Callers:
 *     sub_18001635C @ 0x18001635C (sub_18001635C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180090B08 @ 0x180090B08 (sub_180090B08.c)
 *     sub_180090B14 @ 0x180090B14 (sub_180090B14.c)
 */

__int64 __fastcall sub_1800117D8(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8

  v2 = (_QWORD *)(a1 + 16);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  sub_180090B14(*v2, &qword_18025D6F8, v3);
  sub_180090B08(*v2, &qword_18025C738, 1LL);
  return 0LL;
}
