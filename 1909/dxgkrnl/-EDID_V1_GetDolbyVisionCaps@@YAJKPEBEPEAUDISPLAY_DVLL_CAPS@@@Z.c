/*
 * XREFs of ?EDID_V1_GetDolbyVisionCaps@@YAJKPEBEPEAUDISPLAY_DVLL_CAPS@@@Z @ 0x1C0056780
 * Callers:
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C0175B58 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z @ 0x1C000D64C (-Initialize@EDID_PARSER@MonDescParser@@QEAAJPEAEI@Z.c)
 *     ?GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1@@PEAU_EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2@@PEAI@Z @ 0x1C005860C (-GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser@@QEBA_NPEAU_EDID_V1_CEA_861_DOLBY_VISIO.c)
 */

__int64 __fastcall EDID_V1_GetDolbyVisionCaps(unsigned int a1, unsigned __int8 *a2, struct DISPLAY_DVLL_CAPS *a3)
{
  __int64 result; // rax
  unsigned __int8 v5; // r9
  bool v6; // al
  float v7; // xmm1_4
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // cl
  int v10; // edx
  int v11; // eax
  float v12; // xmm0_4
  int v13; // eax
  __m128i v14; // xmm0
  int v15; // eax
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rax
  float v18; // xmm0_4
  unsigned __int64 v19; // rax
  unsigned __int8 v20; // cl
  float v21; // xmm0_4
  __int64 v22; // [rsp+20h] [rbp-19h] BYREF
  __int16 v23; // [rsp+28h] [rbp-11h]
  _BYTE v24[80]; // [rsp+30h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp+47h]
  unsigned int v26; // [rsp+A8h] [rbp+6Fh] BYREF
  int v27; // [rsp+B8h] [rbp+7Fh] BYREF
  __int16 v28; // [rsp+BCh] [rbp+83h]
  unsigned __int8 v29; // [rsp+BEh] [rbp+85h]

  if ( !a2 || !a1 || !a3 )
    return 3221225485LL;
  v25 = 0LL;
  result = MonDescParser::EDID_PARSER::Initialize((MonDescParser::EDID_PARSER *)v24, a2, a1);
  if ( (int)result < 0 )
    return result;
  v26 = 0;
  v22 = 0LL;
  v23 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( MonDescParser::EDID_PARSER::GetDolbyVisionVendorDataBlock(
         (MonDescParser::EDID_PARSER *)v24,
         (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V1 *)&v22,
         (struct _EDID_V1_CEA_861_DOLBY_VISION_VENDOR_SPECIFIC_V2 *)&v27,
         &v26) )
  {
    if ( v26 == 1 )
    {
      v5 = BYTE3(v22);
      v6 = (BYTE3(v22) & 3) == 1;
      *(_BYTE *)a3 = v6;
      if ( !v6 )
        return 3221225659LL;
      v7 = FLOAT_0_00390625;
      v8 = BYTE5(v22);
      v9 = BYTE4(v22);
      v10 = 2 * (BYTE6(v22) & 7);
      v11 = 50 * (BYTE1(v22) >> 1);
      *((double *)a3 + 1) = (float)((float)((float)(BYTE2(v22) >> 1) / 127.0) * (float)((float)(BYTE2(v22) >> 1) / 127.0));
      v12 = (float)v11;
      v13 = (BYTE6(v22) >> 3) | 0xA0;
      *((double *)a3 + 2) = (float)(v12 + 100.0);
      *((double *)a3 + 3) = (float)((float)v13 * 0.00390625);
      *((double *)a3 + 4) = (float)((float)(v9 & 1 | 0x40 | (2 * (v8 & 1 | v10))) * 0.00390625);
      *((double *)a3 + 5) = (float)((float)(v9 >> 1) * 0.00390625);
      *((double *)a3 + 6) = (float)((float)((v8 >> 1) | 0x80u) * 0.00390625);
      v14 = _mm_cvtsi32_si128((v5 >> 5) | 0x20u);
      v15 = (unsigned __int8)(v5 & 0x1C | 0x20) >> 2;
    }
    else
    {
      if ( v26 != 2 )
        return 0LL;
      v7 = FLOAT_0_00390625;
      v16 = HIBYTE(v28);
      v17 = (unsigned __int64)BYTE1(v27) >> 3;
      *(_BYTE *)a3 = 1;
      v18 = dword_1C0082500[v17];
      v19 = (unsigned __int64)BYTE2(v27) >> 3;
      *((double *)a3 + 1) = v18;
      v20 = v29;
      *((double *)a3 + 2) = dword_1C0082580[v19];
      *((double *)a3 + 3) = (float)((float)((v16 >> 3) | 0xA0u) * 0.00390625);
      LODWORD(v19) = HIBYTE(v27) >> 1;
      *((double *)a3 + 4) = (float)((float)((v20 >> 3) | 0x40u) * 0.00390625);
      v21 = (float)(int)v19;
      LODWORD(v19) = ((unsigned __int8)v28 >> 1) | 0x80;
      *((double *)a3 + 5) = (float)(v21 * 0.00390625);
      *((double *)a3 + 6) = (float)((float)(int)v19 * 0.00390625);
      v14 = _mm_cvtsi32_si128(v16 & 7 | 0x20u);
      v15 = v20 & 7 | 8;
    }
    *((double *)a3 + 7) = (float)(_mm_cvtepi32_ps(v14).m128_f32[0] * v7);
    *((double *)a3 + 8) = (float)((float)v15 * v7);
    return 0LL;
  }
  return 3221226021LL;
}
