/*
 * XREFs of MiLogMapFileEvent @ 0x140887064
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiLogPerfMemoryEvent @ 0x1402BF360 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140886E8C (MiFillMapFileInfo.c)
 */

void __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  memset(v4, 0, 0x30uLL);
  if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x10 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
}
