/*
 * XREFs of _SystemEffectDescriptor::GetChainDescriptorForMode_::_1_::dtor$1 @ 0x18006A900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SystemEffectDescriptor::GetChainDescriptorForMode_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(a2 + 64);
}
