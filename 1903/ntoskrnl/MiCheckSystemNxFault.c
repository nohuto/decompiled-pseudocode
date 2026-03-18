/*
 * XREFs of MiCheckSystemNxFault @ 0x1401341C4
 * Callers:
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x1400758D0 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1400C7190 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x140129040 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1402D2D08 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall MiCheckSystemNxFault(__int64 a1, signed __int64 a2, unsigned int a3)
{
  if ( (*(_BYTE *)(a1 + 8) & 0x10) != 0 )
  {
    if ( (KeFeatureBits & 1) != 0 && (a2 & 4) != 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3 | 0x80000000LL);
    if ( a2 < 0 )
      KeBugCheckEx(0xFCu, *(_QWORD *)a1, a2, *(_QWORD *)(a1 + 16), a3);
  }
}
