/*
 * XREFs of sub_1406EF130 @ 0x1406EF130
 * Callers:
 *     sub_1406EF0EC @ 0x1406EF0EC (sub_1406EF0EC.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_1406EF130(_QWORD *a1)
{
  _WORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  result = ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x20534C53u);
  if ( result )
  {
    *a1 = 0x800000LL;
    a1[1] = result;
    *result = 0;
  }
  return result;
}
