/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$30 @ 0x1800D44E8
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180044DD8 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch_30(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  PCWSTR StringRawBuffer; // rbx
  const char *v5; // rax

  v3 = *(_QWORD *)(a2 + 112);
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a2 + 96), 0LL);
  v5 = (const char *)WindowsGetStringRawBuffer(*(HSTRING *)(v3 + 8), 0LL);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 280),
    (void *)0x1B7,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
    "Subscription ID: %ls, Content ID: %ls",
    v5,
    StringRawBuffer);
  return &loc_1800A39A5;
}
