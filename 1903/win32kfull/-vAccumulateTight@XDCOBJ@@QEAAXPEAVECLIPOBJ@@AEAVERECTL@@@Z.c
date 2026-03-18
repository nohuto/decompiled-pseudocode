/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C0058A1C (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C005C26C (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C005CDE4 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0072150 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0073164 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0075DA0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00FA93C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFrameRgn @ 0x1C0145A10 (NtGdiFrameRgn.c)
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0146DC0 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C01472A0 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152110 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     NtGdiUpdateColors @ 0x1C02B0E00 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(XDCOBJ *this, struct ECLIPOBJ *a2, __m128i *a3)
{
  _DWORD *v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  LONG v7; // r9d
  int v8; // ecx
  int v9; // r8d
  LONG v10; // r10d
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i v15; // [rsp+48h] [rbp-18h] BYREF

  v3 = *(_DWORD **)this;
  v5 = *a3;
  v15 = v5;
  v6 = v3[10] & 1;
  v7 = _mm_cvtsi128_si32(v5) - v3[2 * v6 + 254];
  v15.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - v3[2 * v6 + 254];
  v15.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - v3[2 * v6 + 255];
  v15.m128i_i32[1] = v9;
  v15.m128i_i32[3] = v5.m128i_i32[3] - v3[2 * v6 + 255];
  if ( (v3[9] & 0x40) != 0 )
  {
    v10 = v3[270];
    if ( v10 == v3[272] || (v11 = v3[271], v11 == v3[273]) )
    {
      *(__m128i *)(v3 + 270) = v15;
    }
    else
    {
      if ( v7 < v10 )
      {
        v3[270] = v7;
        v8 = v15.m128i_i32[2];
        v9 = v15.m128i_i32[1];
      }
      if ( v9 < v11 )
      {
        v3[271] = v9;
        v8 = v15.m128i_i32[2];
      }
      if ( v8 > v3[272] )
        v3[272] = v8;
      if ( v15.m128i_i32[3] > v3[273] )
        v3[273] = v15.m128i_i32[3];
    }
    v12 = *(_QWORD *)(*(_QWORD *)this + 1168LL);
    if ( v12 )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v14);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v14);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
      if ( v14[0] && v13[0] )
      {
        RGNOBJ::vSet((RGNOBJ *)v13, (struct _RECTL *)&v15);
        if ( RGNOBJ::bMerge((RGNOBJ *)v14, (struct RGNOBJ *)&v12, (struct RGNOBJ *)v13, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v12, (struct RGNOBJ *)v14);
          *(_QWORD *)(*(_QWORD *)this + 1168LL) = v12;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
    }
  }
}
