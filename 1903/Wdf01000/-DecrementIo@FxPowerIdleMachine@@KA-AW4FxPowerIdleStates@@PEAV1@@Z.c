/*
 * XREFs of ?DecrementIo@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0019980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPowerIdleMachine::DecrementIo(FxPowerIdleMachine *This)
{
  return This->m_IoCount != 0 ? 7 : 9;
}
