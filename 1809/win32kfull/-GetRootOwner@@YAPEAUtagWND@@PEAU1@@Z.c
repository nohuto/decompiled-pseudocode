/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000EEE4
 * Callers:
 *     _lambda_0d160d279100fee8fb6f37f20079cc99_::_lambda_invoker_cdecl_ @ 0x1C0009CD0 (_lambda_0d160d279100fee8fb6f37f20079cc99_--_lambda_invoker_cdecl_.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C000F588 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C000FEFC (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C0225CD8 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000FCE0 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetRootOwner(struct tagWND *a1)
{
  struct tagWND *RealOwner; // rax
  __int64 v3; // r8

  while ( 1 )
  {
    RealOwner = GetRealOwner(a1);
    if ( !RealOwner || *(char *)(*((_QWORD *)RealOwner + 5) + 19LL) < 0 )
      break;
    a1 = RealOwner;
  }
  return (struct tagWND *)v3;
}
