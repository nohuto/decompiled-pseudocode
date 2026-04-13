/*
 * XREFs of _Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType_::_1_::dtor$0 @ 0x1800D0D2E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800123EC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 192) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 192) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 80);
  }
  return result;
}
