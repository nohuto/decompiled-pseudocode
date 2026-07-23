/*
 * XREFs of MiReclaimSystemVa @ 0x1400F72F8
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F6A0C (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x14018FBD0 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_14043B288 <= 0x8000000 )
    return KeSetEvent(&stru_14043B5F8, 0, 0);
  return result;
}
