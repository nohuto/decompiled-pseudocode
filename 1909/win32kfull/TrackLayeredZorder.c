/*
 * XREFs of TrackLayeredZorder @ 0x1C002D564
 * Callers:
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 * Callees:
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00295A4 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C002D5EC (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     GreZorderSprite @ 0x1C003005C (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  HWND v4; // rdi
  struct tagWND *NextLayeredWindow; // rax

  LOBYTE(v2) = IsDesktopWindow((__int64)a1);
  v4 = 0LL;
  if ( v2 && (unsigned int)IsWindowDesktopComposed(v3) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  if ( NextLayeredWindow )
    v4 = *(HWND *)NextLayeredWindow;
  IsWindowDesktopComposed(a1);
  GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v4);
  ReorderChildrenSpriteList(a1, a1);
}
