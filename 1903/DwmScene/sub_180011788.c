/*
 * XREFs of sub_180011788 @ 0x180011788
 * Callers:
 *     sub_1800162EC @ 0x1800162EC (sub_1800162EC.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800909F8 @ 0x1800909F8 (sub_1800909F8.c)
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 */

__int64 __fastcall sub_180011788(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r8

  v2 = (_QWORD *)(a1 + 16);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16), a2);
  LOBYTE(v3) = 1;
  *(_WORD *)(*v2 + 112LL) |= 0x10u;
  *(_WORD *)(*v2 + 112LL) &= ~2u;
  *(_WORD *)(*v2 + 112LL) |= 1u;
  sub_180090A04(*v2, &qword_18025C6F8, v3);
  sub_1800909F8(*v2, &qword_18025B738, 1LL);
  return 0LL;
}
