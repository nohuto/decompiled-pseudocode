/*
 * XREFs of KiTpSetupCompletion @ 0x1408807B0
 * Callers:
 *     KeSetTracepoint @ 0x14087FB80 (KeSetTracepoint.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiTpParseInstruction @ 0x1408806A4 (KiTpParseInstruction.c)
 *     KiTpReadImageData @ 0x1408806CC (KiTpReadImageData.c)
 */

__int64 __fastcall KiTpSetupCompletion(
        _KPROCESS *BugCheckParameter1,
        char a2,
        const void *a3,
        void *a4,
        size_t Size,
        char *a6)
{
  unsigned int v10; // esi
  int ImageData; // ebx
  size_t v13; // [rsp+20h] [rbp-38h]
  size_t v14; // [rsp+20h] [rbp-38h]

  memset(a6, 0, 0x28uLL);
  v10 = 4096 - ((unsigned __int16)a3 & 0xFFF);
  if ( v10 > 0xF )
    v10 = 15;
  LODWORD(v13) = v10;
  ImageData = KiTpReadImageData(BugCheckParameter1, a2, a3, a6 + 6, v13);
  if ( ImageData >= 0 )
  {
    a6[5] = v10;
    ImageData = KiTpParseInstruction(a6);
    if ( ImageData == -1073741306 )
    {
      if ( v10 >= 0xF )
        return (unsigned int)ImageData;
      memset(a6, 0, 0x28uLL);
      LODWORD(v14) = 15;
      ImageData = KiTpReadImageData(BugCheckParameter1, a2, a3, a6 + 6, v14);
      if ( ImageData < 0 )
        return (unsigned int)ImageData;
      a6[5] = 15;
      ImageData = KiTpParseInstruction(a6);
    }
    if ( ImageData >= 0 )
      memmove(a4, a6 + 6, (unsigned int)Size);
  }
  return (unsigned int)ImageData;
}
