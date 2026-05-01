/*
 * XREFs of ??1CRPCTimeout@@QEAA@XZ @ 0x180141730
 * Callers:
 *     _CImmersiveApp::QueryService_::_1_::dtor$0 @ 0x180147B77 (_CImmersiveApp--QueryService_--_1_--dtor$0.c)
 *     __lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_::operator()_::_1_::dtor$0 @ 0x18022B77F (__lambda_b1c35f81adaf5b36b55ebdf9a5ea9776_--operator()_--_1_--dtor$0.c)
 *     _TabViewManager::TryFindAndNotifyReplacementTab_::_1_::dtor$6 @ 0x18023FB50 (_TabViewManager--TryFindAndNotifyReplacementTab_--_1_--dtor$6.c)
 *     __lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator()_::_1_::dtor$5 @ 0x180256420 (__lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator()_--_1_--dtor$5.c)
 *     __lambda_2de9129cf7ca5d1ddf0542513b424d5e_::operator()_::_1_::dtor$6 @ 0x18025642C (__lambda_2de9129cf7ca5d1ddf0542513b424d5e_--operator()_--_1_--dtor$6.c)
 *     _TabTransferManager::PerformComplete_::_1_::dtor$8 @ 0x180258561 (_TabTransferManager--PerformComplete_--_1_--dtor$8.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$3 @ 0x1802588D7 (_TabTransferManager--PerformDrop_--_1_--dtor$3.c)
 *     _TabTransferManager::PerformDrop_::_1_::dtor$5 @ 0x1802588EF (_TabTransferManager--PerformDrop_--_1_--dtor$5.c)
 *     __lambda_858eee636f27872cdf74bbc97c00a8bc_::operator()_::_1_::dtor$6 @ 0x1802932C3 (__lambda_858eee636f27872cdf74bbc97c00a8bc_--operator()_--_1_--dtor$6.c)
 *     __lambda_795e02c192f463c18ca265aec6362396_::operator()_::_1_::dtor$6 @ 0x1802A3CE2 (__lambda_795e02c192f463c18ca265aec6362396_--operator()_--_1_--dtor$6.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRPCTimeout::~CRPCTimeout(CRPCTimeout *this)
{
  CBaseRPCTimeout::Disarm(this);
}
