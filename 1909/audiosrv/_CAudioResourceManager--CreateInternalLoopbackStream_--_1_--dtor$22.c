/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$22 @ 0x1800F79E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_22(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 712);
}
