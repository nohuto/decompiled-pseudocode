/*
 * XREFs of ?get_EventType@ViewHostItemEventArgsBase@@UEAAJPEAW4ViewHostItemEventType@Holographic@Shell@Internal@Windows@@@Z @ 0x180206610
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ViewHostItemEventArgsBase::get_EventType(
        ViewHostItemEventArgsBase *this,
        enum Windows::Internal::Shell::Holographic::ViewHostItemEventType *a2)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this + 12);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
