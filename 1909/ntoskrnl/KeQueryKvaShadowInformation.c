/*
 * XREFs of KeQueryKvaShadowInformation @ 0x14072F880
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x140A398F0 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x140139E08 (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x14013DD04 (KeQueryImplementedPhysicalBits.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int ImplementedPhysicalBits; // eax
  int v5; // esi
  __int16 v6; // di
  unsigned int v7; // ebx
  unsigned int v8; // esi
  char v9; // al
  unsigned int v10; // ecx
  unsigned int v11; // edx
  int v12; // edi
  int v13; // eax

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v5 = 0;
  v6 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v6 = ImplementedPhysicalBits - 1;
  v7 = (KiKvaShadow != 0) | *a1 & 0xFFFFFFFE;
  *a1 = v7;
  if ( (unsigned int)KeKvaShadowingActive() == 2 )
    v5 = 2;
  v8 = v7 & 0xFFFFFFFD | v5;
  *a1 = v8;
  v9 = KiFlushPcid;
  v10 = v8 & 0xFFFFFFFB | (4 * (KiFlushPcid & 1));
  *a1 = v10;
  *a1 = v10 & 0xFFFFFFF7 | (4 * (v9 & 2));
  v11 = (KiKvaLeakage != 0 ? 0x10 : 0) | v10 & 0xFFFFFFE7 | (4 * (v9 & 2)) & 0xEF;
  *a1 = v11;
  v11 |= 0x20u;
  *a1 = v11;
  v11 |= 0x2000u;
  *a1 = v11;
  v12 = v11 ^ ((unsigned __int16)v11 ^ (unsigned __int16)(v6 << 6)) & 0xFC0;
  *a1 = v12;
  v13 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)((_WORD)KeFeatureBits2 << 12)) & 0x1000;
  *a1 = v13;
  *a1 = v13 & 0x3FFF;
  return 0LL;
}
