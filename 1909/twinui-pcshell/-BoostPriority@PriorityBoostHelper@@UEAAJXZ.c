/*
 * XREFs of ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x180016EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x180016DFC (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E800 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::BoostPriority(PriorityBoostHelper *this)
{
  const char *v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
    __debugbreak();
  }
  ++*((_DWORD *)this + 23);
  v3 = PriorityBoostHelper::BoostPriorityHelper((PriorityBoostHelper *)((char *)this - 16));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v3,
    v6);
  return v4;
}
