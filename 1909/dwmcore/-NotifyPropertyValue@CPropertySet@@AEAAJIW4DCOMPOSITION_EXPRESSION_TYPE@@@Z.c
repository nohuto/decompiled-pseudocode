/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A3E3C
 * Callers:
 *     ??$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z @ 0x18001C28C (--$PropertyUpdated@UD2DMatrix@@@CPropertySet@@AEAAJIIPEBUD2DMatrix@@@Z.c)
 *     ??$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z @ 0x1800A1074 (--$PropertyUpdated@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIIPEBU_D3DCOLORVALUE@@@Z.c)
 *     ??$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z @ 0x1800A3730 (--$PropertyUpdated@M@CPropertySet@@AEAAJIIPEBM@Z.c)
 *     ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A37E0 (-SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z @ 0x1801F2D9C (--$PropertyUpdated@UD2DVector4@@@CPropertySet@@AEAAJIIPEBUD2DVector4@@@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1801F3170 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1800A32AC (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1800A40E4 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1800A45A4 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801CCDBC (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
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
  signed int v15; // ebx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  unsigned int v24; // r9d
  __int64 v25; // rbx
  __int64 v26; // rcx
  float v27; // xmm0_4
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+40h] [rbp-38h] BYREF
  __int64 v32; // [rsp+48h] [rbp-30h]
  __int128 v33; // [rsp+50h] [rbp-28h] BYREF
  __int64 v34; // [rsp+60h] [rbp-18h]

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
          v31 = v26;
          v32 = v28;
          v15 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, _WORD, void *, _DWORD, _QWORD))CoreUICallSend)(
                  v25,
                  &v31,
                  2LL,
                  13LL,
                  0,
                  &unk_1802B11A7,
                  v3,
                  v27);
          if ( v15 == -2018375675 )
            v15 = 0;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v15, 0xC3u, 0LL);
            v30 = 540;
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
          v30 = 546;
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
          v30 = 543;
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
          v30 = 549;
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
          v30 = 559;
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
          v34 = *(_QWORD *)(v7 + v6 + 16);
          v20 = *(_QWORD *)(v19 + 1224);
          v33 = *(_OWORD *)(v7 + v6);
          v21 = v5 ? *(unsigned int *)(v5 + 68) : 0LL;
          v22 = *(_QWORD *)(v20 + 48);
          v31 = v21;
          v32 = *(unsigned int *)(a1 + 56);
          v15 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64, __int16, void *, _DWORD, __int128 *))CoreUICallSend)(
                  v22,
                  &v31,
                  2LL,
                  13LL,
                  6,
                  &unk_1802B11C9,
                  v3,
                  &v33);
          if ( v15 == -2018375675 )
            v15 = 0;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v15, 0x1CEu, 0LL);
            v30 = 556;
LABEL_34:
            v24 = v15;
LABEL_38:
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v24, v30, 0LL);
            return (unsigned int)v15;
          }
        }
      }
    }
  }
  return 0;
}
