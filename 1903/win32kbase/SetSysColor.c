/*
 * XREFs of SetSysColor @ 0x1C00521EC
 * Callers:
 *     xxxSetSysColors @ 0x1C0051FD4 (xxxSetSysColors.c)
 * Callees:
 *     GreSetBrushOwner @ 0x1C0019E60 (GreSetBrushOwner.c)
 *     GreGetNearestColor @ 0x1C003A9A0 (GreGetNearestColor.c)
 *     HmgMarkUndeletable @ 0x1C0051F40 (HmgMarkUndeletable.c)
 *     ?GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z @ 0x1C0052358 (-GreSetSolidBrushInternal@@YAHPEAUHBRUSH__@@KHH@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C005248C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00524B8 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     hCreateSolidBrushInternal @ 0x1C0053500 (hCreateSolidBrushInternal.c)
 *     GreSetMagicColors @ 0x1C012FF4C (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(unsigned int a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rdi
  HBRUSH v6; // rcx
  __int64 SolidBrushInternal; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  PsEnterPriorityRegion();
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresRender);
  *((_DWORD *)gpsi + v4 + 1111) = NearestColor;
  if ( (a3 & 4) != 0
    && (*(_DWORD *)(gpDispInfo + 132) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*(HDC *)(gpDispInfo + 56));
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (_DWORD)v4 != 1
    && ((unsigned int)v4 <= 9
     || (unsigned int)v4 > 0xC && (_DWORD)v4 != 24 && ((unsigned int)v4 <= 0x1A || (unsigned int)v4 > 0x1C)) )
  {
    NearestColor = GreGetNearestColor(*(HDC *)(gpDispInfo + 56), NearestColor);
  }
  *((_DWORD *)gpsi + v4 + 1142) = NearestColor;
  v6 = (HBRUSH)*((_QWORD *)gpsi + v4 + 587);
  if ( v6 )
  {
    GreSetSolidBrushInternal(v6, NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(NearestColor, 0, 0LL, 0);
    *((_QWORD *)gpsi + v4 + 587) = SolidBrushInternal;
    if ( SolidBrushInternal )
      HmgMarkUndeletable(SolidBrushInternal, 16);
    GreSetBrushOwner(*((HBRUSH *)gpsi + v4 + 587), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v9, *((HBRUSH *)gpsi + v4 + 587));
    if ( v9[0] )
      *(_DWORD *)(v9[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v9);
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresRender);
  return PsLeavePriorityRegion();
}
