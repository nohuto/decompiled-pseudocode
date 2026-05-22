/*
 * XREFs of ?GetNearestSupportedProgrammableColorAndDeviceChannels@NearestColor@@CAXAEBUColor@UI@Windows@@AEBULampAttributes@@PEAU234@PEAULampColor@@@Z @ 0x1800B5F70
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800AE744 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 * Callees:
 *     ?SnapChannelToNearest@NearestColor@@CANNN@Z @ 0x1800B623C (-SnapChannelToNearest@NearestColor@@CANNN@Z.c)
 */

void __fastcall NearestColor::GetNearestSupportedProgrammableColorAndDeviceChannels(
        const struct Windows::UI::Color *a1,
        const struct LampAttributes *a2,
        struct Windows::UI::Color *a3,
        struct LampColor *a4)
{
  double v4; // xmm2_8
  double v5; // xmm3_8
  double v6; // xmm4_8
  double v7; // xmm11_8
  unsigned __int8 v8; // al
  double v9; // xmm7_8
  unsigned __int8 v10; // al
  double v11; // xmm6_8
  unsigned __int8 v12; // r8
  double v13; // xmm12_8
  unsigned __int8 v14; // dl
  int v15; // ebx
  double v16; // xmm1_8
  double v17; // xmm10_8
  double v18; // xmm15_8
  double v19; // xmm9_8
  double v20; // xmm13_8
  double v21; // xmm14_8
  double v22; // xmm15_8
  double v23; // xmm5_8
  char v24; // dl
  unsigned __int8 v25; // r8
  double v26; // xmm5_8
  double v27; // xmm13_8
  int v28; // r10d
  double v29; // xmm1_8
  int v30; // r11d
  double v31; // xmm10_8
  double v32; // xmm0_8
  double v33; // xmm10_8
  double v34; // [rsp+20h] [rbp-A8h]
  double v35; // [rsp+28h] [rbp-A0h]
  double v36; // [rsp+D8h] [rbp+10h]
  double v37; // [rsp+E8h] [rbp+20h]

  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  v7 = 0.0;
  v8 = *((_BYTE *)a2 + 24);
  if ( v8 )
    v9 = 255.0 / (double)v8;
  else
    v9 = 0.0;
  v10 = *((_BYTE *)a2 + 25);
  if ( v10 )
    v11 = 255.0 / (double)v10;
  else
    v11 = 0.0;
  v12 = *((_BYTE *)a2 + 27);
  if ( v12 )
  {
    v13 = DOUBLE__Inf;
    v14 = 1;
    v15 = *((unsigned __int8 *)a1 + 3);
    v16 = (double)v12;
    v17 = (double)*((unsigned __int8 *)a1 + 1);
    v18 = (double)*((unsigned __int8 *)a1 + 2);
    v37 = v16;
    v34 = v17;
    v35 = v18;
    do
    {
      v36 = (double)v14;
      v19 = v36 / v16;
      v20 = v36 / v16 * 255.0;
      v21 = fmin(v20, NearestColor::SnapChannelToNearest(v17, v36 / v16 * v9));
      v22 = fmin(v20, NearestColor::SnapChannelToNearest(v18, v36 / v16 * v11));
      v27 = fmin(v20, NearestColor::SnapChannelToNearest((double)v15, v36 / v16 * v23));
      v29 = (double)(v28 - (unsigned __int8)(int)v21);
      v31 = (double)(v30 - (unsigned __int8)(int)v22);
      v32 = (double)(v15 - (unsigned __int8)(int)v27);
      v33 = v31 * v31 + v29 * v29 + v32 * v32;
      if ( v13 > v33 )
      {
        v7 = v36;
        v4 = v21 / v9 / v19;
        v5 = v22 / v11 / v19;
        v6 = v27 / v26 / v19;
        if ( v33 == 0.0 )
          break;
        v13 = v33;
      }
      v16 = v37;
      v14 = v24 + 1;
      v17 = v34;
      v18 = v35;
    }
    while ( v14 <= v25 );
  }
  if ( a4 )
  {
    *(_BYTE *)a4 = (int)v4;
    *((_BYTE *)a4 + 1) = (int)v5;
    *((_BYTE *)a4 + 2) = (int)v6;
    *((_BYTE *)a4 + 3) = (int)v7;
  }
}
