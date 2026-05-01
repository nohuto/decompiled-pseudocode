/*
 * XREFs of ?GetFramePosition@CVirtualTouchpadExperienceManager@@AEAAJPEAUtagRECT@@@Z @ 0x180178F44
 * Callers:
 *     _lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator() @ 0x180177D90 (_lambda_4003b582d2de643f8f6d5cb83a00bbb0_--operator().c)
 *     ?SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18017A5D4 (-SaveFramePosition@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::GetFramePosition(
        CVirtualTouchpadExperienceManager *this,
        struct tagPOINT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v7; // r9
  struct tagRECT v8; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v8 = (struct tagRECT)0LL;
  *(_OWORD *)&a2->x = 0uLL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *))(**((_QWORD **)this + 41) + 56LL))(
         *((_QWORD *)this + 41),
         &v8);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(struct tagRECT *)&a2->x = v8;
    if ( MapWindowPoints(*((HWND *)this + 42), 0LL, a2, 2u) || !GetLastError() )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x1E3,
               (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
               v7);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
