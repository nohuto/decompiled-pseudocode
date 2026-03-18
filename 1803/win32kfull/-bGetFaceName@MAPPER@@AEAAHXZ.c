/*
 * XREFs of ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0040A34
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C003F3CC (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C0040BA0 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0040828 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C00408B4 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0040950 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 *     ?FindFaceName@@YAPEAGK@Z @ 0x1C00EA76C (-FindFaceName@@YAPEAGK@Z.c)
 */

__int64 __fastcall MAPPER::bGetFaceName(MAPPER *this)
{
  unsigned __int8 v1; // r10
  int v3; // edx
  __int64 v4; // rax
  char v5; // r8
  int v6; // eax
  char v7; // r9
  char v8; // r8
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  unsigned __int16 *FaceName; // rsi
  unsigned __int16 *v13; // rax

  v1 = *((_BYTE *)this + 284);
  if ( v1 == 1 )
    v1 = MAPPER::DefaultCharset;
  v3 = *((_DWORD *)this + 63) | 0x20000;
  v4 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 63) = v3;
  v5 = *(_BYTE *)(v4 + 27);
  v6 = v1 | 0x8000;
  v7 = v5 & 3;
  if ( (v5 & 3) != 1 )
    v6 = v1;
  v8 = v5 & 0x70;
  if ( v8 == 16 )
  {
    v9 = v6 | 0x4000;
  }
  else
  {
    v9 = v6;
    if ( !v7 && v8 == 48 )
      v9 = v6 | 0x8000;
  }
  v10 = v9 | 0x2000;
  if ( (v3 & 0x2000000) == 0 )
    v10 = v9;
  if ( v1 || (v3 & 0x100) == 0 || (v3 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_21;
  if ( (*((_DWORD *)this + 63) & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation((__int64 **)this) )
    goto LABEL_21;
  v11 = *((_DWORD *)this + 44);
  if ( v11 )
  {
    if ( v11 != 900 && v11 != 1800 && v11 != 2700 )
      goto LABEL_21;
  }
  FaceName = FindFaceName(v10 | 0x1000);
  if ( (unsigned int)MAPPER::bFindBitmapFont(this, FaceName)
    || (FaceName = FindFaceName(v10 | 0x800), (unsigned int)MAPPER::bFindBitmapFont(this, FaceName)) )
  {
    *((_QWORD *)this + 2) = FaceName;
    return 1LL;
  }
  if ( (*((_DWORD *)this + 63) & 0x100000) == 0 )
  {
LABEL_21:
    v13 = FindFaceName(v10);
    if ( *v13 || (*((_DWORD *)this + 63) & 0x40000000) == 0 )
      *((_QWORD *)this + 2) = v13;
    return 1LL;
  }
  return 0LL;
}
