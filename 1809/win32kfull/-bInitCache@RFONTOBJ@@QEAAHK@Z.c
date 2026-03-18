/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0080AE4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C00855CC (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0083BC8 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v5; // edi
  int v6; // edx
  int v7; // edx
  unsigned int v8; // esi
  struct _FONTOBJ *v9; // r8
  bool v10; // zf
  struct DHPDEV__ *v11; // rdx
  unsigned __int16 v13; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-70h] BYREF
  __int64 v15; // [rsp+50h] [rbp-68h] BYREF
  struct _GLYPHDATA v16; // [rsp+60h] [rbp-58h] BYREF

  v2 = *(_QWORD *)this;
  *(_QWORD *)(v2 + 536) = 0LL;
  v5 = 1;
  *(_QWORD *)(v2 + 544) = 0LL;
  *(_QWORD *)(v2 + 556) = 0LL;
  *(_DWORD *)(v2 + 552) = 0;
  *(_QWORD *)(v2 + 576) = 0LL;
  *(_QWORD *)(v2 + 568) = 0LL;
  *(_QWORD *)(v2 + 592) = 0LL;
  *(_QWORD *)(v2 + 584) = 0LL;
  *(_DWORD *)(v2 + 564) = 0;
  *(_DWORD *)(v2 + 600) = 0;
  *(_QWORD *)(v2 + 616) = 0LL;
  *(_QWORD *)(v2 + 624) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 480LL) = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        *(_QWORD *)(v2 + 632) = 0x8000LL;
      else
        *(_QWORD *)(v2 + 632) = 0LL;
    }
    else if ( *(_DWORD *)(v2 + 632) > 0x8000u )
    {
      a2 |= 1u;
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 84LL) = a2;
  v13 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v13, 1u, &v14, 2u, 0);
  v8 = v14;
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  v9 = *(struct _FONTOBJ **)this;
  v10 = *(_DWORD *)(*(_QWORD *)this + 88LL) == 2;
  v11 = *(struct DHPDEV__ **)(*(_QWORD *)this + 112LL);
  v15 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v15, v11, v9, (unsigned int)v10 + 1, v8, &v16, 0LL, 0) == -1 )
    return 0;
  *(_DWORD *)(*(_QWORD *)this + 468LL) = v16.fxD;
  *(_DWORD *)(*(_QWORD *)this + 464LL) = v8;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 12LL) & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 848LL) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 848LL) = GreCreateSemaphore();
    if ( !*(_QWORD *)(*(_QWORD *)this + 848LL) )
      return 0;
  }
  *(_QWORD *)(*(_QWORD *)this + 504LL) = GreCreateSemaphore();
  if ( !*(_QWORD *)(*(_QWORD *)this + 504LL) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 848LL) )
    {
      GreDeleteSemaphore();
      *(_QWORD *)(*(_QWORD *)this + 848LL) = 0LL;
    }
    return 0;
  }
  return v5;
}
