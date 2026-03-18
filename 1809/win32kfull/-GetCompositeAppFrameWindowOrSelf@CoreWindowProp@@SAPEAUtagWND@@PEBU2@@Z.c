/*
 * XREFs of ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324
 * Callers:
 *     NtUserNavigateFocus @ 0x1C00055F0 (NtUserNavigateFocus.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00057F0 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_ @ 0x1C0009CD0 (_lambda_0d160d279100fee8fb6f37f20079cc99_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000FD08 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     NtUserGetForegroundWindow @ 0x1C006E490 (NtUserGetForegroundWindow.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01E68E0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

struct tagWND *__fastcall CoreWindowProp::GetCompositeAppFrameWindowOrSelf(const struct tagWND *a1)
{
  struct tagWND *TopLevelHostForComponent; // rax
  struct tagWND *result; // rax

  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(a1);
  result = (struct tagWND *)GetTopLevelWindow(TopLevelHostForComponent);
  if ( !result )
    return a1;
  return result;
}
