/*
 * XREFs of ?SetWindowManagementScenario@KioskPositioner@@AEAAXW4WINDOW_MANAGEMENT_BEHAVIOR_SCENARIO@@0@Z @ 0x18039E968
 * Callers:
 *     ?PerformDelayedInitialization@KioskPositioner@@UEAAJXZ @ 0x18039DFF0 (-PerformDelayedInitialization@KioskPositioner@@UEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KioskPositioner::SetWindowManagementScenario(__int64 a1)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 224) + 56LL))(
             *(_QWORD *)(a1 + 224),
             8LL,
             8LL);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1132LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
