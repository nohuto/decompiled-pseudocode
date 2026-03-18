/*
 * XREFs of GreGetObjectOwner @ 0x1C002EE00
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C00313E4 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0035470 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     hbmSelectBitmapInternal @ 0x1C0076C90 (hbmSelectBitmapInternal.c)
 *     EngCombineRgn @ 0x1C00D91E0 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C00D9280 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C00D9380 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C00D93F0 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C00D94A0 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C00D9500 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C00D9570 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C00D9610 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C00D9680 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C00D96E0 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C00D9770 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C00D9810 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C00D98B0 (EngXorRgn.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C002BDF0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
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
