/*
 * XREFs of ?SetInteractiveControlParameters@@YAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C02262CC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0123AA0 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z @ 0x1C02369CC (-SetExternalParameters@InteractiveControlManager@@QEAAJPEAUtagINTERACTIVECTRL_PARAMETERS@@H@Z.c)
 */

__int64 __fastcall SetInteractiveControlParameters(struct tagINTERACTIVECTRL_PARAMETERS *a1, int a2)
{
  InteractiveControlManager *v4; // rax

  v4 = InteractiveControlManager::Instance();
  return InteractiveControlManager::SetExternalParameters(v4, a1, a2);
}
