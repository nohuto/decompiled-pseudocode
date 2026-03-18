/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000DC0C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C012DC88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@H@Z @ 0x1C000DD78 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C000DEA4 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 *     ?FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C000DF28 (-FindPlateauIndexForScaleFactor@DpiInternal@@YAIIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C000DF68 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0047AA0 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C0047BAC (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        const struct tagSIZE *a3,
        int a4,
        DpiInternal *a5,
        unsigned int a6,
        unsigned int a7,
        struct _DPI_INFORMATION *a8)
{
  int v8; // ebx
  struct tagSIZE v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  unsigned int v17; // edx
  unsigned int PlateauIndexForScaleFactor; // eax
  unsigned int v19; // eax
  unsigned int v20; // edx
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rax
  struct _DPI_SCALE_FACTOR_COLLECTION *v24; // [rsp+20h] [rbp-38h]
  int v25; // [rsp+28h] [rbp-30h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v26; // [rsp+98h] [rbp+40h]

  v8 = 0;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((struct tagSIZE *)a8 + 4) = *this;
  if ( a1->cx && a1->cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, a3);
  v14 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, a3);
  if ( !v14.cx || !v14.cy )
    v14 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v14;
  *((_DWORD *)a8 + 16) = a4;
  if ( a4 == 0xFFFF )
  {
    v15 = (unsigned int)(a3[1].cx - 1);
    if ( a3[1].cx != 1 )
    {
      do
      {
        if ( (unsigned int)(100 * *((_DWORD *)a8 + 9)) / *(_DWORD *)(*(_QWORD *)&a3[2] + 4 * v15) >= 0x2D0 )
          break;
        v21 = (_DWORD)v15 == 1;
        v15 = (unsigned int)(v15 - 1);
      }
      while ( !v21 );
    }
    v22 = 100;
    if ( (_DWORD)v15 )
      v22 = *(_DWORD *)(*(_QWORD *)&a3[3] + 4LL * (unsigned int)(v15 - 1)) + 1;
    LODWORD(v26) = v22;
    HIDWORD(v26) = v22;
  }
  else
  {
    LODWORD(v26) = 100 * a4 * *((_DWORD *)a8 + 10) / 0x6900u;
    v15 = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
    HIDWORD(v26) = 100 * a4 * *((_DWORD *)a8 + 11) / 0x6900u;
  }
  *((_QWORD *)a8 + 7) = v26;
  v16 = (unsigned int)((HIDWORD(v26) + (int)v26) >> 31);
  if ( a7 )
  {
    if ( (_DWORD)a5 )
    {
      if ( !a6 )
      {
LABEL_27:
        if ( (_DWORD)a5 )
        {
          v20 = (100 * (int)a5 + 48) / 0x60u;
          goto LABEL_10;
        }
        v17 = (unsigned int)a3;
        if ( a6 )
        {
          v19 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
          *((_DWORD *)a8 + 15) = a6;
          *((_DWORD *)a8 + 14) = a6;
          goto LABEL_9;
        }
        goto LABEL_8;
      }
    }
    else if ( a6 )
    {
      goto LABEL_27;
    }
    LODWORD(v16) = (HIDWORD(v26) + (int)v26) % 2;
    v23 = WdLogNewEntry5_WdAssertion(2LL, v16);
    *(_QWORD *)(v23 + 24) = 885LL;
    WdLogEvent5_WdAssertion(v23);
    goto LABEL_27;
  }
  v17 = (unsigned int)a3;
  if ( a6 )
  {
    v19 = RoundToNearestScaleFactor(a6, (const struct _DPI_SCALE_FACTOR_COLLECTION *)a3);
    goto LABEL_9;
  }
LABEL_8:
  PlateauIndexForScaleFactor = DpiInternal::FindPlateauIndexForScaleFactor(
                                 (DpiInternal *)(unsigned int)((HIDWORD(v26) + (int)v26) / 2),
                                 v17,
                                 (const struct _DPI_SCALE_FACTOR_COLLECTION *)v15);
  LODWORD(v24) = 0;
  v19 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(
          (DpiInternal *)PlateauIndexForScaleFactor,
          0,
          (int)*this,
          (struct tagSIZE)a3,
          v24,
          v25);
LABEL_9:
  v20 = v19;
LABEL_10:
  *((_DWORD *)a8 + 3) = v20;
  LOBYTE(v8) = a6 != 0;
  LODWORD(v24) = v8;
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, a7, (int)a3, a8, v24, v25);
}
