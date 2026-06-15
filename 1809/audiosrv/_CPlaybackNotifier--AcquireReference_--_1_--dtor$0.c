/*
 * XREFs of _CPlaybackNotifier::AcquireReference_::_1_::dtor$0 @ 0x18006D140
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@std@@QEAA@XZ @ 0x1800D89E4 (--1-$shared_ptr@V-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@.c)
 */

__int64 __fastcall CPlaybackNotifier::AcquireReference_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>::~shared_ptr<std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>>(*(_QWORD *)(a2 + 104));
  }
  return result;
}
