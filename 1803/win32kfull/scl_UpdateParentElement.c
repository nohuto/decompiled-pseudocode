/*
 * XREFs of scl_UpdateParentElement @ 0x1C02B5AE4
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C02BDD24 (fsg_MergeGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_UpdateParentElement(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v4; // r8d
  __int64 v6; // rdx
  __int16 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rdx

  v2 = *(__int16 *)(a2 + 80);
  v4 = v2 + *(__int16 *)(a1 + 80);
  if ( (unsigned int)(v4 + 0x8000) > 0xFFFF )
    return 5123LL;
  if ( (_WORD)v2 )
  {
    v6 = *(_QWORD *)(a2 + 64);
    v7 = *(_WORD *)(v6 + 2LL * (v2 - 1)) + 1;
    if ( (unsigned int)(*(__int16 *)(v6 + 2LL * ((__int16)v4 - 1)) + 0x8000 + v7) > 0xFFFF )
      return 5121LL;
    if ( (__int16)v2 < (__int16)v4 )
    {
      v8 = 2LL * (__int16)v2;
      v9 = (unsigned __int16)(v4 - v2);
      do
      {
        *(_WORD *)(*(_QWORD *)(a2 + 56) + v8) += v7;
        *(_WORD *)(v8 + *(_QWORD *)(a2 + 64)) += v7;
        v8 += 2LL;
        --v9;
      }
      while ( v9 );
    }
  }
  *(_WORD *)(a2 + 80) = v4;
  return 0LL;
}
