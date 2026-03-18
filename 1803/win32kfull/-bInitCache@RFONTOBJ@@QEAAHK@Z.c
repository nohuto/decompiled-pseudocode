/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0084734
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0085C94 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0080A04 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  unsigned int v6; // eax
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // esi
  struct _FONTOBJ *v10; // r8
  bool v11; // zf
  struct DHPDEV__ *v12; // rdx
  unsigned __int16 v14; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-70h] BYREF
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  struct _GLYPHDATA v17; // [rsp+60h] [rbp-58h] BYREF

  v4 = *(_QWORD *)this + 504LL;
  v5 = 1;
  *(_QWORD *)(v4 + 24) = 0LL;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 44) = 0LL;
  *(_DWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_DWORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 88) = 0;
  *(_QWORD *)(v4 + 104) = 0LL;
  *(_QWORD *)(v4 + 112) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 472LL) = 0LL;
  *(_DWORD *)(v4 + 120) = 0;
  v6 = *(_DWORD *)(*(_QWORD *)this + 72LL);
  if ( v6 > 1 )
  {
    v7 = 0;
    if ( v6 != 2 )
      goto LABEL_4;
    v7 = 0x8000;
  }
  else
  {
    v7 = *(_DWORD *)(*(_QWORD *)this + 344LL);
  }
  *(_DWORD *)(v4 + 120) = v7;
LABEL_4:
  *(_DWORD *)(*(_QWORD *)this + 68LL) = a2;
  v8 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 72LL) && (unsigned int)(2 * v7) > 0x10000 )
  {
    *(_DWORD *)(*(_QWORD *)this + 68LL) |= 1u;
    v8 = *(_QWORD *)this;
  }
  v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 104) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v14, 1u, &v15, 2u, 0);
  v9 = v15;
  *(_DWORD *)(*(_QWORD *)this + 696LL) &= ~0x40u;
  v10 = *(struct _FONTOBJ **)this;
  v11 = *(_DWORD *)(*(_QWORD *)this + 72LL) == 2;
  v12 = *(struct DHPDEV__ **)(*(_QWORD *)this + 96LL);
  v16 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  if ( (unsigned int)PFFOBJ::QueryFontData((PFFOBJ *)&v16, v12, v10, (unsigned int)v11 + 1, v9, &v17, 0LL, 0) == -1 )
    return 0;
  *(_DWORD *)(*(_QWORD *)this + 456LL) = v17.fxD;
  *(_DWORD *)(*(_QWORD *)this + 452LL) = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 104LL) + 12LL) & 8) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)this + 832LL) = 0LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 832LL) = GreCreateSemaphore();
    if ( !*(_QWORD *)(*(_QWORD *)this + 832LL) )
      return 0;
  }
  *(_QWORD *)(*(_QWORD *)this + 496LL) = GreCreateSemaphore();
  if ( !*(_QWORD *)(*(_QWORD *)this + 496LL) )
  {
    if ( *(_QWORD *)(*(_QWORD *)this + 832LL) )
    {
      GreDeleteSemaphore();
      *(_QWORD *)(*(_QWORD *)this + 832LL) = 0LL;
    }
    return 0;
  }
  return v5;
}
