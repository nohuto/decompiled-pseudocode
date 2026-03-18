/*
 * XREFs of SetWindowGroupBand @ 0x1C0089E90
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C0086C10 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C00892FC (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0089838 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     xxxUpdateShadowZorder @ 0x1C023B1C8 (xxxUpdateShadowZorder.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0086880 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C00888C4 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C008A16C (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C00CADC0 (GetBandOrdinal.c)
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
  for ( i = (__int64)RootOwner; ; i = *(_QWORD *)(i + 96) )
  {
    v7 = *(_QWORD *)(i + 96);
    if ( !v7 || *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
  }
  do
  {
    result = *(_QWORD *)(i + 40);
    if ( *(_DWORD *)(result + 236) != v5 )
      break;
    v9 = *(_QWORD *)(i + 88);
    if ( (struct tagWND *)i != RootOwner )
    {
      result = HasOwnedWindowInTree((struct tagWND *)i, RootOwner);
      if ( !(_DWORD)result )
        continue;
    }
    UnlinkWindow(i, *(_QWORD *)(i + 104));
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
