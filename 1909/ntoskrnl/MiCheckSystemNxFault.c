/*
 * XREFs of MiCheckSystemNxFault @ 0x140134AC8
 * Callers:
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiCheckSystemPageTables @ 0x140075B40 (MiCheckSystemPageTables.c)
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiRaisedIrqlFault @ 0x140129A60 (MiRaisedIrqlFault.c)
 *     MiLargePageFault @ 0x1402D2A68 (MiLargePageFault.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
