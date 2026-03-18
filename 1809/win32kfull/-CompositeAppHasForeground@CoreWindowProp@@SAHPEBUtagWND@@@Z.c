/*
 * XREFs of ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     NtUserNavigateFocus @ 0x1C00055F0 (NtUserNavigateFocus.c)
 *     EditionIsAppForeground @ 0x1C01C3250 (EditionIsAppForeground.c)
 *     GetActiveTrackPwnd @ 0x1C01CED34 (GetActiveTrackPwnd.c)
 *     xxxInitializeMoveSizeData @ 0x1C01EB504 (xxxInitializeMoveSizeData.c)
 *     ?CanTransferForeground@CWindow@@QEBA_NXZ @ 0x1C0225254 (-CanTransferForeground@CWindow@@QEBA_NXZ.c)
 *     ?xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z @ 0x1C0226F98 (-xxxRevalidateAndTransferCapture@CMoveSizeRequest@@AEAA_NPEAUtagWND@@@Z.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0227278 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
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
  v2 = *(_QWORD *)(gpqForeground + 120LL);
  if ( !v2 )
    return 0LL;
  TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(a1);
  v4 = GetTopLevelWindow(v2);
  v5 = (const struct tagWND *)v4;
  if ( !TopLevelWindow || !v4 )
    return 0LL;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
  v7 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v5);
  if ( CompositeAppFrameWindowOrSelf == v7 || *((struct tagWND **)CompositeAppFrameWindowOrSelf + 23) == v7 )
    return 1;
  return v1;
}
