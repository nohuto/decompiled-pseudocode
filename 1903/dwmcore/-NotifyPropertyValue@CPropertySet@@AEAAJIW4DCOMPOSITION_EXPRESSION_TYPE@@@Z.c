/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180094B94
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001E0AC (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x180091AA0 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180094770 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800BBD38 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801F450C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801F4890 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x18007F5AC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x18007F708 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800BA354 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801CE55C (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r10
  __int64 v5; // rdx
  __int64 v6; // r11
  __int64 v7; // r8
  int v8; // eax
  int v9; // eax
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  int v14; // ecx
  int v15; // ebx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  int v24; // r9d
  __int64 v25; // rbx
  __int64 v26; // rcx
  float v27; // xmm0_4
  __int64 v28; // rdx
  unsigned int v29; // ecx
  unsigned int v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+40h] [rbp-38h] BYREF
  __int64 v33; // [rsp+48h] [rbp-30h]
  __int128 v34; // [rsp+50h] [rbp-28h] BYREF
  __int64 v35; // [rsp+60h] [rbp-18h]

  v3 = a2;
  if ( a3 == 18 )
  {
    v10 = *(_QWORD *)(a1 + 48);
    v11 = *(_QWORD *)(a1 + 112);
    v12 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF;
    if ( v10 )
      v13 = *(_DWORD *)(v10 + 68);
    else
      v13 = 0;
    if ( v13 )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        v14 = *(_DWORD *)(a1 + 64);
        if ( _bittest(&v14, a2) )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1224LL) + 48LL);
          if ( v10 )
            v26 = *(unsigned int *)(v10 + 68);
          else
            v26 = 0LL;
          v27 = *(float *)(v12 + v11);
          v28 = *(unsigned int *)(a1 + 56);
          v32 = v26;
          v33 = v28;
          LOWORD(v30) = 0;
          v15 = CoreUICallSend(v25, &v32, 2LL, 13LL, v30, &unk_1802B2E97, v3, v27);
          if ( v15 == -2018375675 )
            v15 = 0;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v15, 0xC3u, 0LL);
            v31 = 538;
            goto LABEL_34;
          }
        }
      }
    }
  }
  else
  {
    if ( a3 != 104 )
    {
      switch ( a3 )
      {
        case 52:
          v17 = CPropertyChangeResource::NotifyVector3PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector3 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v15 = v17;
          if ( v17 >= 0 )
            return 0;
          v31 = 544;
          break;
        case 35:
          v17 = CPropertyChangeResource::NotifyVector2PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector2 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v15 = v17;
          if ( v17 >= 0 )
            return 0;
          v31 = 541;
          break;
        case 69:
          v17 = CPropertyChangeResource::NotifyVector4PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DVector4 *)(*(_QWORD *)(a1 + 112)
                                            + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v15 = v17;
          if ( v17 >= 0 )
            return 0;
          v31 = 547;
          break;
        case 265:
          v17 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
                  (CPropertyChangeResource *)a1,
                  a2,
                  (const struct D2DMatrix *)(*(_QWORD *)(a1 + 112)
                                           + (*(_DWORD *)(*(_QWORD *)(a1 + 80) + 8LL * a2 + 4) & 0x1FFFFFFF)));
          v15 = v17;
          if ( v17 >= 0 )
            return 0;
          v31 = 557;
          break;
        default:
          return 0;
      }
      v24 = v17;
      goto LABEL_38;
    }
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(_QWORD *)(a1 + 112);
    v7 = *(_DWORD *)(*(_QWORD *)(a1 + 80) + 8 * v3 + 4) & 0x1FFFFFFF;
    if ( v5 )
      v8 = *(_DWORD *)(v5 + 68);
    else
      v8 = 0;
    if ( v8 )
    {
      if ( *(_DWORD *)(a1 + 56) )
      {
        v9 = *(_DWORD *)(a1 + 64);
        if ( _bittest(&v9, v3) )
        {
          v19 = *(_QWORD *)(a1 + 16);
          v35 = *(_QWORD *)(v7 + v6 + 16);
          v20 = *(_QWORD *)(v19 + 1224);
          v34 = *(_OWORD *)(v7 + v6);
          v21 = v5 ? *(unsigned int *)(v5 + 68) : 0LL;
          v22 = *(_QWORD *)(v20 + 48);
          v32 = v21;
          v33 = *(unsigned int *)(a1 + 56);
          LOWORD(v30) = 6;
          v15 = CoreUICallSend(v22, &v32, 2LL, 13LL, v30, &unk_1802B2EB9, v3, &v34);
          if ( v15 == -2018375675 )
            v15 = 0;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v15, 0x1CEu, 0LL);
            v31 = 554;
LABEL_34:
            v24 = v15;
LABEL_38:
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v24, v31, 0LL);
            return (unsigned int)v15;
          }
        }
      }
    }
  }
  return 0;
}
