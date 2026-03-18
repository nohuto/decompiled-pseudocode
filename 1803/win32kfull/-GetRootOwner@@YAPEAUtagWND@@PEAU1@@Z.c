/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006C050
 * Callers:
 *     ?GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActivationOption@1@@Z @ 0x1C006B5FC (-GetWindowForActivation@WindowGroupingWindowManagement@@YAPEAUtagWND@@PEAU2@W4GetWindowForActiva.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C006DFF0 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C006F4AC (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z @ 0x1C01FD274 (-TemplateWindow@CWindow@@QEAA_NPEAUtagWND@@_N@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006EBD4 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
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
