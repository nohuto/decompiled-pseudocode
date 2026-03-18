/*
 * XREFs of FBadWindow @ 0x1C006BF08
 * Callers:
 *     ?GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C006B654 (-GetImmersiveRealmFallbackWindow@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsWindowHolographicForHitTest @ 0x1C00352C0 (IsWindowHolographicForHitTest.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 */

__int64 __fastcall FBadWindow(__int64 a1)
{
  unsigned int v1; // ebx
  char v3; // dl
  struct tagWND *CompositeAppFrameWindowOrSelf; // rdi

  v1 = 0;
  if ( !a1 )
    return 1;
  v3 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
  if ( (v3 & 0x10) == 0 )
    return 1;
  if ( (v3 & 8) != 0 )
    return 1;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)a1);
  if ( !(unsigned int)IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf) )
  {
    if ( (unsigned int)GetWindowCloakState(CompositeAppFrameWindowOrSelf) )
      return 1;
  }
  return v1;
}
