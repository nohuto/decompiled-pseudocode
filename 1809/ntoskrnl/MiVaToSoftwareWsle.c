/*
 * XREFs of MiVaToSoftwareWsle @ 0x1402CB6A8
 * Callers:
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToSoftwareWsle(__int64 a1, unsigned __int64 a2)
{
  return qword_14043A4E8[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
