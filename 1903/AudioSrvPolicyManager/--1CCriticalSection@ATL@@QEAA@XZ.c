/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000D660
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x180036359 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18003639B (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x1800363B4 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x1800363CD (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x1800363E6 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x1800363FF (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x180036418 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x180036431 (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$6 @ 0x18003669A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x18003679F (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x1800368B2 (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x1800368CB (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x1800368E4 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$4 @ 0x180036BAD (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180036BAD.c)
 *     _TSSession::Create_::_1_::dtor$7 @ 0x1800371EB (_TSSession--Create_--_1_--dtor$7.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x180037277 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
