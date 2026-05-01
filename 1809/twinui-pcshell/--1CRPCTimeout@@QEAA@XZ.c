/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180119878
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x18011E90B (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator()_::_1_::dtor$0 @ 0x1801D6592 (__lambda_36384bfe8fddeea64aa1ca6986ceb908_--operator()_--_1_--dtor$0.c)
 *     __lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator()_::_1_::dtor$6 @ 0x18023D143 (__lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator()_--_1_--dtor$6.c)
 *     __lambda_41ea728de8cee2282d4ec3314b3d541b_::operator()_::_1_::dtor$6 @ 0x18024D6B6 (__lambda_41ea728de8cee2282d4ec3314b3d541b_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
