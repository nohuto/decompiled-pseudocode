/*
 * XREFs of ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016C05C
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180049840 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016B83C (-IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18016BA38 (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

char __fastcall COverlayContext::IsRevokable(COverlayContext *this, const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v4; // di

  v4 = 1;
  if ( *((_WORD *)a2 + 92)
    || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 112LL))(*((_QWORD *)a2 + 2))
    || (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 232LL))(*((_QWORD *)a2 + 1)) == 9
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 120LL))(*((_QWORD *)a2 + 2))
    || COverlayContext::IsFullscreen(this, a2) && *((_BYTE *)a2 + 187) )
  {
    return 0;
  }
  return v4;
}
