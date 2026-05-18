/*
 * XREFs of sub_18000CD80 @ 0x18000CD80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A644 @ 0x18000A644 (sub_18000A644.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __noreturn sub_18000CD80()
{
  _QWORD pExceptionObject[27]; // [rsp+20h] [rbp-D8h] BYREF

  sub_18000A644(pExceptionObject);
  throw (wil::ResultException *)pExceptionObject;
}
