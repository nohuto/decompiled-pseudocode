/*
 * XREFs of IsWindowShellCloaked @ 0x1C00C1194
 * Callers:
 *     xxxSetWindowData @ 0x1C0025B98 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355D0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *a1, int a2)
{
  struct tagWND *TopLevelHostForComponent; // rbx
  unsigned int v4; // edi
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  TopLevelHostForComponent = a1;
  v4 = 0;
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelHostForComponent);
    if ( !(unsigned int)GetWindowCompositionInfo((__int64)TopLevelHostForComponent, (__int64)v6) )
      break;
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v4;
    TopLevelHostForComponent = (struct tagWND *)*((_QWORD *)TopLevelHostForComponent + 10);
    a1 = TopLevelHostForComponent;
  }
  return v4;
}
