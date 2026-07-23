/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x1409F0ADC
 * Callers:
 *     MiInitializeSystemVa @ 0x1409EFDF8 (MiInitializeSystemVa.c)
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  dword_140465DF0 = (unsigned __int8)ExGenRandom(1);
  memset(dword_140465DD0, 0, sizeof(dword_140465DD0));
  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = dword_140465DD0;
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
    dword_140465DD0[7] &= ~0x2000u;
}
