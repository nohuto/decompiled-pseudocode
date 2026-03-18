/*
 * XREFs of ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C00B9BB8
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00B9D2C (-CalcDpiOverride@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00B9E08 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x1C012C048 (-RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION@@H@Z @ 0x1C012C0F4 (-SatisfyMinResolutionBarForScaleIdx@DpiInternal@@YAKHHUtagSIZE@@QEBU_DPI_SCALE_FACTOR_COLLECTION.c)
 */

void __fastcall FillDpiInfo(
        const struct tagSIZE *a1,
        struct tagSIZE *this,
        struct tagSIZE a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        struct tagSIZE *a8)
{
  bool v8; // zf
  struct tagSIZE v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // eax
  unsigned int cy; // edx
  __int64 v19; // rax
  DpiInternal *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  const struct _DPI_SCALE_FACTOR_COLLECTION *v23; // [rsp+20h] [rbp-18h]
  int v24; // [rsp+28h] [rbp-10h]
  struct _DPI_INFORMATION *v25; // [rsp+78h] [rbp+40h]

  v8 = a1->cx == 0;
  a8[3] = *a1;
  a8[4] = *this;
  if ( !v8 && a1->cy )
    a8[5] = DpiInternal::CalcDpi((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  v13 = DpiInternal::CalcDpiOverride((DpiInternal *)this, a1, *(const struct tagSIZE **)&a3);
  if ( !v13.cx || !v13.cy )
    v13 = a8[5];
  a8[6] = v13;
  a8[8].cx = 200;
  LODWORD(v25) = 20000 * a8[5].cx / 0x6900u;
  v14 = (unsigned int)v25;
  HIDWORD(v25) = 20000 * a8[5].cy / 0x6900u;
  a8[7] = (struct tagSIZE)v25;
  v15 = (unsigned int)(((int)v25 + HIDWORD(v25)) >> 31);
  if ( a5 )
  {
    if ( !a6 )
      goto LABEL_8;
  }
  else if ( a6 )
  {
LABEL_26:
    v17 = RoundToNearestScaleFactor(a6, *(const struct _DPI_SCALE_FACTOR_COLLECTION **)&a3);
    a8[7].cy = a6;
    a8[7].cx = a6;
    goto LABEL_10;
  }
  LODWORD(v15) = ((int)v25 + HIDWORD(v25)) % 2;
  v19 = WdLogNewEntry5_WdAssertion(2LL, v15, (unsigned int)v25);
  WdLogEvent5_WdAssertion(v19);
LABEL_8:
  if ( a5 )
  {
    v16 = 100 * a5 + 48;
    LODWORD(v15) = (2863311531u * (unsigned __int64)(unsigned int)v16) >> 32;
    v17 = (unsigned int)v16 / 0x60;
    goto LABEL_10;
  }
  if ( a6 )
    goto LABEL_26;
  v20 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)&a3 + 8LL) != 1 )
  {
    do
    {
      if ( (unsigned int)(((int)v25 + HIDWORD(v25)) / 2) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&a3 + 24LL)
                                                                     + 4LL * (_QWORD)v20) )
        break;
      v20 = (DpiInternal *)(unsigned int)((_DWORD)v20 + 1);
    }
    while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)&a3 + 8LL) - 1 );
  }
  LODWORD(v23) = 0;
  v17 = DpiInternal::SatisfyMinResolutionBarForScaleIdx(v20, 0, (int)*this, a3, v23, v24);
LABEL_10:
  a8[1].cy = v17;
  if ( !v17 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v16, v15, v14);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a8[4].cx || !a8[4].cy )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v15, v14);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( a5 )
  {
    a8[10].cy = 1234569;
    cy = (100 * a5 + 48) / 0x60;
  }
  else
  {
    cy = a8[1].cy;
  }
  a8[1].cx = cy;
}
