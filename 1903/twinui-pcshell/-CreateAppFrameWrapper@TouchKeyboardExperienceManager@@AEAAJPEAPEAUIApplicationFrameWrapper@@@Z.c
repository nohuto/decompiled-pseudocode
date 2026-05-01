/*
 * XREFs of ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x18030E18C
 * Callers:
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::CreateAppFrameWrapper(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  LONG WindowLongW; // eax
  _QWORD *v13; // rdx
  int v14; // eax
  struct IApplicationFrameWrapper *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IApplicationFrameWrapper *v18; // [rsp+50h] [rbp+20h] BYREF
  __int64 v19; // [rsp+60h] [rbp+30h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+38h] BYREF

  v18 = 0LL;
  v4 = *((_QWORD *)this + 61);
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameWrapper **))(*(_QWORD *)v4 + 24LL))(v4, &v18);
    v5 = v8;
    if ( v8 < 0 )
    {
      v6 = (unsigned int)v8;
      v7 = 2247LL;
      goto LABEL_5;
    }
    v19 = 0LL;
    v9 = (__int64)v18;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, &v19);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v19 + 24LL))(v19, &hWnd);
      v5 = v10;
      if ( v10 >= 0 )
      {
        WindowLongW = GetWindowLongW(hWnd, -20);
        SetWindowLongW(hWnd, -20, WindowLongW | 0x8000000);
        if ( *((_QWORD *)this + 69) )
        {
          v13 = (_QWORD *)((char *)this + 536);
          if ( *((_QWORD *)this + 70) >= 8uLL )
            v13 = (_QWORD *)*v13;
          v14 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v19 + 72LL))(v19, v13, 0LL);
          if ( v14 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x8D7,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v14);
        }
        v10 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v18 + 40LL))(v18, 1LL);
        v5 = v10;
        if ( v10 >= 0 )
        {
          v15 = v18;
          v18 = 0LL;
          *a2 = v15;
          v5 = 0;
          goto LABEL_19;
        }
        v11 = 2267LL;
      }
      else
      {
        v11 = 2253LL;
      }
    }
    else
    {
      v11 = 2250LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_20;
  }
  v5 = -2144927145;
  v6 = 2150040151LL;
  v7 = 2246LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v6);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v5;
}
