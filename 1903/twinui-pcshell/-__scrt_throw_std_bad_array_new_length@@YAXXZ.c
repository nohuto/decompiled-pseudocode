/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180087BBC
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x180087B10 (--0bad_array_new_length@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
