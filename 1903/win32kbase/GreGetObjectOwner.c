/*
 * XREFs of GreGetObjectOwner @ 0x1C007A080
 * Callers:
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C001649C (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     hbmSelectBitmap @ 0x1C001A230 (hbmSelectBitmap.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0027FC0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00AD4C0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngCombineRgn @ 0x1C0131250 (EngCombineRgn.c)
 *     EngCopyRgn @ 0x1C01312F0 (EngCopyRgn.c)
 *     EngDeleteRgn @ 0x1C01313F0 (EngDeleteRgn.c)
 *     EngEqualRgn @ 0x1C0131460 (EngEqualRgn.c)
 *     EngGetRgnBox @ 0x1C0131510 (EngGetRgnBox.c)
 *     EngGetRgnData @ 0x1C0131570 (EngGetRgnData.c)
 *     EngIntersectRgn @ 0x1C01315E0 (EngIntersectRgn.c)
 *     EngOffsetRgn @ 0x1C0131680 (EngOffsetRgn.c)
 *     EngRectInRgn @ 0x1C01316F0 (EngRectInRgn.c)
 *     EngSetRectRgn @ 0x1C0131750 (EngSetRectRgn.c)
 *     EngSubtractRgn @ 0x1C01317E0 (EngSubtractRgn.c)
 *     EngUnionRgn @ 0x1C0131880 (EngUnionRgn.c)
 *     EngXorRgn @ 0x1C0131920 (EngXorRgn.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C001EB20 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C001ECE0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
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
