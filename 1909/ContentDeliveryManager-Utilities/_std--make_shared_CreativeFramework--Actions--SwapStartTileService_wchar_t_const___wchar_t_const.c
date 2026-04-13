/*
 * XREFs of _std::make_shared_CreativeFramework::Actions::SwapStartTileService_wchar_t_const___wchar_t_const___CreativeFramework::Actions::SwapStartTileProperties_&__::_1_::dtor$1 @ 0x1800D290F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800123EC (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_CreativeFramework::Actions::SwapStartTileService_wchar_t_const___wchar_t_const___CreativeFramework::Actions::SwapStartTileProperties____::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
