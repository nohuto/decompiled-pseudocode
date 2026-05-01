/*
 * XREFs of wprintf @ 0x18004371C
 * Callers:
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x180015980 (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180041F84 (__local_stdio_printf_options.c)
 *     _o___acrt_iob_func_0 @ 0x180043582 (_o___acrt_iob_func_0.c)
 *     __stdio_common_vfwprintf @ 0x1800435B2 (__stdio_common_vfwprintf.c)
 */

int wprintf(const wchar_t *const Format, ...)
{
  FILE *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = o___acrt_iob_func_0(1u);
  v3 = _local_stdio_printf_options();
  return _stdio_common_vfwprintf(*v3, v2, Format, 0LL, va);
}
