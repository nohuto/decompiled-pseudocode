/*
 * XREFs of GreGetObjectOwner @ 0x1C00220F0
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0017DEC (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0028960 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C006BB50 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C00BB910 (hbmSelectBitmapInternal.c)
 *     EngCombineRgn @ 0x1C012EAA0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C012EB40 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C012EC40 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C012ECB0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C012ED60 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C012EDC0 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C012EE30 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C012EED0 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C012EF40 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C012EFA0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C012F030 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C012F0D0 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C012F170 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001FE60 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0020020 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall GreGetObjectOwner(unsigned int a1, int a2)
{
  GdiHandleManager *v2; // rbx
  __int16 v4; // esi^2
  unsigned int v5; // edi
  unsigned int v6; // eax
  struct _ENTRY *Entry; // rax

  v2 = gpHandleManager;
  v4 = HIWORD(a1);
  v5 = -2147483614;
  v6 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v2 + 2), v6, 0);
  if ( Entry && *((unsigned __int8 *)Entry + 14) == a2 && *((_WORD *)Entry + 6) == v4 )
    return *((_DWORD *)Entry + 2) & 0xFFFFFFFE;
  return v5;
}
