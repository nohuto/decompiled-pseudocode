/*
 * XREFs of sub_18009BC10 @ 0x18009BC10
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180097D80 @ 0x180097D80 (sub_180097D80.c)
 */

_QWORD *__fastcall sub_18009BC10(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  sub_180097D80((__int64 *)(a1 + 104), 0LL, a1 + 104);
  v3 = 0LL;
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 88), &v3);
}
