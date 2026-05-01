/*
 * XREFs of ?SetupExperienceFrame@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18017A7CC
 * Callers:
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18017AAF0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::SetupExperienceFrame(CVirtualTouchpadExperienceManager *this)
{
  _DWORD *v2; // rbx
  int v3; // eax
  unsigned int v4; // r14d
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // r14
  int v17; // eax
  int v18; // eax
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v21; // [rsp+50h] [rbp+20h] BYREF
  __int64 v22; // [rsp+58h] [rbp+28h] BYREF

  v2 = (_DWORD *)((char *)this + 352);
  if ( *((_DWORD *)this + 88) )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 48LL))(*((_QWORD *)this + 40));
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18B,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    *v2 = 0;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, _DWORD *))(**((_QWORD **)this + 40) + 40LL))(
         *((_QWORD *)this + 40),
         (char *)this + 16,
         v2);
  if ( v6 >= 0 )
  {
    v8 = *((_QWORD *)this + 40);
    v9 = (_QWORD *)((char *)this + 328);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v8 + 24LL))(v8, (char *)this + 328);
    if ( v6 < 0 )
    {
      v7 = 400LL;
      goto LABEL_7;
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 48LL))(*v9, *((unsigned int *)this + 31));
    if ( v6 < 0 )
    {
      v7 = 401LL;
      goto LABEL_7;
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v9 + 120LL))(*v9, 1LL);
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        403LL,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v10);
    v21 = 0LL;
    v11 = *v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, &v21);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x196,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
        (const char *)(unsigned int)v12);
LABEL_35:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      return (unsigned int)v6;
    }
    v22 = 0LL;
    v13 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 144LL))(v13, &v22);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v16 = (_QWORD *)((char *)this + 336);
      v14 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 24LL))(v21, (char *)this + 336);
      v6 = v14;
      if ( v14 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 104LL))(v22, 255LL, 4LL);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            411LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v21 + 112LL))(v21, 255LL, 33LL);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v18 = (*(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD))(*(_QWORD *)v21 + 72LL))(
                  v21,
                  L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
                  0LL);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              413LL,
              (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
              (const char *)(unsigned int)v18);
          if ( *((_DWORD *)this + 89) )
          {
            v19 = RevokeScaleChangeNotificationsForWindow(*v16);
            if ( v19 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                417LL,
                (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                (const char *)(unsigned int)v19);
            *((_DWORD *)this + 89) = 0;
          }
          v14 = RegisterScaleChangeSinkForWindow(*v16, (char *)this + 24, (char *)this + 356);
          v6 = v14;
          if ( v14 >= 0 )
          {
            v6 = 0;
            goto LABEL_34;
          }
          v15 = 420LL;
        }
        else
        {
          v15 = 412LL;
        }
      }
      else
      {
        v15 = 409LL;
      }
    }
    else
    {
      v15 = 408LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v14);
LABEL_34:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    goto LABEL_35;
  }
  v7 = 399LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
