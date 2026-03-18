/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C00225E0 (NtGdiDeleteObjectApp.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     GreRectInRegion @ 0x1C002C4B0 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C007ED00 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0099FF0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C009A990 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C012EC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C012ECB0 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0266238 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0027100 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
