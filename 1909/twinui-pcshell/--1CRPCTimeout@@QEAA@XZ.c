/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180160D44
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x180166F37 (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator()_::_1_::dtor$0 @ 0x18024AD67 (__lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_--operator()_--_1_--dtor$0.c)
 *     _TabViewManager::TryFindAndNotifyReplacementTab_::_1_::dtor$6 @ 0x18025F140 (_TabViewManager--TryFindAndNotifyReplacementTab_--_1_--dtor$6.c)
 *     __lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator()_::_1_::dtor$5 @ 0x180275980 (__lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator()_--_1_--dtor$5.c)
 *     __lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator()_::_1_::dtor$6 @ 0x18027598C (__lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator()_--_1_--dtor$6.c)
 *     _TabTransferManager::PerformComplete_::_1_::dtor$8 @ 0x180277AC1 (_TabTransferManager--PerformComplete_--_1_--dtor$8.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$3 @ 0x180277E37 (_TabTransferManager--PerformDrop_--_1_--dtor$3.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$5 @ 0x180277E4F (_TabTransferManager--PerformDrop_--_1_--dtor$5.c)
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$6 @ 0x1802B27A3 (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$6.c)
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$6 @ 0x1802C3202 (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
