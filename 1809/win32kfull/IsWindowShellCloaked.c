/*
 * XREFs of IsWindowShellCloaked @ 0x1C000ED34
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x1C0065ECC (xxxSetWindowData.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
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
    if ( !TopLevelHostForComponent || !(unsigned int)GetWindowCompositionInfo(TopLevelHostForComponent, v6) )
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
