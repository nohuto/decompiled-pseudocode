/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x1C0242C00
 * Callers:
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C02628B0 (DpiIndicateConnectorChangeWorkItem.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z @ 0x1C012D328 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DPEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(__int64 a1, KPROCESSOR_MODE a2)
{
  KWAIT_REASON v3; // edi
  struct DXGGLOBAL *Global; // rax
  union _LARGE_INTEGER *v5; // r9

  v3 = (int)a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((DXGSESSIONMGR **)Global + 77), v3, a2, v5);
}
