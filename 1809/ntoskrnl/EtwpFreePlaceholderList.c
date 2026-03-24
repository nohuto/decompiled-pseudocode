/*
 * XREFs of EtwpFreePlaceholderList @ 0x140132AAC
 * Callers:
 *     EtwpFreeCompression @ 0x140132938 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x1403155BC (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1168);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1168) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
