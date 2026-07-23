/*
 * XREFs of MiLogMapFileEvent @ 0x14084D58C
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x140618488 (MiUnmapVad.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x1402A7F7C (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x14084D3B8 (MiFillMapFileInfo.c)
 */

void __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  _BYTE v3[56]; // [rsp+30h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 48) & 7) != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v3);
    MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v3, 44, 4200707);
  }
}
