/*
 * XREFs of _CCaptureNotifier::AcquireReference_::_1_::dtor$0 @ 0x1800EFB68
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAA@XZ @ 0x1800D89E4 (--1-$shared_ptr@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@.c)
 */

void __fastcall CCaptureNotifier::AcquireReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(*(_QWORD *)(a2 + 104));
  }
}
