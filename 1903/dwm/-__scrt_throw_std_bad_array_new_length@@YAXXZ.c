/*
 * XREFs of ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x14000403C
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x140003E38 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     ??0bad_array_new_length@std@@QEAA@XZ @ 0x140003F4C (--0bad_array_new_length@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x140004224 (_CxxThrowException_0.c)
 */

void __noreturn __scrt_throw_std_bad_array_new_length(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_array_new_length::bad_array_new_length((std::bad_array_new_length *)pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}
