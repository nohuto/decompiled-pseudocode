/*
 * XREFs of ?OnFocusedThreadChangedStatic@DWMInputRouter@@KAJPEAXPEBXH@Z @ 0x18000B070
 * Callers:
 *     <none>
 * Callees:
 *     ?OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z @ 0x18000B0F0 (-OnFocusedThreadChanged@DWMInputRouter@@IEAAXPEBU_MIT_INPUT_FOCUS_MESSAGE@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnFocusedThreadChangedStatic(
        DWMInputRouter *a1,
        const struct _MIT_INPUT_FOCUS_MESSAGE *a2,
        int a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 != 40 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x738,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      a4);
    JUMPOUT(0x180045206LL);
  }
  DWMInputRouter::OnFocusedThreadChanged(a1, a2);
  return 0LL;
}
