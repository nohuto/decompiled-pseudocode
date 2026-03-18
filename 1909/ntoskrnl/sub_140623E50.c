/*
 * XREFs of sub_140623E50 @ 0x140623E50
 * Callers:
 *     sub_140623E0C @ 0x140623E0C (sub_140623E0C.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall sub_140623E50(_QWORD *a1)
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
