/*
 * XREFs of ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C007BE98 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     NtGdiSetPixel @ 0x1C008E4B0 (NtGdiSetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     ?bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C009C4B0 (-bStretch@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009C984 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C009D650 (-ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C009E760 (-GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00A7E90 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     NtGdiFastPolyPolyline @ 0x1C00E27E0 (NtGdiFastPolyPolyline.c)
 *     NtGdiFrameRgn @ 0x1C01182C0 (NtGdiFrameRgn.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C011B210 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     NtGdiFillRgn @ 0x1C011C820 (NtGdiFillRgn.c)
 *     NtGdiExtFloodFill @ 0x1C0122B80 (NtGdiExtFloodFill.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C025C294 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     NtGdiUpdateColors @ 0x1C0288210 (NtGdiUpdateColors.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall XDCOBJ::vAccumulateTight(struct _RECTL **this, struct ECLIPOBJ *a2, __m128i *a3)
{
  struct _RECTL *v3; // rdx
  __m128i v5; // xmm0
  __int64 v6; // rax
  LONG v7; // r9d
  int v8; // ecx
  int v9; // r8d
  LONG left; // r10d
  int top; // eax
  __int64 v12; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  __m128i v15; // [rsp+48h] [rbp-18h] BYREF

  v3 = *this;
  v5 = *a3;
  v15 = v5;
  v6 = v3[2].right & 1;
  v7 = _mm_cvtsi128_si32(v5) - *(&v3[89].left + 2 * v6);
  v15.m128i_i32[0] = v7;
  v8 = v5.m128i_i32[2] - *(&v3[89].left + 2 * v6);
  v15.m128i_i32[2] = v8;
  v9 = v5.m128i_i32[1] - *(&v3[89].top + 2 * v6);
  v15.m128i_i32[1] = v9;
  v15.m128i_i32[3] = v5.m128i_i32[3] - *(&v3[89].top + 2 * v6);
  if ( (v3[2].top & 0x40) != 0 )
  {
    left = v3[93].left;
    if ( left == v3[93].right || (top = v3[93].top, top == v3[93].bottom) )
    {
      v3[93] = (struct _RECTL)v15;
    }
    else
    {
      if ( v7 < left )
      {
        v3[93].left = v7;
        v8 = v15.m128i_i32[2];
        v9 = v15.m128i_i32[1];
      }
      if ( v9 < top )
      {
        v3[93].top = v9;
        v8 = v15.m128i_i32[2];
      }
      if ( v8 > v3[93].right )
        v3[93].right = v8;
      if ( v15.m128i_i32[3] > v3[93].bottom )
        v3[93].bottom = v15.m128i_i32[3];
    }
    v12 = *(_QWORD *)&(*this)[98].right;
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
          *(_QWORD *)&(*this)[98].right = v12;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v14);
    }
  }
}
