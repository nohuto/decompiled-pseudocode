/*
 * XREFs of ?GetLastActivationTimestamp@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x18017A820
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z @ 0x180178AC4 (-UnbiasedInterruptTimeFromFileTime@@YA_KAEBU_FILETIME@@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetLastActivationTimestamp(CWin32ApplicationView *this, unsigned __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _FILETIME v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, struct _FILETIME *))(**((_QWORD **)this + 27) + 40LL))(
         *((_QWORD *)this + 27),
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = UnbiasedInterruptTimeFromFileTime(&v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23F,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
