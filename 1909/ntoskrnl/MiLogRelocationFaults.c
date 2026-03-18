/*
 * XREFs of MiLogRelocationFaults @ 0x14066BB84
 * Callers:
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiLogRelocationRva @ 0x14066AE50 (MiLogRelocationRva.c)
 */

void __fastcall MiLogRelocationFaults(_DWORD *a1, unsigned int *a2, __int64 a3)
{
  ULONG_PTR v6; // rbp
  __int64 *i; // rbx
  unsigned int v8; // ecx

  v6 = MiReferenceControlAreaFile((__int64)a1);
  MiLogRelocationRva(*a2, a2[1], v6, a1);
  for ( i = *(__int64 **)(a3 + 16); i; i = (__int64 *)*i )
  {
    v8 = *((_DWORD *)i + 2);
    if ( (v8 & 0xFFF) != 0 )
      MiLogRelocationRva(v8, 0x2000u, v6, a1);
  }
  MiDereferenceControlAreaFile((__int64)a1, v6);
}
