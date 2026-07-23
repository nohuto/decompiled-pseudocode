/*
 * XREFs of KiTpSetupCompletion @ 0x140846FEC
 * Callers:
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiTpParseInstruction @ 0x140846F34 (KiTpParseInstruction.c)
 *     KiTpReadImageData @ 0x140846F5C (KiTpReadImageData.c)
 */

__int64 __fastcall KiTpSetupCompletion(_KPROCESS *a1, const void *a2, void *a3, unsigned int a4, _BYTE *a5)
{
  size_t v6; // r15
  unsigned int v9; // esi
  int ImageData; // ebx

  v6 = a4;
  memset(a5, 0, 0x28uLL);
  v9 = 4096 - ((unsigned __int16)a2 & 0xFFF);
  if ( v9 > 0xF )
    v9 = 15;
  ImageData = KiTpReadImageData(a1, a2, a5 + 6, v9);
  if ( ImageData >= 0 )
  {
    a5[5] = v9;
    ImageData = KiTpParseInstruction(a5);
    if ( ImageData == -1073741306 )
    {
      if ( v9 >= 0xF )
        return (unsigned int)ImageData;
      memset(a5, 0, 0x28uLL);
      ImageData = KiTpReadImageData(a1, a2, a5 + 6, 0xFu);
      if ( ImageData < 0 )
        return (unsigned int)ImageData;
      a5[5] = 15;
      ImageData = KiTpParseInstruction(a5);
    }
    if ( ImageData >= 0 )
      memmove(a3, a5 + 6, v6);
  }
  return (unsigned int)ImageData;
}
