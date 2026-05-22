/*
 * XREFs of ??$swprintf_s@$0DD@@@YAHAEAY0DD@GPEBGZZ @ 0x1800A24C0
 * Callers:
 *     ?InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z @ 0x1800A190C (-InitializeObjectNames@SipcPrivateNamespace@@AEAAXAEAY0CG@G@Z.c)
 * Callees:
 *     vswprintf_s @ 0x18012C614 (vswprintf_s.c)
 */

int swprintf_s<51>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x33uLL, a2, va);
}
