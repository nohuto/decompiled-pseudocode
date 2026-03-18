/*
 * XREFs of ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C0150C4C
 * Callers:
 *     IsKeyboardDelegationEnabledForThread @ 0x1C003A410 (IsKeyboardDelegationEnabledForThread.c)
 *     IsSpatialDelegationEnabledForThread @ 0x1C006F320 (IsSpatialDelegationEnabledForThread.c)
 * Callees:
 *     <none>
 */

bool __fastcall InputDelegation::IsDelegationEnabledForThread(PETHREAD *this, const struct tagTHREADINFO *a2)
{
  return ((unsigned int)PsGetThreadProcessId(*this) & 0xFFFFFFFC) == InputDelegation::CInputDelegationInfo::gInstance;
}
