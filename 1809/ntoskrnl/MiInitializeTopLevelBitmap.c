/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x1409D3E8C
 * Callers:
 *     MiInitializeSystemVa @ 0x1409D33A8 (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  dword_14043B500 = (unsigned __int8)ExGenRandom(1);
  memset(dword_14043B4E0, 0, sizeof(dword_14043B4E0));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = dword_14043B4E0;
  v0 = 0xFFFFF6FB7DBED800uLL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
  }
  while ( (v0 & 0xFFF) != 0 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x200000) == 0 )
    dword_14043B4E0[7] &= ~0x2000u;
}
