/*
 * XREFs of sub_18009BD20 @ 0x18009BD20
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180097E90 @ 0x180097E90 (sub_180097E90.c)
 */

_QWORD *__fastcall sub_18009BD20(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180097E90((__int64 *)(a1 + 104), 0LL, a1 + 104);
  v3 = 0LL;
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 88), &v3);
}
