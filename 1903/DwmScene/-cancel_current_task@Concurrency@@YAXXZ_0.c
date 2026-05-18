/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x180127060
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     sub_180127020 @ 0x180127020 (sub_180127020.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180127020(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
