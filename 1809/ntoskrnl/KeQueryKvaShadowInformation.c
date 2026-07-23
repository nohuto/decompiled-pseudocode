/*
 * XREFs of KeQueryKvaShadowInformation @ 0x140845A48
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     VslpIumPhase0Initialize @ 0x1409F5600 (VslpIumPhase0Initialize.c)
 * Callees:
 *     KeKvaShadowingActive @ 0x140136C44 (KeKvaShadowingActive.c)
 *     KeQueryImplementedPhysicalBits @ 0x14029A600 (KeQueryImplementedPhysicalBits.c)
 */

__int64 __fastcall KeQueryKvaShadowInformation(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  int ImplementedPhysicalBits; // eax
  int v6; // esi
  __int16 v7; // di
  unsigned int v8; // ebx
  unsigned int v9; // esi
  char v10; // al
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // edi
  int v14; // eax

  *a3 = 4;
  if ( a2 < 4 )
    return 3221225476LL;
  ImplementedPhysicalBits = KeQueryImplementedPhysicalBits();
  v6 = 0;
  v7 = 0;
  if ( ImplementedPhysicalBits > 0 )
    v7 = ImplementedPhysicalBits - 1;
  v8 = (KiKvaShadow != 0) | *a1 & 0xFFFFFFFE;
  *a1 = v8;
  if ( (unsigned int)KeKvaShadowingActive() == 2 )
    v6 = 2;
  v9 = v8 & 0xFFFFFFFD | v6;
  *a1 = v9;
  v10 = KiFlushPcid;
  v11 = v9 & 0xFFFFFFFB | (4 * (KiFlushPcid & 1));
  *a1 = v11;
  *a1 = v11 & 0xFFFFFFF7 | (4 * (v10 & 2));
  v12 = (KiKvaLeakage != 0 ? 0x10 : 0) | v11 & 0xFFFFFFE7 | (4 * (v10 & 2)) & 0xEF;
  *a1 = v12;
  v12 |= 0x20u;
  *a1 = v12;
  v12 |= 0x2000u;
  *a1 = v12;
  v13 = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)(v7 << 6)) & 0xFC0;
  *a1 = v13;
  v14 = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)((_WORD)KeFeatureBits2 << 12)) & 0x1000;
  *a1 = v14;
  *a1 = v14 & 0x3FFF;
  return 0LL;
}
