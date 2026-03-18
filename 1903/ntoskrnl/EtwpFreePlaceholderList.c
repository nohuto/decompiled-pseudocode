/*
 * XREFs of EtwpFreePlaceholderList @ 0x140108F34
 * Callers:
 *     EtwpFreeCompression @ 0x140108D64 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x140333E10 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreePlaceholderList(__int64 a1)
{
  _QWORD *v2; // rcx

  while ( 1 )
  {
    v2 = *(_QWORD **)(a1 + 1200);
    if ( !v2 )
      break;
    *(_QWORD *)(a1 + 1200) = *v2;
    ExFreePoolWithTag(v2 - 4, 0);
  }
}
