/*
 * XREFs of MiLogRelocationFaults @ 0x1406519C4
 * Callers:
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x14064C34C (MiLogRelocationRva.c)
 */

void __fastcall MiLogRelocationFaults(__int64 a1, unsigned int *a2, __int64 a3)
{
  ULONG_PTR v6; // rbp
  __int64 *i; // rbx
  unsigned int v8; // ecx

  v6 = MiReferenceControlAreaFile(a1);
  MiLogRelocationRva(*a2, a2[1], v6, a1);
  for ( i = *(__int64 **)(a3 + 16); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 2);
    if ( (v8 & 0xFFF) != 0 )
      MiLogRelocationRva(v8, 0x2000u, v6, a1);
  }
  MiDereferenceControlAreaFile(a1, v6);
}
