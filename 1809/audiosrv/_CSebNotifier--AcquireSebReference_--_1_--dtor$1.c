/*
 * XREFs of _CSebNotifier::AcquireSebReference_::_1_::dtor$1 @ 0x18006D300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSebNotifier::AcquireSebReference_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(a2 + 104);
}
