/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$9 @ 0x1800D4285
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180044DD8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  const char *StringRawBuffer; // rax

  StringRawBuffer = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 80), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x11F,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Content ID: %ls",
    StringRawBuffer);
  return &loc_1800A2AA4;
}
