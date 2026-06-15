/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$11 @ 0x1800EC20E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((SaDeviceParams **)(a2 + 216), a2);
}
