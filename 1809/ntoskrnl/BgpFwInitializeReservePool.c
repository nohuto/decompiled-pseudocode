/*
 * XREFs of BgpFwInitializeReservePool @ 0x140951508
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14094F340 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x14095095C (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140951E4C (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_14043D6E0 = 0;
  qword_14043D6D8 = a1;
  dword_14043D6F8 = a2;
  stru_14043D6E8.SizeOfBitMap = a2;
  stru_14043D6E8.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_14043D6E8);
}
