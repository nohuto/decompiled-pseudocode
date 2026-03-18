/*
 * XREFs of KeQuerySpeculationControlInformation @ 0x14072F3F8
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x140139E08 (KeKvaShadowingActive.c)
 *     HvlQueryL1tfMitigationInformation @ 0x140171938 (HvlQueryL1tfMitigationInformation.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KeQuerySpeculationControlInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int v5; // eax
  int v6; // r14d
  int v7; // ebx
  int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // ebx
  unsigned int v12; // ebx

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  memset(a1, 0, a2);
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 20)) & 1;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 17)) & 2;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 17)) & 4;
  if ( (KiSpeculationFeatures & 0x10) != 0 || (KiSpeculationFeatures & 0x40) != 0 )
    *a1 |= 8u;
  if ( (KiSpeculationFeatures & 4) != 0 )
    *a1 |= 0x10u;
  if ( (KiSpeculationFeatures & 0x100000) != 0 && (KiSpeculationFeatures & 0x200000) != 0 )
    *a1 |= 0x2000u;
  *a1 ^= (*a1 ^ (2 * KiSpeculationFeatures)) & 0x20;
  *a1 ^= ((unsigned __int8)KiSpeculationFeatures ^ (unsigned __int8)*a1) & 0x40;
  *a1 ^= (*a1 ^ (4 * KiSpeculationFeatures)) & 0x80;
  *a1 |= 0x100u;
  *a1 ^= (*a1 ^ (4 * KiSpeculationFeatures)) & 0x200;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 12)) & 0x400;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 12)) & 0x800;
  *a1 ^= (*a1 ^ ~(16 * KiSpeculationFeatures)) & 0x1000;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 11)) & 0x4000;
  *a1 ^= (*a1 ^ ((unsigned int)KiSpeculationFeatures >> 11)) & 0x8000;
  *a1 ^= (*a1 ^ ((_DWORD)KiSpeculationFeatures << 16)) & 0x10000;
  v5 = *a1 | 0x800000;
  *a1 = v5;
  v6 = KeFeatureBits2;
  v7 = v5 ^ (v5 ^ ((_DWORD)KeFeatureBits2 << 19)) & 0x1000000;
  *a1 = v7;
  v8 = 0;
  if ( !KiKvaShadow || (v9 = 0x2000000, (v6 & 8) == 0) )
    v9 = 0;
  v10 = v9 | v7 & 0xFDFFFFFF;
  *a1 = v10;
  v10 |= 0x4000000u;
  *a1 = v10;
  v11 = v10 | 0x20000000;
  *a1 = v11;
  if ( (v6 & 0x8000) != 0 && KiDisableTsx || !KiTsxSupported )
  {
    v12 = v11 | 0x18000000;
  }
  else if ( (*(_QWORD *)&v6 & 0x10000LL) != 0 || (v6 & 0x28) == 8 && (unsigned int)KeKvaShadowingActive() )
  {
    v12 = v11 & 0xE7FFFFFF | 0x10000000;
  }
  else if ( (v6 & 0x8000) != 0 )
  {
    v12 = v11 & 0xE7FFFFFF | 0x8000000;
  }
  else
  {
    v12 = v11 & 0xE7FFFFFF;
  }
  *a1 = v12;
  if ( (*(_QWORD *)&v6 & 0x10000LL) != 0 || !KiTsxSupportedAtBoot )
    v8 = 0x40000000;
  *a1 = v8 | v12 & 0xBFFFFFFF;
  HvlQueryL1tfMitigationInformation(a1);
  return 0LL;
}
