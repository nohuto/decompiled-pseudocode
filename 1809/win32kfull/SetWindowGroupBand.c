/*
 * XREFs of SetWindowGroupBand @ 0x1C000EF18
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C000C0C4 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C000CB74 (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C000F030 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateShadowZorder @ 0x1C0222B78 (xxxUpdateShadowZorder.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000EEE4 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C000F67C (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C000FFBC (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C0043240 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C004379C (GetBandOrdinal.c)
 */

__int64 __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  unsigned int v5; // ebp
  __int64 i; // rbx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  GetBandOrdinal(a2);
  for ( i = (__int64)RootOwner; ; i = *(_QWORD *)(i + 72) )
  {
    v7 = *(_QWORD *)(i + 72);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = *(_QWORD *)(i + 40);
    if ( *(_DWORD *)(result + 236) != v5 )
      break;
    v9 = *(_QWORD *)(i + 64);
    if ( (struct tagWND *)i != RootOwner )
    {
      result = HasOwnedWindowInTree((struct tagWND *)i, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow(i, *(_QWORD *)(i + 80));
    if ( a2 != 1 )
    {
      SetOrClrWF(0, i, 0x304u, 1);
      SetOrClrWF(1, i, 0x808u, 1);
    }
    SetWindowTreeBand(i, a2);
    result = LinkWindow((struct tagWND *)i);
    i = v9;
  }
  while ( v9 );
  return result;
}
