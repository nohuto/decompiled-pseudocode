/*
 * XREFs of swscanf_s @ 0x180085288
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180298500 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     __local_stdio_scanf_options @ 0x180083B74 (__local_stdio_scanf_options.c)
 *     _o___stdio_common_vswscanf_0 @ 0x180084FE6 (_o___stdio_common_vswscanf_0.c)
 */

int swscanf_s(const wchar_t *const Buffer, const wchar_t *const Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  v4 = _local_stdio_scanf_options();
  return o___stdio_common_vswscanf_0(*v4 | 1, Buffer, 0xFFFFFFFFFFFFFFFFuLL, Format, 0LL, va);
}
