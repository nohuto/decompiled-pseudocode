/*
 * XREFs of IsWindowShellCloaked @ 0x1C0017094
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetWindowData @ 0x1C00ABB50 (xxxSetWindowData.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027760 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall IsWindowShellCloaked(struct tagWND *TopLevelHostForComponent, int a2)
{
  unsigned int v2; // edi
  _WORD v6[28]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  memset(v6, 0, 0x28uLL);
  while ( 1 )
  {
    if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelHostForComponent) )
      TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelHostForComponent);
    if ( !TopLevelHostForComponent || !(unsigned int)GetWindowCompositionInfo(TopLevelHostForComponent, v6) )
      break;
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v2;
    TopLevelHostForComponent = (struct tagWND *)*((_QWORD *)TopLevelHostForComponent + 13);
  }
  return v2;
}
