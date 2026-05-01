/*
 * XREFs of ?AnimateWindow@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAUHWND__@@AEAVCExperienceManagerAnimationHelper@@_N@Z @ 0x18030DCA0
 * Callers:
 *     _lambda_be51cf16fbf0031c38a94162e4d6f864_::operator() @ 0x18009DAC0 (_lambda_be51cf16fbf0031c38a94162e4d6f864_--operator().c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z @ 0x180314544 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEBUKBViewInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _anonymous_namespace_::IsAnimationEnabled @ 0x18031035C (_anonymous_namespace_--IsAnimationEnabled.c)
 *     ?Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TARGET@@PEBUtagRECT@@2222@Z @ 0x180412B68 (-Begin@CExperienceManagerAnimationHelper@@QEAAJPEAUIApplicationFrameWrapper@@W4DWMTRANSITION_TAR.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::AnimateWindow(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        HWND a3,
        struct CExperienceManagerAnimationHelper *a4,
        bool a5)
{
  const char *v9; // r9
  __int64 v10; // rdx
  HMONITOR v12; // rax
  struct tagRECT *p_Rect; // rcx
  char IsAnimationEnabled; // r14
  int v15; // eax
  unsigned int v16; // esi
  struct tagRECT v17; // xmm0
  struct tagRECT Rect; // [rsp+40h] [rbp-51h] BYREF
  struct tagRECT rc; // [rsp+50h] [rbp-41h] BYREF
  struct tagRECT v20; // [rsp+60h] [rbp-31h] BYREF
  int v21[4]; // [rsp+70h] [rbp-21h] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+57h]

  *(_QWORD *)&Rect.left = 0LL;
  *(_QWORD *)&Rect.right = 0LL;
  if ( !GetWindowRect(a3, &Rect) )
  {
    v10 = 294LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  *(struct tagRECT *)v21 = Rect;
  memset_0(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  v12 = MonitorFromWindow(a3, 1u);
  if ( !v12 )
    return 2147500037LL;
  if ( !GetMonitorInfoW(v12, &mi) )
  {
    v10 = 302LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v10,
             (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v9);
  }
  p_Rect = (struct tagRECT *)v21;
  if ( !a5 )
    p_Rect = &Rect;
  OffsetRect(p_Rect, 0, mi.rcMonitor.bottom - Rect.top);
  rc = *(struct tagRECT *)v21;
  v20 = Rect;
  OffsetRect(&rc, -v21[0], -v21[1]);
  OffsetRect(&v20, -v20.left, -v20.top);
  IsAnimationEnabled = anonymous_namespace_::IsAnimationEnabled();
  if ( IsAnimationEnabled
    && (v15 = CExperienceManagerAnimationHelper::Begin(
                a4,
                a2,
                (!a5 << 29) | 0x1800008u,
                &rc,
                v21,
                &v20,
                &Rect,
                &mi.rcMonitor),
        v16 = v15,
        v15 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
    return v16;
  }
  else
  {
    if ( a5 )
    {
      v17 = Rect;
      *((_BYTE *)this + 824) = IsAnimationEnabled;
    }
    else
    {
      *((_BYTE *)this + 825) = IsAnimationEnabled;
      *(_QWORD *)&rc.left = 0LL;
      *(_QWORD *)&rc.right = 0LL;
      v17 = (struct tagRECT)0;
    }
    *(struct tagRECT *)((char *)this + 520) = v17;
    return 0LL;
  }
}
