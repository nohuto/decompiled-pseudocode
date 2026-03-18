/*
 * XREFs of ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C0024A80
 * Callers:
 *     cjCopyFontDataW @ 0x1C0026910 (cjCopyFontDataW.c)
 * Callees:
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C0024C10 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ @ 0x1C008639C (-pptlBaseline@IFIOBJ@@QEAAPEAU_POINTL@@XZ.c)
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
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
  __int64 v19; // rdx
  float x; // xmm0_4
  int v22; // r8d
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rcx
  LONG v27; // [rsp+20h] [rbp-60h] BYREF
  float v28; // [rsp+28h] [rbp-58h] BYREF
  float v29; // [rsp+2Ch] [rbp-54h]
  float v30[2]; // [rsp+30h] [rbp-50h] BYREF
  float v31; // [rsp+38h] [rbp-48h] BYREF
  float v32; // [rsp+3Ch] [rbp-44h]
  float v33[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  int v35; // [rsp+50h] [rbp-30h]
  int v36; // [rsp+54h] [rbp-2Ch]
  _QWORD v37[3]; // [rsp+58h] [rbp-28h] BYREF
  float v38; // [rsp+A0h] [rbp+20h] BYREF
  float v39; // [rsp+B0h] [rbp+30h] BYREF

  v37[0] = a3;
  vIFIMetricsToEnumLogFontW(a2, a3);
  v7 = v37[0];
  v8 = 0;
  if ( (*(_DWORD *)(v37[0] + 48LL) & 0x3000010) != 0 )
  {
    v9 = 0;
    v38 = (float)*(__int16 *)(v37[0] + 76LL) * *(float *)&a4;
    v10 = (unsigned __int8)(SLODWORD(v38) >> 23) - 118;
    if ( v10 <= 40 )
    {
      v11 = LODWORD(v38) & 0x7FFFFFLL | 0x800000;
      v12 = v10 < 0 ? v11 >> (118 - (unsigned __int8)(SLODWORD(v38) >> 23)) : v11 << v10;
      v13 = (v12 + 0x80000000LL) >> 32;
      v9 = -(int)v13;
      if ( v38 >= 0.0 )
        v9 = v13;
    }
    a2->elfLogFont.lfWidth = v9;
    v14 = 0;
    v38 = (float)(*(__int16 *)(v7 + 60) + *(__int16 *)(v7 + 62)) * *(float *)&a4;
    v15 = (unsigned __int8)(SLODWORD(v38) >> 23) - 118;
    if ( v15 <= 40 )
    {
      v16 = LODWORD(v38) & 0x7FFFFFLL | 0x800000;
      v17 = v15 < 0 ? v16 >> (118 - (unsigned __int8)(SLODWORD(v38) >> 23)) : v16 << v15;
      v18 = (v17 + 0x80000000LL) >> 32;
      v14 = -(int)v18;
      if ( v38 >= 0.0 )
        v14 = v18;
    }
    a2->elfLogFont.lfHeight = v14;
  }
  v19 = *(_QWORD *)a1;
  v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL);
  v36 = *(_DWORD *)(*(_QWORD *)(v19 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v34, a1, 0x402u, 0);
  if ( v34 )
  {
    if ( (*(_DWORD *)(v34 + 32) & 2) != 0 )
      return 1;
    IFIOBJ::pptlBaseline((IFIOBJ *)v37);
    x = (float)IFIOBJ::pptlBaseline((IFIOBJ *)v37)->x;
    v29 = (float)v22;
    v28 = x;
    EFLOAT::eqLength(&v38, &v27, &v28);
    v30[0] = v28 / v38;
    v30[1] = v29 / v38;
    if ( (*(_DWORD *)(v34 + 32) & 2) != 0
      || EXFORMOBJ::bXform((EXFORMOBJ *)&v34, (struct VECTORFL *)v30, (struct VECTORFL *)v30, 1uLL) )
    {
      EFLOAT::eqLength(&v38, &v27, v30);
      v27 = 0;
      bFToL(v23, &v27, 0LL);
      a2->elfLogFont.lfWidth = v27;
      IFIOBJ::pptlBaseline((IFIOBJ *)v37);
      v24 = -IFIOBJ::pptlBaseline((IFIOBJ *)v37)->y;
      v32 = (float)v25;
      v31 = (float)v24;
      EFLOAT::eqLength(&v39, &v27, &v31);
      v33[0] = v31 / v39;
      v33[1] = v32 / v39;
      if ( (*(_DWORD *)(v34 + 32) & 2) != 0
        || EXFORMOBJ::bXform((EXFORMOBJ *)&v34, (struct VECTORFL *)v33, (struct VECTORFL *)v33, 1uLL) )
      {
        EFLOAT::eqLength(&v39, &v27, v33);
        v38 = 0.0;
        bFToL(v26, &v38, 0LL);
        *(float *)&a2->elfLogFont.lfHeight = v38;
        return 1;
      }
    }
  }
  return v8;
}
