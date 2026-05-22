/*
 * XREFs of ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x18002298C
 * Callers:
 *     ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x180022888 (--0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z.c)
 * Callees:
 *     vswprintf_s @ 0x18002CB10 (vswprintf_s.c)
 */

int swprintf_s<82>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x52uLL, a2, va);
}
