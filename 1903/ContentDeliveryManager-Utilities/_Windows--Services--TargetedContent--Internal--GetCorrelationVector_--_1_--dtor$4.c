/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetCorrelationVector_::_1_::dtor$4 @ 0x1800CF9B8
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x18001221C (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetCorrelationVector_::_1_::dtor_4(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 40) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 40) &= ~2u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 32));
  }
  return result;
}
