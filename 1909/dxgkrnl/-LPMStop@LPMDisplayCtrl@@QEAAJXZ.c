/*
 * XREFs of ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C02502B4
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E94A8 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z @ 0x1C024F9D0 (-DxgkLPMDisplayControl@@YAJPEAU_D3DKMT_LPM_DISPLAY_CONTROL@@@Z.c)
 *     ?LPMDisplayCleanupGlobal@@YAXXZ @ 0x1C024FF98 (-LPMDisplayCleanupGlobal@@YAXXZ.c)
 *     ?LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z @ 0x1C0250158 (-LPMSetTTMDisplayPowerState@@YAJW4_TERMINAL_DISPLAY_STATE@@@Z.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z @ 0x1C024F7FC (-CallDriver@LPMDisplayCtrl@@AEAAJKPEAXK0KPEA_K@Z.c)
 */

__int64 __fastcall LPMDisplayCtrl::LPMStop(PFILE_OBJECT *FileObject)
{
  _BYTE InputBuffer[40]; // [rsp+40h] [rbp-28h] BYREF
  int v4; // [rsp+70h] [rbp+8h] BYREF
  char v5; // [rsp+78h] [rbp+10h] BYREF

  if ( !*((_DWORD *)FileObject + 8) )
    return 3221225659LL;
  memset(InputBuffer, 0, 0x20uLL);
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212010, InputBuffer, 0x20u, &v5, 4u, 0LL);
  v4 = 0;
  LPMDisplayCtrl::CallDriver(FileObject, 0x83212018, &v4, 4u, 0LL, 0, 0LL);
  *((_DWORD *)FileObject + 9) = 0;
  qword_1C00A2DA0 = 0LL;
  return 0LL;
}
