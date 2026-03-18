/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1C007C8A0
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C00743A0 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C007C300 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  float v5; // xmm0_4
  __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 96;
  if ( a2 )
  {
    v4 = *a2;
    goto LABEL_5;
  }
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    if ( !(unsigned int)UserIsWindowGdiScaled(v3, &v6) )
    {
      v4 = 96;
LABEL_5:
      v6 = v4;
      goto LABEL_6;
    }
  }
  else if ( (unsigned int)UserIsCurrentThreadGdiScaled() )
  {
    return;
  }
  v4 = v6;
LABEL_6:
  if ( v4 == 96 )
  {
    if ( (*((_DWORD *)this + 41) & 0x20) != 0 )
    {
      *((_DWORD *)this + 39) = 0;
      *((_DWORD *)this + 40) = 0;
      *((_DWORD *)this + 41) &= ~0x20u;
    }
  }
  else
  {
    v5 = (float)(unsigned __int16)GreGetScaledLogPixels(v4) / 96.0;
    *((float *)this + 39) = v5;
    *((float *)this + 40) = v5;
    *((_DWORD *)this + 41) |= 0x20u;
  }
}
