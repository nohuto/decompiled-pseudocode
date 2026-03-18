/*
 * XREFs of TrackLayeredZorder @ 0x1C0074B68
 * Callers:
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 * Callees:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C0074BE4 (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C007608C (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     GreZorderSprite @ 0x1C0077AAC (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rax

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow(a1) && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 11);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3);
  ReorderChildrenSpriteList(a1, a1);
}
