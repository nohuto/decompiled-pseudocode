/*
 * XREFs of MiVaToSoftwareWsle @ 0x1402CB898
 * Callers:
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVaToSoftwareWsle(__int64 a1, unsigned __int64 a2)
{
  return qword_14043B5A8[*(_BYTE *)(a1 + 184) & 7] + ((a2 >> 12) & 0xFFFFFFFFFLL);
}
