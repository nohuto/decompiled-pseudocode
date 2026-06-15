/*
 * XREFs of _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$1 @ 0x180072FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(*(_QWORD *)(a2 + 104) + 48LL);
}
