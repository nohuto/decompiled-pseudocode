/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0086880
 * Callers:
 *     _lambda_75e919a46692d6b7e31e9e50a1c7a298_::_lambda_invoker_cdecl_ @ 0x1C000F9B0 (_lambda_75e919a46692d6b7e31e9e50a1c7a298_--_lambda_invoker_cdecl_.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0088804 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0089D9C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z @ 0x1C023E180 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@W4TemplateWindowOptions@@@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C008C0A8 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
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
