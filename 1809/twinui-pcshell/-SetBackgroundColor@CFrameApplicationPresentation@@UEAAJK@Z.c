/*
 * XREFs of ?SetBackgroundColor@CFrameApplicationPresentation@@UEAAJK@Z @ 0x180128020
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_6d34880a2f63f7d50ab492b5e04756d2___ @ 0x1801268D8 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_6d34880a2f63f7d50ab492b5e04756d2___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetBackgroundColor(CFrameApplicationPresentation *this, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD2(v5) = a2;
  *(_QWORD *)&v5 = this;
  v2 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_6d34880a2f63f7d50ab492b5e04756d2___(this, &v5);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x62B,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
