/*
 * XREFs of ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180084F14
 * Callers:
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800850F0 (_CxxThrowException_0.c)
 *     ??0bad_alloc@std@@QEAA@XZ @ 0x180384CAC (--0bad_alloc@std@@QEAA@XZ.c)
 */

void __noreturn __scrt_throw_std_bad_alloc(void)
{
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  std::bad_alloc::bad_alloc((std::bad_alloc *)pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}
