/*
 * XREFs of ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800CBFC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 */

__int64 __fastcall CD2DLayer::RestoreState(CD2DLayer *this, struct CDrawingContext *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Start);
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)a2 + 48) + 64LL))(*((_QWORD *)a2 + 48), (char *)a2 + 8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_LAYEREVENT_EndLayer_Stop);
  return 0LL;
}
