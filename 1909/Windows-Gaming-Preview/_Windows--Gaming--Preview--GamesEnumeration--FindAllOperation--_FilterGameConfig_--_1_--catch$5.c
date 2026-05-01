/*
 * XREFs of _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch$5 @ 0x18004481A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180011A68 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterGameConfig_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 200) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 168),
                            (void *)0x18D,
                            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
                            a4);
  return &loc_18000AFF0;
}
