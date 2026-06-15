/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x18000D630
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x180036259 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x18003629B (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x1800362B4 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x1800362CD (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x1800362E6 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x1800362FF (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x180036318 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x180036331 (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$6 @ 0x18003659A (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x18003669F (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x1800367B2 (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x1800367CB (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x1800367E4 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AudioStateMonitorManager_AudioStateMonitorManager_CWindowsPolicyManager___&_CProcess____::_1_::dtor$4 @ 0x180036AAD (_Microsoft--WRL--Details--MakeAndInitialize_AudioStateMonitorManager_AudioStateMoni_ea_180036AAD.c)
 *     _TSSession::Create_::_1_::dtor$7 @ 0x1800370EB (_TSSession--Create_--_1_--dtor$7.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x180037177 (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
