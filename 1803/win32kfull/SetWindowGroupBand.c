/*
 * XREFs of SetWindowGroupBand @ 0x1C006EDD0
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C006EBFC (zzzImeSetOwnerWindow.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     xxxUpdateShadowZorder @ 0x1C01FABB4 (xxxUpdateShadowZorder.c)
 * Callees:
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     GetBandOrdinal @ 0x1C002E63C (GetBandOrdinal.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006C050 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z @ 0x1C006D074 (-SetWindowTreeBand@@YAXPEAUtagWND@@W4ZBID@@@Z.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C006EEE8 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall SetWindowGroupBand(struct tagWND *a1, unsigned int a2, int a3)
{
  struct tagWND *RootOwner; // rdi
  int v5; // ebp
  unsigned int BandOrdinal; // eax
  __int64 v7; // rbx
  unsigned int v8; // r8d
  _BOOL8 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rsi

  RootOwner = a1;
  if ( !a3 )
    RootOwner = GetRootOwner(a1);
  v5 = *(_DWORD *)(*((_QWORD *)RootOwner + 5) + 236LL);
  GetBandOrdinal(v5);
  BandOrdinal = GetBandOrdinal(a2);
  v7 = (__int64)RootOwner;
  v9 = BandOrdinal >= v8;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 72);
    if ( !v10 || *(_DWORD *)(*(_QWORD *)(v10 + 40) + 236LL) != v5 )
      break;
    v7 = *(_QWORD *)(v7 + 72);
  }
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v7 + 40) + 236LL) != v5 )
      break;
    v11 = *(_QWORD *)(v7 + 64);
    if ( (struct tagWND *)v7 == RootOwner || (unsigned int)HasOwnedWindowInTree((struct tagWND *)v7, RootOwner) )
    {
      UnlinkWindow((struct tagTERMINAL *)v7, *(_QWORD *)(v7 + 80));
      if ( a2 != 1 )
      {
        SetOrClrWF(0LL, v7, 772LL, 1LL);
        SetOrClrWF(1LL, v7, 2056LL, 1LL);
      }
      SetWindowTreeBand(v7, a2);
      LinkWindow((struct tagWND *)v7, (_QWORD *)v9, *(__int64 **)(v7 + 80));
      v9 = v7;
    }
    v7 = v11;
  }
  while ( v11 );
}
