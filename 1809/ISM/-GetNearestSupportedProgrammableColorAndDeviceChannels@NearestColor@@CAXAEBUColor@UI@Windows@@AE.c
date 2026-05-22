/*
 * XREFs of ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x18007D928
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x180074890 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
        const struct Windows::UI::Color *a1,
        const struct LampAttributes *a2,
        struct Windows::UI::Color *a3,
        struct LampColor *a4)
{
  double v4; // xmm1_8
  double v5; // xmm7_8
  double v6; // xmm8_8
  double v7; // xmm9_8
  unsigned __int8 v8; // al
  double v9; // xmm4_8
  unsigned __int8 v10; // al
  double v11; // xmm5_8
  unsigned __int8 v12; // al
  double v13; // xmm6_8
  unsigned __int8 v14; // r8
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // di
  unsigned __int8 v17; // si
  unsigned __int8 v18; // bp
  double v19; // xmm12_8
  double v20; // xmm0_8
  double v21; // xmm3_8
  double v22; // xmm10_8
  double v23; // xmm1_8
  double v24; // xmm0_8
  double v25; // xmm0_8
  double v26; // xmm1_8
  double v27; // xmm14_8
  double v28; // xmm0_8
  double v29; // xmm0_8
  double v30; // xmm1_8
  double v31; // xmm13_8
  double v32; // xmm0_8
  double v33; // xmm10_8
  double v34; // xmm12_8
  double v35; // [rsp+B8h] [rbp+10h]
  double v36; // [rsp+C0h] [rbp+18h]

  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  v8 = *((_BYTE *)a2 + 24);
  v35 = 0.0;
  if ( v8 )
    v9 = 255.0 / (double)v8;
  else
    v9 = 0.0;
  v10 = *((_BYTE *)a2 + 25);
  if ( v10 )
    v11 = 255.0 / (double)v10;
  else
    v11 = 0.0;
  v12 = *((_BYTE *)a2 + 26);
  if ( v12 )
    v13 = 255.0 / (double)v12;
  else
    v13 = 0.0;
  v14 = *((_BYTE *)a2 + 27);
  if ( v14 )
  {
    v15 = 1;
    v36 = DOUBLE__Inf;
    v16 = *((_BYTE *)a1 + 1);
    v17 = *((_BYTE *)a1 + 2);
    v18 = *((_BYTE *)a1 + 3);
    v19 = DOUBLE_0_5;
    v20 = (double)v14;
    do
    {
      v21 = (double)v15 / v20;
      v22 = v21 * 255.0;
      v23 = v21 * v9;
      if ( v21 * v9 <= 0.0 )
        v24 = 0.0;
      else
        v24 = (double)v16 / v23;
      v25 = (double)(int)(v24 + v19) * v23;
      v26 = v21 * v11;
      v27 = fmin(v22, v25);
      if ( v21 * v11 <= 0.0 )
        v28 = 0.0;
      else
        v28 = (double)v17 / v26;
      v29 = (double)(int)(v28 + v19) * v26;
      v30 = v21 * v13;
      v31 = fmin(v22, v29);
      if ( v21 * v13 <= 0.0 )
        v32 = 0.0;
      else
        v32 = (double)v18 / v30;
      v33 = fmin(v22, (double)(int)(v32 + v19) * v30);
      v34 = (double)(v17 - (unsigned __int8)(int)v31) * (double)(v17 - (unsigned __int8)(int)v31)
          + (double)(v16 - (unsigned __int8)(int)v27) * (double)(v16 - (unsigned __int8)(int)v27)
          + (double)(v18 - (unsigned __int8)(int)v33) * (double)(v18 - (unsigned __int8)(int)v33);
      if ( v36 <= v34 )
      {
        v4 = v35;
      }
      else
      {
        v4 = (double)v15;
        v5 = v27 / v9 / v21;
        v6 = v31 / v11 / v21;
        v7 = v33 / v13 / v21;
        v35 = v4;
        if ( v34 == 0.0 )
          break;
        v36 = (double)(v17 - (unsigned __int8)(int)v31) * (double)(v17 - (unsigned __int8)(int)v31)
            + (double)(v16 - (unsigned __int8)(int)v27) * (double)(v16 - (unsigned __int8)(int)v27)
            + (double)(v18 - (unsigned __int8)(int)v33) * (double)(v18 - (unsigned __int8)(int)v33);
      }
      v19 = DOUBLE_0_5;
      ++v15;
      v20 = (double)v14;
    }
    while ( v15 <= v14 );
  }
  if ( a4 )
  {
    *(_BYTE *)a4 = (int)v5;
    *((_BYTE *)a4 + 1) = (int)v6;
    *((_BYTE *)a4 + 2) = (int)v7;
    *((_BYTE *)a4 + 3) = (int)v4;
  }
}
