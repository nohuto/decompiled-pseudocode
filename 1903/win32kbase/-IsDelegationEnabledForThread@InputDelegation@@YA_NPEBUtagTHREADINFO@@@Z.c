/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C0183E74
 * Callers:
 *     IsSpatialDelegationEnabledForThread @ 0x1C0039FA0 (IsSpatialDelegationEnabledForThread.c)
 *     IsKeyboardDelegationEnabledForThread @ 0x1C0072010 (IsKeyboardDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
