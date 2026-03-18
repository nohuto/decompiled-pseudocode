/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0115874
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00096B0 (NtUserNavigateFocus.c)
 *     xxxSetModernAppWindow @ 0x1C0138F10 (xxxSetModernAppWindow.c)
 *     EditionIsAppForeground @ 0x1C01D6400 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x1C01E3484 (GetActiveTrackPwnd.c)
 *     xxxInitializeMoveSizeData @ 0x1C0200FD8 (xxxInitializeMoveSizeData.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0211D7C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C023D0B0 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C023E62C (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023E8E0 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 */

__int64 __fastcall CoreWindowProp::CompositeAppHasForeground(const struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  const struct tagWND *TopLevelWindow; // rsi
  __int64 v4; // rax
  const struct tagWND *v5; // rdi
  struct tagWND *CompositeAppFrameWindowOrSelf; // rsi
  struct tagWND *v7; // rax

  v1 = 0;
  if ( !gpqForeground )
    return 0LL;
  v2 = *(_QWORD *)(gpqForeground + 128LL);
  if ( !v2 )
    return 0LL;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
  v4 = GetTopLevelWindow(v2);
  v5 = (const struct tagWND *)v4;
  if ( !TopLevelWindow || !v4 )
    return 0LL;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v7 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
  if ( CompositeAppFrameWindowOrSelf == v7 || *((struct tagWND **)CompositeAppFrameWindowOrSelf + 25) == v7 )
    return 1;
  return v1;
}
