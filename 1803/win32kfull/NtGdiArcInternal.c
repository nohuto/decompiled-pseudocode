/*
 * XREFs of NtGdiArcInternal @ 0x1C02818C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C007BC4C (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0096D1C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C01144F8 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C011D14C (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02806F8 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C0280E40 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C0281430 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 *     ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02815C8 (-vCosSin@@YAXVEFLOAT@@PEAV1@1@Z.c)
 *     ?vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C0281748 (-vCosSinPrecise@@YAXVEFLOAT@@PEAV1@1@Z.c)
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
  __m128i v25; // xmm7
  __m128i v26; // xmm6
  float v27; // esi
  int v28; // r14d
  float v29; // xmm2_4
  BOOL IsZero; // ecx
  BOOL v31; // eax
  _QWORD *Current; // rax
  __int64 v33; // r8
  unsigned int v34; // eax
  ULONG v35; // ecx
  float v37; // [rsp+58h] [rbp-B0h] BYREF
  struct _RECTL v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v40; // [rsp+74h] [rbp-94h] BYREF
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
  PATHOBJ v51[10]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v52[32]; // [rsp+148h] [rbp+40h] BYREF
  int v53; // [rsp+168h] [rbp+60h]

  v38.right = a5;
  v38.bottom = a6;
  v38.left = a3;
  v38.top = a4;
  MDCOBJ::MDCOBJ((MDCOBJ *)v41, a2);
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
  v12 = v41[0][10];
  v13 = *(_DWORD *)(*(_QWORD *)&v12 + 8LL);
  if ( (v13 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v41[0], *(_QWORD *)(*(_QWORD *)&v12 + 16LL));
    v11 = v41[0];
  }
  if ( (v13 & 0x2000) != 0 )
    GreDCSelectPen(v11, *(_QWORD *)(*(_QWORD *)&v11[10] + 24LL));
  v14 = 1;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v51, (DC **)v41, a1 == 1);
  if ( !*(_QWORD *)&v51[1] )
  {
    EngSetLastError(8u);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v44, (struct XDCOBJ *)v41, 516);
  EBOX::EBOX((EBOX *)v45, (struct DCOBJ *)v41, &v38, (struct _LINEATTRS *)&v41[0][27], 1);
  if ( v45[1] )
    goto LABEL_10;
  if ( !v45[0] )
  {
    LODWORD(v15) = efHalfDiff(v48, -v50);
    LODWORD(v20) = efHalfDiff(v47, -v49);
    if ( v16 == v19 || v18 == v17 )
    {
      v28 = 0;
      v27 = 0.0;
      v26 = (__m128i)FP_0_0;
      v40 = FP_0_0;
      v25 = (__m128i)FP_0_0;
      v39 = FP_0_0;
    }
    else
    {
      v21 = COERCE_FLOAT(efHalfDiff(v19, v16));
      v24 = COERCE_FLOAT(efHalfDiff(v23, v22));
      *(float *)&v38.top = (float)((float)a8 - v15) / v24;
      *(float *)&v38.left = (float)((float)a7 - v20) / v21;
      vArctan(v38.left, v38.top, (float *)&v40, &v37);
      *(float *)&v38.top = (float)((float)a10 - v15) / v24;
      *(float *)&v38.left = (float)((float)a9 - v20) / v21;
      vArctan(v38.left, v38.top, (float *)&v39, &v42);
      v25 = (__m128i)v39;
      v26 = (__m128i)v40;
      v27 = v37;
      v28 = v42;
    }
    v29 = *(float *)v25.m128i_i32 - *(float *)v26.m128i_i32;
    v37 = *(float *)v25.m128i_i32 - *(float *)v26.m128i_i32;
    if ( (float)(*(float *)v25.m128i_i32 - *(float *)v26.m128i_i32) < 0.0 )
    {
      LODWORD(v29) ^= _xmm;
      v37 = v29;
    }
    IsZero = EFLOAT::bIsZero((EFLOAT *)&v37);
    if ( (float)(v29 - FP_3_0) >= 0.0 || IsZero )
    {
      vCosSin(_mm_cvtsi128_si32(v26), (float *)&v42, &v43);
      vCosSin(_mm_cvtsi128_si32(v25), (float *)&v38.left, (float *)&v38.top);
    }
    else
    {
      vCosSinPrecise(_mm_cvtsi128_si32(v26), (float *)&v42);
      vCosSinPrecise(_mm_cvtsi128_si32(v25), (float *)&v38.left);
    }
    v31 = LODWORD(v27) != v28 || *(float *)v25.m128i_i32 <= *(float *)v26.m128i_i32;
    if ( !(unsigned int)bPartialArc(
                          (unsigned int)(a1 == 1) + 1,
                          (EPATHOBJ *)v51,
                          (__int64)v45,
                          (__int64)&v42,
                          SLOBYTE(v27),
                          (__int64)&v40,
                          (__int64)&v38,
                          v28,
                          (__int64)&v39,
                          v31) )
      goto LABEL_10;
    if ( a1 == 1 )
    {
      *(_DWORD *)(*(_QWORD *)&v41[0][10] + 8LL) |= 0x100u;
      *(_DWORD *)(*(_QWORD *)&v41[0][10] + 8LL) &= ~0x200u;
      Current = (_QWORD *)EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)v51, &v38);
      *(_QWORD *)(v33 + 84) = *Current;
    }
    else
    {
      if ( a1 != 2 )
      {
        if ( a1 != 3 )
          goto LABEL_37;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)v51, 0LL, &v46, 1u) )
          goto LABEL_10;
      }
      if ( !EPATHOBJ::bCloseFigure((EPATHOBJ *)v51) )
        goto LABEL_10;
    }
LABEL_37:
    if ( (v41[0][32].x & 1) == 0 )
    {
      if ( a1 <= 1 )
        v34 = EPATHOBJ::bStrokeAndOrFill(v51, v41, (LINEATTRS *)&v41[0][27], &v44, 1u);
      else
        v34 = EPATHOBJ::bStrokeAndOrFill(v51, v41, (LINEATTRS *)&v41[0][27], &v44, 3u);
      v14 = v34;
    }
  }
LABEL_11:
  EPATHOBJ::vUnlock((EPATHOBJ *)v51);
  if ( v53 )
  {
    PopThreadGuardedObject(v52);
    v53 = 0;
  }
LABEL_45:
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  return v14;
}
