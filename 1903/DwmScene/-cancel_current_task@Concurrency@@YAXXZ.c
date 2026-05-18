/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ @ 0x180127040
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     sub_180095264 @ 0x180095264 (sub_180095264.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180095264(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
