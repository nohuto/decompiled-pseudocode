/*
 * XREFs of ?SetShowOptions@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_SHOW_OPTIONS@@0@Z @ 0x180168D60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ApplicationViewTitlebarConfiguration::SetShowOptions(__int64 a1, int a2, int a3)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)(a1 + 52) = a2;
    result = 0LL;
    *(_DWORD *)(a1 + 56) = a3;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"internal\\onecoreuapshell\\private\\inc\\applicationviewoperationhelpers.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  return result;
}
