/*
 * XREFs of MiLogMapFileEvent @ 0x140887838
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiUnmapVad @ 0x14064C934 (MiUnmapVad.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiLogPerfMemoryEvent @ 0x1402BF600 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140887660 (MiFillMapFileInfo.c)
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
