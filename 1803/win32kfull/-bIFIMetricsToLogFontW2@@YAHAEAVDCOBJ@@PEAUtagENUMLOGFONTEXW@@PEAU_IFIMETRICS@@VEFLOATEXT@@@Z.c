/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C00CF5DC
 * Callers:
 *     cjCopyFontDataW @ 0x1C00CD24C (cjCopyFontDataW.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C00CFC30 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C00CFD4C (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 */

__int64 __fastcall bIFIMetricsToLogFontW2(
        struct XDCOBJ *a1,
        struct tagENUMLOGFONTW *a2,
        struct _IFIMETRICS *a3,
        int a4)
{
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // edx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  float x; // xmm0_4
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rcx
  float v26; // [rsp+20h] [rbp-60h] BYREF
  LONG v27; // [rsp+24h] [rbp-5Ch] BYREF
  float v28; // [rsp+28h] [rbp-58h] BYREF
  float v29; // [rsp+2Ch] [rbp-54h]
  float v30[2]; // [rsp+30h] [rbp-50h] BYREF
  float v31; // [rsp+38h] [rbp-48h] BYREF
  float v32; // [rsp+3Ch] [rbp-44h]
  float v33[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v34[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v35[3]; // [rsp+58h] [rbp-28h] BYREF
  float v36; // [rsp+B0h] [rbp+30h] BYREF

  v34[0] = a3;
  vIFIMetricsToEnumLogFontW(a2, a3);
  v7 = v34[0];
  v8 = 0;
  if ( (*(_DWORD *)(v34[0] + 48LL) & 0x3000010) != 0 )
  {
    v9 = 0;
    v36 = (float)*(__int16 *)(v34[0] + 76LL) * *(float *)&a4;
    v10 = (unsigned __int8)(SLODWORD(v36) >> 23) - 118;
    if ( v10 <= 40 )
    {
      v11 = LODWORD(v36) & 0x7FFFFFLL | 0x800000;
      v12 = v10 < 0 ? v11 >> (118 - (unsigned __int8)(SLODWORD(v36) >> 23)) : v11 << v10;
      v13 = (v12 + 0x80000000LL) >> 32;
      v9 = -(int)v13;
      if ( v36 >= 0.0 )
        v9 = v13;
    }
    a2->elfLogFont.lfWidth = v9;
    v14 = 0;
    v36 = (float)(*(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62)) * *(float *)&a4;
    v15 = (unsigned __int8)(SLODWORD(v36) >> 23) - 118;
    if ( v15 <= 40 )
    {
      v16 = LODWORD(v36) & 0x7FFFFFLL | 0x800000;
      v17 = v15 < 0 ? v16 >> (118 - (unsigned __int8)(SLODWORD(v36) >> 23)) : v16 << v15;
      v18 = (v17 + 0x80000000LL) >> 32;
      v14 = -(int)v18;
      if ( v36 >= 0.0 )
        v14 = v18;
    }
    a2->elfLogFont.lfHeight = v14;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v35, a1, 1026);
  if ( v35[0] )
  {
    if ( (*(_DWORD *)(v35[0] + 32LL) & 2) != 0 )
      return 1;
    IFIOBJ::pptlBaseline((IFIOBJ *)v34);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v34)->x;
    v29 = (float)v21;
    v28 = x;
    EFLOAT::eqLength(&v36, &v27, &v28);
    v30[0] = v28 / v36;
    v30[1] = v29 / v36;
    if ( (*(_DWORD *)(v35[0] + 32LL) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)v35, (struct VECTORFL *)v30, (struct VECTORFL *)v30, 1uLL) )
    {
      EFLOAT::eqLength(&v36, &v27, v30);
      v27 = 0;
      bFToL(v22, &v27, 0LL);
      a2->elfLogFont.lfWidth = v27;
      IFIOBJ::pptlBaseline((IFIOBJ *)v34);
      v23 = -IFIOBJ::pptlBaseline((IFIOBJ *)v34)->y;
      v32 = (float)v24;
      v31 = (float)v23;
      EFLOAT::eqLength(&v26, &v27, &v31);
      v33[0] = v31 / v26;
      v33[1] = v32 / v26;
      if ( (*(_DWORD *)(v35[0] + 32LL) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)v35, (struct VECTORFL *)v33, (struct VECTORFL *)v33, 1uLL) )
      {
        EFLOAT::eqLength(&v26, &v27, v33);
        v36 = 0.0;
        bFToL(v25, &v36, 0LL);
        *(float *)&a2->elfLogFont.lfHeight = v36;
        return 1;
      }
    }
  }
  return v8;
}
