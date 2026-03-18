/*
 * XREFs of ?DiscardResource@CD3DDeviceLevel1@@QEAAXPEAUID3D11Resource@@@Z @ 0x18015C9AC
 * Callers:
 *     ?Discard@CHwSurfaceRenderTarget@@UEAAXXZ @ 0x1801683D0 (-Discard@CHwSurfaceRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 */

void __fastcall CD3DDeviceLevel1::DiscardResource(CD3DDeviceLevel1 *this, struct ID3D11Resource *a2)
{
  if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 80) + 936LL))(*((_QWORD *)this + 80));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_RENDEROPT_DISCARDRESOURCEEVENT, a2);
  }
}
