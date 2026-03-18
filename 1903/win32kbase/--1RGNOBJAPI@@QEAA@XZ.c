/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0029D08
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     NtGdiDeleteObjectApp @ 0x1C0022090 (NtGdiDeleteObjectApp.c)
 *     GreCombineRgn @ 0x1C00242A0 (GreCombineRgn.c)
 *     GreRectInRegion @ 0x1C002CB60 (GreRectInRegion.c)
 *     GreCopyVisRgn @ 0x1C003D6D0 (GreCopyVisRgn.c)
 *     GrePtInRegion @ 0x1C0082620 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C009B3F0 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C009C270 (NtGdiEqualRgn.c)
 *     EngDeleteRgn @ 0x1C01313F0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0131460 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0026BE0 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 4) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
}
