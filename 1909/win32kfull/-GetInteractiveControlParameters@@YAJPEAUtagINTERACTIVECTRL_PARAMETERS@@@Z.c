/*
 * XREFs of ?GetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C023E124
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0079528 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z @ 0x1C024DA00 (-GetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@@Z.c)
 */

__int64 __fastcall GetInteractiveControlParameters(struct tagINTERACTIVECTRL_PARAMETERS *a1)
{
  InteractiveControlManager *v2; // rax

  v2 = InteractiveControlManager::Instance();
  return InteractiveControlManager::GetExternalParameters(v2, a1);
}
