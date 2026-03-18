/*
 * XREFs of IsSpatialDelegationEnabledForThread @ 0x1C0039FA0
 * Callers:
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C0039EE8 (_anonymous_namespace_--InMouseRawInputMode.c)
 * Callees:
 *     ?IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z @ 0x1C0183E74 (-IsDelegationEnabledForThread@InputDelegation@@YA_NPEBUtagTHREADINFO@@@Z.c)
 */

bool __fastcall IsSpatialDelegationEnabledForThread(InputDelegation *a1, const struct tagTHREADINFO *a2)
{
  return (*(&InputDelegation::CInputDelegationInfo::gInstance + 4) & 2) != 0
      && InputDelegation::IsDelegationEnabledForThread(a1, a2);
}
