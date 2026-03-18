/*
 * XREFs of ?IsTargetCurrentActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C001B4DC
 * Callers:
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00D339C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C02BF4E0 (-SetTargetGamma@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsTargetCurrentActive(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 417) )
    return (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 67) + 168LL) == 14;
  return v1;
}
