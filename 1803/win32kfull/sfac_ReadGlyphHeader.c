/*
 * XREFs of sfac_ReadGlyphHeader @ 0x1C02C0868
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C02BD004 (fsg_ExecuteGlyph.c)
 * Callees:
 *     sfac_GetDataPtr @ 0x1C02BF6EC (sfac_GetDataPtr.c)
 *     sfac_GetGlyphLocation @ 0x1C02BF7D0 (sfac_GetGlyphLocation.c)
 */

__int64 __fastcall sfac_ReadGlyphHeader(
        __int64 a1,
        unsigned __int16 a2,
        __int64 *a3,
        int *a4,
        int *a5,
        __int16 *a6,
        _QWORD *a7)
{
  __int64 result; // rax
  int v11; // ebx
  _WORD *v12; // r8
  __int16 *v13; // rcx
  __int16 v14; // ax
  int v15; // eax
  _WORD *v16; // rcx
  int *v17; // r11
  __int16 v18; // dx
  __int16 v19; // r9
  __int16 v20; // ax
  __int16 v21; // r10
  int v22; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int32 v23[9]; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  a3[1] = 0LL;
  result = sfac_GetGlyphLocation(a1, a2, v23, &v24, &v22);
  if ( !(_DWORD)result )
  {
    if ( !v24 )
    {
      *a4 = 0;
      *a6 = 1;
      *a7 = 0LL;
      *a5 = 0;
      return 0LL;
    }
    if ( v24 < 0xA )
      return 5133LL;
    v11 = 1;
    result = sfac_GetDataPtr(a1, v23[0], v24, v22, 1, a3);
    if ( !(_DWORD)result )
    {
      v12 = (_WORD *)*a3;
      v13 = a6;
      a3[2] = *a3 + v24;
      v14 = __ROR2__(*v12, 8);
      *v13 = v14;
      if ( v14 < -1 )
        return 5127LL;
      if ( v14 == -1 )
      {
        *v13 = 0;
        v15 = 0;
      }
      else
      {
        v15 = 1;
        v11 = 0;
      }
      v16 = a7;
      v17 = a5;
      *a4 = v11;
      *v17 = v15;
      v18 = __ROR2__(v12[1], 8);
      *v16 = v18;
      v19 = __ROR2__(v12[2], 8);
      v16[1] = v19;
      v20 = __ROR2__(v12[3], 8);
      v16[2] = v20;
      v21 = __ROR2__(v12[4], 8);
      v16[3] = v21;
      if ( v18 <= v20 && v19 <= v21 )
      {
        if ( v17 )
          a3[1] = (__int64)(v12 + 5);
        return 0LL;
      }
      return 5120LL;
    }
  }
  return result;
}
