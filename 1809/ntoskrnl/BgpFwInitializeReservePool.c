/*
 * XREFs of BgpFwInitializeReservePool @ 0x140950508
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14094E340 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x14094F95C (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140950E4C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  HintIndex = 0;
  qword_14043C618 = a1;
  dword_14043C638 = a2;
  BitMapHeader.SizeOfBitMap = a2;
  BitMapHeader.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&BitMapHeader);
}
