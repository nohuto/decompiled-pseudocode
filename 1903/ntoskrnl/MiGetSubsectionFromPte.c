/*
 * XREFs of MiGetSubsectionFromPte @ 0x1402D8DA8
 * Callers:
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetSubsectionFromPte(__int64 a1)
{
  if ( qword_140465B00 && (a1 & 0x10) == 0 )
    a1 &= ~qword_140465B00;
  return a1 >> 16;
}
