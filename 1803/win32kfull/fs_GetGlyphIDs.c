/*
 * XREFs of fs_GetGlyphIDs @ 0x1C02B1B4C
 * Callers:
 *     cjComputeGLYPHSET_OLDBIDI @ 0x1C021B628 (cjComputeGLYPHSET_OLDBIDI.c)
 *     vFillIFICharsets @ 0x1C021BC34 (vFillIFICharsets.c)
 *     pvHandleKerningPairs @ 0x1C0220004 (pvHandleKerningPairs.c)
 * Callees:
 *     fs_SetUpKey @ 0x1C02B1F84 (fs_SetUpKey.c)
 *     sfac_GetMultiGlyphIDs @ 0x1C02BFA58 (sfac_GetMultiGlyphIDs.c)
 */

__int64 __fastcall fs_GetGlyphIDs(__int64 a1, __int16 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r9d
  unsigned __int16 v8; // r11
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(v10) = a2;
  v5 = fs_SetUpKey(a1, 2LL, &v10);
  if ( v5 )
    return sfac_GetMultiGlyphIDs(v5, v6, v8, v7, a5);
  else
    return v10;
}
