/*
 * XREFs of ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180087B94
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180087D7C (_CxxThrowException_0.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x1801DE23C (--0bad_alloc@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
