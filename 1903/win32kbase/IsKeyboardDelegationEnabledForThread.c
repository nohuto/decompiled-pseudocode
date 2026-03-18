/*
 * XREFs of IsKeyboardDelegationEnabledForThread @ 0x1C0072010
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x1C0071D10 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C0183E74 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsKeyboardDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 1) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
