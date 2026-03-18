/*
 * XREFs of ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     _GetMenuState @ 0x1C000BD6C (_GetMenuState.c)
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00291F8 (IsToplevelWindowDesktopComposed.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 */

void __fastcall xxxDWP_NCMouse(struct tagWND *a1, unsigned int a2, unsigned int a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 SysMenu; // rax

  if ( a2 != 161 )
  {
    if ( a2 <= 0xA1 || a2 > 0xA3 )
      return;
    goto LABEL_18;
  }
  if ( a3 < 8 || a3 > 9 && a3 - 20 > 1 )
  {
    if ( a3 - 10 > 7 )
      goto LABEL_18;
    v6 = a3 + 61431;
  }
  else
  {
    if ( (unsigned int)IsToplevelWindowDesktopComposed() && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      v5 = xxxDCETrackCaptionButton(a1, a3);
    else
      v5 = xxxTrackCaptionButton(a1, a3);
    v6 = v5;
  }
  if ( !v6 )
  {
LABEL_18:
    xxxHandleNCMouseGuys(a1);
    return;
  }
  if ( v6 == 61824
    || (v7 = *((_QWORD *)a1 + 5), (*(_BYTE *)(v7 + 30) & 8) == 0)
    || (*(_BYTE *)(v7 + 31) & 0xC0) == 0x40
    || (SysMenu = xxxGetSysMenu(a1), (GetMenuState(SysMenu, (unsigned __int16)v6 & 0xFFF0) & 3) == 0) )
  {
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 1);
  }
}
