/*
 * XREFs of ?GetViewRectOverlay@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11W4CoreKeyboardEditControlLineType@45678@PEAU9Foundation@8@@Z @ 0x1803302D0
 * Callers:
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@0UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x18032DBF0 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJURect@Foundation@W.c)
 * Callees:
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18032FF2C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 */

__int64 __fastcall KeyboardHosting::ViewRectHelper::GetViewRectOverlay(
        __int64 a1,
        float *a2,
        __int128 *a3,
        float *a4,
        int a5,
        float *a6)
{
  float *v6; // r10
  bool v7; // zf
  int v8; // eax
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  __m128i v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __m128i v22; // [rsp+40h] [rbp-19h] BYREF
  __int128 v23; // [rsp+50h] [rbp-9h] BYREF
  __int128 v24; // [rsp+60h] [rbp+7h] BYREF
  __int128 v25[2]; // [rsp+70h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+98h] [rbp+3Fh]

  v6 = a6;
  v7 = a5 == 0;
  v22 = 0uLL;
  v8 = *(_DWORD *)(a1 + 8);
  *(_OWORD *)a6 = 0uLL;
  if ( v7 )
  {
    v9 = a4[3] + a4[1];
    v10 = a2[1];
    v11 = (float)*(int *)(a1 + 4);
    if ( v11 <= (float)(v9 - v10) )
    {
      v12 = v10 + a2[3];
      if ( v9 <= v12 )
        v12 = a4[3] + a4[1];
      v10 = v12 - v11;
    }
    v6[1] = v10;
    v13 = *a2;
    if ( *a2 <= *a4 )
    {
      v14 = v13 + a2[2];
      if ( (float)v8 <= (float)(v14 - *a4) )
        v13 = *a4;
      else
        v13 = v14 - (float)v8;
    }
    *v6 = v13;
    v15 = (float)*(int *)(a1 + 4);
    v6[2] = (float)*(int *)(a1 + 8);
    v6[3] = v15;
  }
  else
  {
    v16 = *(__m128i *)a4;
    v17 = *a3;
    v27 = *(_DWORD *)(a1 + 40);
    v22 = v16;
    v18 = *(_OWORD *)a2;
    v23 = v17;
    v19 = *(_OWORD *)a1;
    v24 = v18;
    v20 = *(_OWORD *)(a1 + 16);
    v25[0] = v19;
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 32);
    v25[1] = v20;
    v26 = v19;
    KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
      v25,
      (float *)&v24,
      (__int64)&v23,
      &v22,
      0,
      (__int64)v6,
      (bool *)&a6,
      (char *)&a5);
  }
  return 0LL;
}
