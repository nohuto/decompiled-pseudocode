/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType_::_1_::catch$0 @ 0x1800CFE42
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800036EC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CreativeFramework::TargetedContentLayoutHelpers::Settings::SetChosenLayoutType_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 80) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x44,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolve"
                                    "r\\layoutresolver.cpp",
                           a4);
  return &loc_18009D9E8;
}
