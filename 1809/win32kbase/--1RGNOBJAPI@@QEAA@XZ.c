/*
 * XREFs of ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0
 * Callers:
 *     GreGetRgnBox @ 0x1C001C9F0 (GreGetRgnBox.c)
 *     GreOffsetRgn @ 0x1C001CB60 (GreOffsetRgn.c)
 *     bDeleteRegion @ 0x1C001CC90 (bDeleteRegion.c)
 *     GreGetRegionData @ 0x1C001D400 (GreGetRegionData.c)
 *     GreSetRectRgn @ 0x1C001E010 (GreSetRectRgn.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F480 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C001F6F0 (SetRectRgnIndirect.c)
 *     NtGdiDeleteObjectApp @ 0x1C00207E0 (NtGdiDeleteObjectApp.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0027DBC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0028F5C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     GreCombineRgn @ 0x1C003A8B0 (GreCombineRgn.c)
 *     GreRectInRegion @ 0x1C006A120 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x1C0071910 (GrePtInRegion.c)
 *     GreIsValidRegion @ 0x1C0089B70 (GreIsValidRegion.c)
 *     NtGdiEqualRgn @ 0x1C008D3F0 (NtGdiEqualRgn.c)
 *     GreCopyVisRgn @ 0x1C009D9C0 (GreCopyVisRgn.c)
 *     EngDeleteRgn @ 0x1C01070E0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0107160 (EngEqualRgn.c)
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 *     ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0057F70 (-UpdateUserRgn@RGNOBJ@@QEAAXXZ.c)
 */

void __fastcall RGNOBJAPI::~RGNOBJAPI(RGNOBJAPI *this)
{
  if ( !*((_DWORD *)this + 12) )
    RGNOBJ::UpdateUserRgn(this);
  if ( *(_QWORD *)this )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
  PopThreadGuardedObject((char *)this + 8);
}
