/*
 * XREFs of MiCheckSystemNxFault @ 0x1400E9508
 * Callers:
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1400E93A0 (MiCheckSystemPageTables.c)
 *     MiRaisedIrqlFault @ 0x1401291F8 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1402BC5C8 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  _BOOL8 result; // rax

  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    result = a2 >= 0;
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
  return result;
}
