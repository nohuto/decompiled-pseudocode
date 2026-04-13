/*
 * XREFs of _std::make_shared_CreativeFramework::Actions::SetDefaultApplicationService_wchar_t_const_____ptr64_wchar_t_const_____ptr64_wchar_t_const_____ptr64__::_1_::dtor$1 @ 0x1800CE944
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180011E44 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::make_shared_CreativeFramework::Actions::SetDefaultApplicationService_wchar_t_const_____ptr64_wchar_t_const_____ptr64_wchar_t_const_____ptr64__::_1_::dtor_1(
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
