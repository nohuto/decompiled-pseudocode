/*
 * XREFs of ?OnLeftSubmixStarted@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x14000F8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000DD38 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x14000F8AC (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028134 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixStarted(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct ISubmixInternal **ChildSubmix; // rax
  int updated; // eax
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ChildSubmix = CSubmixImpl::FindChildSubmix(this, a2);
  if ( ChildSubmix )
  {
    *((_BYTE *)ChildSubmix + 8) = 1;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, 1);
    v7 = updated;
    if ( updated >= 0 )
    {
      v7 = 0;
      goto LABEL_4;
    }
    v10 = (unsigned int)updated;
    v9 = 1318LL;
  }
  else
  {
    v7 = -2005139430;
    v9 = 1315LL;
    v10 = 2289827866LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v10,
    v11);
LABEL_4:
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
