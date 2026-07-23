/*
 * XREFs of LdrpArmProcessRelocation @ 0x1402F5564
 * Callers:
 *     LdrpThumbProcessRelocation @ 0x1402F563C (LdrpThumbProcessRelocation.c)
 *     LdrProcessRelocationBlockLongLong @ 0x14072BA28 (LdrProcessRelocationBlockLongLong.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpArmProcessRelocation(_WORD *a1, __int64 a2, int a3)
{
  unsigned int *v3; // r10
  unsigned int v4; // r11d
  unsigned int v5; // edx
  unsigned int v6; // r9d

  v3 = (unsigned int *)(a2 + (*a1 & 0xFFC));
  v4 = 1;
  if ( (*a1 & 0xF000) == 0x5000 )
  {
    v5 = 16
       * (((a3
          + (((v3[1] & 0xFFF) << 16) | ((unsigned __int16)(v3[1] >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*v3 >> 4) ^ (*v3 ^ (*v3 >> 4)) & 0xFFF)) >> 16) & 0xF000);
    v6 = ((a3
         + (((v3[1] & 0xFFF) << 16) | ((unsigned __int16)(v3[1] >> 4) << 16) & 0xF0000000 | (unsigned __int16)(*v3 >> 4) ^ (*v3 ^ (*v3 >> 4)) & 0xFFF)) >> 16) & 0xFFF;
    *v3 = *v3 & 0xFFF0F000 | ((_WORD)a3
                            + ((unsigned __int16)(*v3 >> 4) ^ (*(_WORD *)v3 ^ (unsigned __int16)(*v3 >> 4)) & 0xFFF)) & 0xFFF | (16 * (((_WORD)a3 + ((unsigned __int16)(*v3 >> 4) ^ (*(_WORD *)v3 ^ (unsigned __int16)(*v3 >> 4)) & 0xFFF)) & 0xF000));
    v3[1] = v6 | v3[1] & 0xFFF0F000 | v5;
  }
  else
  {
    return 0;
  }
  return v4;
}
