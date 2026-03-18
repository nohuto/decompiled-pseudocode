/*
 * XREFs of NtGdiArcInternal @ 0x1C02AA0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0076B50 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00FB094 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C00FC8F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C014E274 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02A95F8 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02A9BF8 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A9D94 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02A9F10 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
 */

__int64 __fastcall NtGdiArcInternal(
        int a1,
        HDC a2,
        LONG a3,
        LONG a4,
        LONG a5,
        LONG a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  POINTL *v11; // rcx
  POINTL v12; // rdx
  int v13; // ebx
  unsigned int v14; // ebx
  float v15; // xmm8_4
  int v16; // ecx
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  float v20; // xmm9_4
  float v21; // xmm6_4
  int v22; // r9d
  int v23; // r10d
  float v24; // xmm7_4
  __m128i v25; // xmm6
  __m128i v26; // xmm7
  float v27; // esi
  int v28; // r14d
  float v29; // xmm2_4
  BOOL IsZero; // ecx
  BOOL v31; // eax
  _QWORD *Current; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  ULONG v35; // ecx
  unsigned int v37; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+5Ch] [rbp-ACh] BYREF
  float v39; // [rsp+60h] [rbp-A8h] BYREF
  struct _RECTL v40; // [rsp+68h] [rbp-A0h] BYREF
  POINTL *v41[2]; // [rsp+78h] [rbp-90h] BYREF
  int v42; // [rsp+88h] [rbp-80h] BYREF
  float v43; // [rsp+8Ch] [rbp-7Ch] BYREF
  struct _XFORMOBJ v44; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v45[10]; // [rsp+A8h] [rbp-60h] BYREF
  struct _POINTL v46; // [rsp+D0h] [rbp-38h] BYREF
  int v47; // [rsp+E8h] [rbp-20h]
  int v48; // [rsp+ECh] [rbp-1Ch]
  int v49; // [rsp+F0h] [rbp-18h]
  int v50; // [rsp+F4h] [rbp-14h]
  PATHOBJ ppo; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v52; // [rsp+100h] [rbp-8h]
  _BYTE v53[32]; // [rsp+148h] [rbp+40h] BYREF
  int v54; // [rsp+168h] [rbp+60h]

  v40.right = a5;
  v40.bottom = a6;
  v40.left = a3;
  v40.top = a4;
  DCOBJ::DCOBJ((DCOBJ *)v41, a2);
  v11 = v41[0];
  if ( !v41[0] || (v41[0][4].y & 0x10000) != 0 )
  {
    v35 = 6;
    goto LABEL_44;
  }
  if ( (unsigned int)a1 > 3 )
  {
    v35 = 87;
LABEL_44:
    EngSetLastError(v35);
    v14 = 0;
    goto LABEL_45;
  }
  v12 = v41[0][122];
  v13 = *(_DWORD *)(*(_QWORD *)&v12 + 152LL);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v41[0], *(_QWORD *)(*(_QWORD *)&v12 + 160LL));
    v11 = v41[0];
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[122] + 168LL));
  v14 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v41, a1 == 1);
  if ( !v52 )
  {
    EngSetLastError(8u);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v44, (struct XDCOBJ *)v41, 516);
  EBOX::EBOX((EBOX *)v45, (struct DCOBJ *)v41, &v40, (struct _LINEATTRS *)&v41[0][26], 1);
  if ( v45[1] )
    goto LABEL_10;
  if ( !v45[0] )
  {
    LODWORD(v15) = efHalfDiff(v48, -v50);
    v38 = 0;
    v37 = 0;
    LODWORD(v20) = efHalfDiff(v47, -v49);
    if ( v16 == v19 || v18 == v17 )
    {
      v28 = 0;
      v27 = 0.0;
      v25 = (__m128i)FP_0_0;
      v38 = FP_0_0;
      v26 = (__m128i)FP_0_0;
      v37 = FP_0_0;
    }
    else
    {
      v21 = COERCE_FLOAT(efHalfDiff(v19, v16));
      v24 = COERCE_FLOAT(efHalfDiff(v23, v22));
      *(float *)&v40.top = (float)((float)a8 - v15) / v24;
      *(float *)&v40.left = (float)((float)a7 - v20) / v21;
      vArctan(v40.left, v40.top, (float *)&v38, &v39);
      *(float *)&v40.top = (float)((float)a10 - v15) / v24;
      *(float *)&v40.left = (float)((float)a9 - v20) / v21;
      vArctan(v40.left, v40.top, (float *)&v37, &v42);
      v25 = (__m128i)v38;
      v26 = (__m128i)v37;
      v27 = v39;
      v28 = v42;
    }
    v29 = *(float *)v26.m128i_i32 - *(float *)v25.m128i_i32;
    v39 = *(float *)v26.m128i_i32 - *(float *)v25.m128i_i32;
    if ( (float)(*(float *)v26.m128i_i32 - *(float *)v25.m128i_i32) < 0.0 )
    {
      LODWORD(v29) ^= _xmm;
      v39 = v29;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v39);
    if ( (float)(v29 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v25), (float *)&v42, &v43);
      vCosSin(_mm_cvtsi128_si32(v26), (float *)&v40.left, (float *)&v40.top);
    }
    else
    {
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v25), (__int64)&v42, (__int64)&v43);
      vCosSinPrecise((unsigned int)_mm_cvtsi128_si32(v26), (__int64)&v40, (__int64)&v40.top);
    }
    v31 = LODWORD(v27) != v28 || *(float *)v26.m128i_i32 <= *(float *)v25.m128i_i32;
    if ( !(unsigned int)bPartialArc(
                          (unsigned int)(a1 == 1) + 1,
                          (EPATHOBJ *)&ppo,
                          (__int64)v45,
                          (__int64)&v42,
                          SLOBYTE(v27),
                          (__int64)&v38,
                          (__int64)&v40,
                          v28,
                          (__int64)&v37,
                          v31) )
      goto LABEL_10;
    if ( a1 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)&v41[0][122] + 152LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)&v41[0][122] + 152LL) &= ~0x200u;
      Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v40);
      *(_QWORD *)(v33 + 8) = *Current;
    }
    else
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
          goto LABEL_37;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, 0LL, &v46, 1u) )
          goto LABEL_10;
      }
      if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo) )
        goto LABEL_10;
    }
LABEL_37:
    if ( (v41[0][31].x & 1) == 0 )
    {
      if ( a1 <= 1 )
        v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v41, (LINEATTRS *)&v41[0][26], &v44, 1u);
      else
        v34 = EPATHOBJ::bStrokeAndOrFill(&ppo, v41, (LINEATTRS *)&v41[0][26], &v44, 3u);
      v14 = v34;
    }
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
  if ( v54 )
  {
    PopThreadGuardedObject(v53);
    v54 = 0;
  }
LABEL_45:
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  return v14;
}
