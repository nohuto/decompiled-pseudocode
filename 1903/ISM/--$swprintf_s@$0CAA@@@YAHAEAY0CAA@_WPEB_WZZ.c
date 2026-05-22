/*
 * XREFs of ??$swprintf_s@$0CAA@@@YAHAEAY0CAA@_WPEB_WZZ @ 0x1800F3684
 * Callers:
 *     ?ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800F6250 (-ReadInitializationTimeProperties@SpatialInteractionSourceHand@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     vswprintf_s @ 0x18002CB10 (vswprintf_s.c)
 */

int swprintf_s<512>(wchar_t *a1, const wchar_t *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vswprintf_s(a1, 0x200uLL, a2, va);
}
