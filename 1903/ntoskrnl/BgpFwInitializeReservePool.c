/*
 * XREFs of BgpFwInitializeReservePool @ 0x140990558
 * Callers:
 *     BgpFwReservePoolSwap @ 0x14098E340 (BgpFwReservePoolSwap.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 *     BgpFwLibraryDestroy @ 0x140990EAC (BgpFwLibraryDestroy.c)
 * Callees:
 *     RtlClearAllBits @ 0x140098850 (RtlClearAllBits.c)
 */

void __fastcall BgpFwInitializeReservePool(__int64 a1, unsigned int a2, unsigned int *a3)
{
  dword_140468138 = 0;
  qword_140468130 = a1;
  dword_140468150 = a2;
  stru_140468140.SizeOfBitMap = a2;
  stru_140468140.Buffer = a3;
  if ( a3 )
    RtlClearAllBits(&stru_140468140);
}
