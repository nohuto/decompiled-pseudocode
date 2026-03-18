/*
 * XREFs of ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C0098448
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0097464 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C009CF80 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C009D0E0 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bInitCache(RFONTOBJ *this, int a2)
{
  __int64 v2; // r8
  unsigned int v5; // ebp
  int v6; // edx
  int v7; // edx
  __int64 v8; // rdi
  int v9; // ebx
  struct DHPDEV__ *v10; // rdx
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rcx
  unsigned __int16 v15; // [rsp+40h] [rbp-88h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-80h] BYREF
  __int64 v17; // [rsp+50h] [rbp-78h] BYREF
  struct _GLYPHDATA v18; // [rsp+60h] [rbp-68h] BYREF

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
  v15 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL) + 118LL);
  RFONTOBJ::vXlatGlyphArray(this, &v15, 1u, &v16, 2u, 0);
  *(_DWORD *)(*(_QWORD *)this + 712LL) &= ~0x40u;
  v8 = *(_QWORD *)this;
  v9 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  memset(&v18, 0, sizeof(v18));
  v10 = *(struct DHPDEV__ **)(v8 + 112);
  v11 = v9 == 2;
  v12 = v16;
  v17 = *(_QWORD *)(v8 + 128);
  if ( (unsigned int)PFFOBJ::QueryFontData(
                       (PFFOBJ *)&v17,
                       v10,
                       (struct _FONTOBJ *)v8,
                       (unsigned int)v11 + 1,
                       v16,
                       &v18,
                       0LL,
                       0) == -1 )
    return 0;
  *(_DWORD *)(*(_QWORD *)this + 468LL) = v18.fxD;
  *(_DWORD *)(*(_QWORD *)this + 464LL) = v12;
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
    v14 = *(_QWORD *)(*(_QWORD *)this + 848LL);
    if ( v14 )
    {
      GreDeleteSemaphore(v14);
      *(_QWORD *)(*(_QWORD *)this + 848LL) = 0LL;
    }
    return 0;
  }
  return v5;
}
