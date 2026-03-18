/*
 * XREFs of EtwpFreePlaceholderList @ 0x1400FD644
 * Callers:
 *     EtwpFreeCompression @ 0x1400FD480 (EtwpFreeCompression.c)
 *     EtwpInitializeCompression @ 0x140333870 (EtwpInitializeCompression.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
