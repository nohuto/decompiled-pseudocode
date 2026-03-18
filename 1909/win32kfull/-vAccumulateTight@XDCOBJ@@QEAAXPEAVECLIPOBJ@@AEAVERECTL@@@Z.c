/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A3D64
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0008AF8 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C00A2320 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00A59CC (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C00A6544 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00BC0E0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C00DE848 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GreGradientFill @ 0x1C0124B4C (GreGradientFill.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 *     ?NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z @ 0x1C0152ED0 (-NtGdiFastPolyPolyline@@YAHPEAUHDC__@@PEBUtagPOINT@@PEBKK@Z.c)
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
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
