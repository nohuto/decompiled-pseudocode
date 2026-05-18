/*
 * XREFs of ?cancel_current_task@Concurrency@@YAXXZ_0 @ 0x180127170
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     sub_180127130 @ 0x180127130 (sub_180127130.c)
 */

void __noreturn Concurrency::cancel_current_task(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_180127130(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
