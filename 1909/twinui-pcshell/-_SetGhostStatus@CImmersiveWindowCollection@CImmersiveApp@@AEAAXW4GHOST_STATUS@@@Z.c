/*
 * XREFs of ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800102F4
 * Callers:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0001@@W4GHOST_STATUS@@@Z @ 0x180010128 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAUITaskWindow@@@Z @ 0x180162544 (-DeleteWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJAEBVCTaskWindowFinder@@PEA_NPEAPEAU.c)
 *     ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x180166444 (-ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z.c)
 * Callees:
 *     WPP_SF_Ld @ 0x18014A94C (WPP_SF_Ld.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx

  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      24LL,
      &WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
      a2,
      *(_DWORD *)(a1 + 212));
  v4 = *(unsigned int *)(a1 + 212);
  *(_DWORD *)(a1 + 212) = a2;
  return CImmersiveApp::CImmersiveWindowCollection::_HandleGhostStatusChange(a1, v4, a2);
}
