/*
 * XREFs of IsWindowShellCloaked @ 0x1C0088160
 * Callers:
 *     xxxSetWindowData @ 0x1C0061928 (xxxSetWindowData.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4E0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     memset @ 0x1C0166840 (memset.c)
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
