/*
 * XREFs of _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$5 @ 0x180037BDD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DetermineLowRightsKeySecurityDescriptor_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  ATL::CAutoPtrArray<ATL::CDacl::CAccessAce>::~CAutoPtrArray<ATL::CDacl::CAccessAce>(a2 + 168);
}
