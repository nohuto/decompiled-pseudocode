/*
 * XREFs of ?GetDcompTarget@CDWMDisplay@@QEAAPEAUIDCompositionRenderTargetPartner@@XZ @ 0x18002B01C
 * Callers:
 *     ?GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV?$DynArray@PEAUIDCompositionRenderTargetPartner@@$0A@@@PEAPEBVCDWMDisplay@@PEA_N2PEAH3@Z @ 0x18002AA24 (-GetDcompTargetsForNewGroup@CDesktopManager@@AEAAJPEAV-$DynArray@PEAUIDCompositionRenderTargetPa.c)
 *     ?UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z @ 0x18007FF24 (-UpdateSDRToHDRBoost@CDesktopManager@@QEAAJPEAUHMONITOR__@@M@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

struct IDCompositionRenderTargetPartner *__fastcall CDWMDisplay::GetDcompTarget(CDWMDisplay *this)
{
  __int64 v1; // rdx

  v1 = *((_QWORD *)this + 1);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*((_QWORD *)this + 1));
    return (struct IDCompositionRenderTargetPartner *)*((_QWORD *)this + 1);
  }
  return (struct IDCompositionRenderTargetPartner *)v1;
}
