/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00A552C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C009D7B4 (-FillOverridesAndAdjustedScaleFactor@DpiInternal@@YAXIHPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DP.c)
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00A5668 (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00A5744 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C00ABC4C (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C01036C8 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE a3,
        __int64 a4,
        DpiInternal *a5,
        unsigned int a6,
        int a7,
        struct _DPI_INFORMATION *a8)
{
  __int64 v9; // rbx
  struct tagSIZE v10; // r9
  __int64 v12; // rax
  struct tagSIZE v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned int v20; // eax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v21; // [rsp+20h] [rbp-18h]
  struct _DPI_SCALE_FACTOR_COLLECTION *v22; // [rsp+78h] [rbp+40h]

  v9 = 0LL;
  v10 = *a1;
  v12 = (__int64)*this;
  *((struct tagSIZE *)a8 + 3) = *a1;
  *((_QWORD *)a8 + 4) = v12;
  if ( v10.cx && v10.cy )
    *((struct tagSIZE *)a8 + 5) = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v15 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v15.cx || !v15.cy )
    v15 = (struct tagSIZE)*((_QWORD *)a8 + 5);
  *((struct tagSIZE *)a8 + 6) = v15;
  *((_DWORD *)a8 + 16) = 200;
  LODWORD(v22) = 20000 * *((_DWORD *)a8 + 10) / 0x6900u;
  v16 = (unsigned int)v22;
  HIDWORD(v22) = 20000 * *((_DWORD *)a8 + 11) / 0x6900u;
  *((_QWORD *)a8 + 7) = v22;
  v17 = (unsigned int)(((int)v22 + HIDWORD(v22)) >> 31);
  if ( (_DWORD)a5 )
  {
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( a6 )
  {
    goto LABEL_19;
  }
  LODWORD(v17) = ((int)v22 + HIDWORD(v22)) % 2;
  v19 = WdLogNewEntry5_WdAssertion(2LL, v17, (unsigned int)v22);
  WdLogEvent5_WdAssertion(v19);
LABEL_8:
  if ( !(_DWORD)a5 )
  {
    if ( !a6 )
    {
      if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
      {
        do
        {
          if ( (unsigned int)(((int)v22 + HIDWORD(v22)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL) + 4 * v9) )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
        while ( (unsigned int)v9 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
      }
      v20 = DpiInternal::SatisfyMinResolutionBarForScaleIdx((DpiInternal *)(unsigned int)v9, 0, (int)*this, a3, v21);
      goto LABEL_20;
    }
LABEL_19:
    v20 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
    *((_DWORD *)a8 + 15) = a6;
    *((_DWORD *)a8 + 14) = a6;
LABEL_20:
    *((_DWORD *)a8 + 3) = v20;
    goto LABEL_10;
  }
  v18 = (100 * (int)a5 + 48) / 0x60u;
  *((_DWORD *)a8 + 3) = v18;
LABEL_10:
  DpiInternal::FillOverridesAndAdjustedScaleFactor((DpiInternal *)(unsigned int)a5, v18, v16, a8);
}
