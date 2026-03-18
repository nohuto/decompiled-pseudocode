/*
 * XREFs of MiReclaimSystemVa @ 0x1400F7258
 * Callers:
 *     MiObtainDynamicVa @ 0x1400F696C (MiObtainDynamicVa.c)
 *     MiExtendDynamicBitMap @ 0x14018FA70 (MiExtendDynamicBitMap.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall MiReclaimSystemVa(int a1)
{
  LONG result; // eax

  if ( a1 == 1 || (unsigned __int64)qword_14043A1C8 <= 0x8000000 )
    return KeSetEvent(&stru_14043A538, 0, 0);
  return result;
}
