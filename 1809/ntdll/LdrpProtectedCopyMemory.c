/*
 * XREFs of LdrpProtectedCopyMemory @ 0x18007FB60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpGenericExceptionFilter @ 0x1800D7988 (LdrpGenericExceptionFilter.c)
 */

__int64 __fastcall LdrpProtectedCopyMemory(__int64 a1, const void *a2, void *a3, size_t a4, size_t *a5)
{
  memmove(a3, a2, a4);
  *a5 = a4;
  return 0LL;
}
