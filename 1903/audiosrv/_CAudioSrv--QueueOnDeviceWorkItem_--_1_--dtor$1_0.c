/*
 * XREFs of _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$1_0 @ 0x1800C0AFE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor_1_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 80));
}
