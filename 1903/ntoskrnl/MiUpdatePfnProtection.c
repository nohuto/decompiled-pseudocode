/*
 * XREFs of MiUpdatePfnProtection @ 0x1402D1C2C
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14002E6A0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     MiSanitizePfnProtection @ 0x14004FF70 (MiSanitizePfnProtection.c)
 *     MiSwizzleInvalidPte @ 0x1400763F0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  volatile signed __int32 *v8; // rbx
  unsigned __int64 v9; // r9
  int v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(unsigned int *)(a1 + 48);
  if ( (v3 & 0x500000) != 0x500000 || (v6 = MiVadPageSizes[(v3 >> 18) & 3], v6 == 16) )
    v6 = 1LL;
  v7 = 0LL;
  if ( v6 )
  {
    v8 = (volatile signed __int32 *)(a2 + 24);
    do
    {
      v11 = 0;
      while ( _interlockedbittestandset64(v8, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)v8 < 0 );
      }
      v9 = *((_QWORD *)v8 - 1);
      if ( !v7 )
        a3 = MiSanitizePfnProtection(a1, (v9 >> 5) & 0x1F, a3);
      if ( v9 )
        *((_QWORD *)v8 - 1) = (32LL * (a3 & 0x1F)) | v9 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        *((_QWORD *)v8 - 1) = MiSwizzleInvalidPte(32LL * (a3 & 0x1F));
      _InterlockedAnd64((volatile signed __int64 *)v8, 0x7FFFFFFFFFFFFFFFuLL);
      v8 += 12;
      ++v7;
    }
    while ( v7 < v6 );
  }
  return a3;
}
