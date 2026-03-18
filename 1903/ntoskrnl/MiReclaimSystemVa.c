/*
 * XREFs of MiReclaimSystemVa @ 0x140139874
 * Callers:
 *     MiObtainDynamicVa @ 0x1400AAFA4 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x140199A70 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140465C08 <= 0x8000000 )
    return KeSetEvent(&stru_140465F00, 0, 0);
  return result;
}
