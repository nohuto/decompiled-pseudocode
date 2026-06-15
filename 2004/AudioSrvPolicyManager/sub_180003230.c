/*
 * XREFs of sub_180003230 @ 0x180003230
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002F68 @ 0x180002F68 (sub_180002F68.c)
 *     _CxxThrowException @ 0x18003AE03 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180003230(__int64 a1)
{
  _BYTE pExceptionObject[216]; // [rsp+20h] [rbp-D8h] BYREF

  sub_180002F68((__int64)pExceptionObject, a1);
  throw (wil::ResultException *)pExceptionObject;
}
