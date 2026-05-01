/*
 * XREFs of ?GetFrameRect@AccessibilityViewInfo@@QEBAJPEAUtagRECT@@@Z @ 0x1802D1CAC
 * Callers:
 *     ?OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802D21F0 (-OnChromeOffsetsChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 *     ?OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z @ 0x1802D2460 (-OnPositionChanged@AccessibilityExperienceManager@@UEAAJPEAUIApplicationFrame@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibilityViewInfo::GetFrameRect(AccessibilityViewInfo *this, struct tagRECT *a2)
{
  __int64 v4; // rbx
  unsigned int LastError; // ebx
  int v6; // eax
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v10; // [rsp+20h] [rbp-50h] BYREF
  HWND hWndFrom[3]; // [rsp+28h] [rbp-48h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  hWndFrom[1] = (HWND)-2LL;
  SetRectEmpty(a2);
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 32LL))(v4, &v10);
    LastError = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v10 + 24LL))(v10, hWndFrom);
      LastError = v6;
      if ( v6 >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 1) + 56LL))(
               *((_QWORD *)this + 1),
               &v13);
        LastError = v6;
        if ( v6 >= 0 )
        {
          *(_OWORD *)&Points[0].x = v13;
          if ( MapWindowPoints(hWndFrom[0], 0LL, Points, 2u) || !GetLastError() )
          {
            *a2 = *(struct tagRECT *)&Points[0].x;
            LastError = 0;
          }
          else
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x36,
                          (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
                          v8);
          }
          goto LABEL_14;
        }
        v7 = 48LL;
      }
      else
      {
        v7 = 45LL;
      }
    }
    else
    {
      v7 = 42LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
      (const char *)(unsigned int)v6);
LABEL_14:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    return LastError;
  }
  LastError = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x27,
    (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilitymanager.h",
    (const char *)0x8000FFFFLL);
  return LastError;
}
