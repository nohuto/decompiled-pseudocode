/*
 * XREFs of MiGetSubsectionFromPte @ 0x1402D8B08
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140465800 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140465800;
  return a1 >> 16;
}
