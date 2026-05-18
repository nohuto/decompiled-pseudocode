/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x180127150
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     sub_180095374 @ 0x180095374 (sub_180095374.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180095374(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
