/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x1800030E8
 * Callers:
 *     _CProcess::CProcess_::_1_::dtor$1 @ 0x180038915 (_CProcess--CProcess_--_1_--dtor$1.c)
 *     _CApplication::CApplication_::_1_::dtor$5 @ 0x180038957 (_CApplication--CApplication_--_1_--dtor$5.c)
 *     _CApplication::CApplication_::_1_::dtor$6 @ 0x180038970 (_CApplication--CApplication_--_1_--dtor$6.c)
 *     _CApplication::CApplication_::_1_::dtor$7 @ 0x180038989 (_CApplication--CApplication_--_1_--dtor$7.c)
 *     _CApplication::CApplication_::_1_::dtor$8 @ 0x1800389A2 (_CApplication--CApplication_--_1_--dtor$8.c)
 *     _CApplication::CApplication_::_1_::dtor$9 @ 0x1800389BB (_CApplication--CApplication_--_1_--dtor$9.c)
 *     _CApplication::CApplication_::_1_::dtor$10 @ 0x1800389D4 (_CApplication--CApplication_--_1_--dtor$10.c)
 *     _CApplication::CApplication_::_1_::dtor$11 @ 0x1800389ED (_CApplication--CApplication_--_1_--dtor$11.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$6 @ 0x180038C59 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$6.c)
 *     _CProcess::CProcess_::_1_::dtor$4 @ 0x180038D5E (_CProcess--CProcess_--_1_--dtor$4.c)
 *     _CProcess::CProcess_::_1_::dtor$15 @ 0x180038E71 (_CProcess--CProcess_--_1_--dtor$15.c)
 *     _CProcess::CProcess_::_1_::dtor$16 @ 0x180038E8A (_CProcess--CProcess_--_1_--dtor$16.c)
 *     _CProcess::CProcess_::_1_::dtor$17 @ 0x180038EA3 (_CProcess--CProcess_--_1_--dtor$17.c)
 *     _TSSession::Create_::_1_::dtor$6 @ 0x180039773 (_TSSession--Create_--_1_--dtor$6.c)
 *     _TSSession::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$5 @ 0x1800397FF (_TSSession--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
