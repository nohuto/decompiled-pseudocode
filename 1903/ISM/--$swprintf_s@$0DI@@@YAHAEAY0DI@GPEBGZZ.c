/*
 * XREFs of ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x1800D4074
 * Callers:
 *     ??$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800D4008 (--$GetFullSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXGAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z.c)
 *     ??$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@G@Z @ 0x1800D4040 (--$GetNamespaceSignalPath@$0N@$0CG@$0DI@@SipcSignalFactory@@CAXAEAY0CG@$$CBGAEAY0N@$$CBGAEAY0DI@.c)
 * Callees:
 *     vswprintf_s @ 0x18002CB10 (vswprintf_s.c)
 */

int swprintf_s<56>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x38uLL, a2, va);
}
