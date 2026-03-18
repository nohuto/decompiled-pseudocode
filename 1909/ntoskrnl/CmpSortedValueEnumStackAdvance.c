/*
 * XREFs of CmpSortedValueEnumStackAdvance @ 0x140839198
 * Callers:
 *     CmpGetValueCountForKeyNodeStack @ 0x140280148 (CmpGetValueCountForKeyNodeStack.c)
 * Callees:
 *     CmpSortedValueEnumStackAdvanceInternal @ 0x1408391C8 (CmpSortedValueEnumStackAdvanceInternal.c)
 */

__int64 __fastcall CmpSortedValueEnumStackAdvance(void *a1)
{
  void *i; // rbx
  __int64 result; // rax

  for ( i = a1; ; a1 = i )
  {
    result = CmpSortedValueEnumStackAdvanceInternal(a1);
    if ( (int)result < 0 )
      break;
    if ( (*(_BYTE *)(*(_QWORD *)i + 16LL) & 2) == 0 )
      return 0LL;
  }
  return result;
}
