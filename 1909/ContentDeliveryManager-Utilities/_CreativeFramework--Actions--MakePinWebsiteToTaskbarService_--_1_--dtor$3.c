/*
 * XREFs of _CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor$3 @ 0x1800D2F7D
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800123EC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall CreativeFramework::Actions::MakePinWebsiteToTaskbarService_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~4u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 56);
  }
  return result;
}
