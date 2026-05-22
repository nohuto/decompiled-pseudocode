/*
 * XREFs of _ViewHierarchy::GetTopLevelHostView_::_1_::catch$0 @ 0x1800597DD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180059898 (-Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall ViewHierarchy::GetTopLevelHostView_::_1_::catch_0(__int64 a1, __int64 a2)
{
  const char *v3; // [rsp+18h] [rbp-20h]

  *(_DWORD *)(a2 + 80) = 0;
  LODWORD(v3) = *(_DWORD *)(a2 + 88);
  wil::details::in1diag3::Log_CaughtExceptionMsg(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x1A3,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhierarchy\\viewhierarchy.cpp",
    "ViewHierarchy encountered an unknown view instance id in the parent chain of 0x%08X.",
    v3);
  return &loc_1800597C7;
}
