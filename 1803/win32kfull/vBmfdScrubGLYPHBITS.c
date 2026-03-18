/*
 * XREFs of vBmfdScrubGLYPHBITS @ 0x1C0225698
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall vBmfdScrubGLYPHBITS(__int64 a1)
{
  __int64 result; // rax
  char v2; // r9
  int v3; // eax
  __int64 v4; // r10
  _BYTE *v5; // r8
  _BYTE *v6; // rcx

  result = *(_DWORD *)(a1 + 8) & 7;
  v2 = byte_1C02E84A0[result];
  if ( v2 )
  {
    v3 = (*(_DWORD *)(a1 + 8) + 7) / 8;
    v4 = v3;
    v5 = (_BYTE *)(v3 + a1 + 15);
    result = *(_DWORD *)(a1 + 12) * v3;
    v6 = &v5[(int)result];
    while ( v5 < v6 )
    {
      *v5 &= v2;
      v5 += v4;
    }
  }
  return result;
}
