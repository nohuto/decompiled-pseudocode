/*
 * XREFs of MiReclaimSystemVa @ 0x140139F14
 * Callers:
 *     MiObtainDynamicVa @ 0x1400E64B4 (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x14019A0D0 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_140465908 <= 0x8000000 )
    return KeSetEvent(&stru_140465C00, 0, 0);
  return result;
}
