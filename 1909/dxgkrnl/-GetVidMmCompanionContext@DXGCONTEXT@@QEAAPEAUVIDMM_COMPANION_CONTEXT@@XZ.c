/*
 * XREFs of ?GetVidMmCompanionContext@DXGCONTEXT@@QEAAPEAUVIDMM_COMPANION_CONTEXT@@XZ @ 0x1C020DEB8
 * Callers:
 *     DxgkUpdateGpuVirtualAddress @ 0x1C020A220 (DxgkUpdateGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ @ 0x1C020DF24 (-GetVidSchCompanionContext@DXGCONTEXT@@QEAAPEAU_VIDSCH_CONTEXT@@XZ.c)
 */

struct VIDMM_COMPANION_CONTEXT *__fastcall DXGCONTEXT::GetVidMmCompanionContext(DXGCONTEXT *this)
{
  struct _VIDSCH_CONTEXT *VidSchCompanionContext; // rax

  if ( !*((_QWORD *)this + 36) )
  {
    VidSchCompanionContext = DXGCONTEXT::GetVidSchCompanionContext(this);
    if ( VidSchCompanionContext )
      *((_QWORD *)this + 36) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct _VIDSCH_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 544LL) + 8LL) + 992LL))(
                                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                                 *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
                                 VidSchCompanionContext);
  }
  return (struct VIDMM_COMPANION_CONTEXT *)*((_QWORD *)this + 36);
}
