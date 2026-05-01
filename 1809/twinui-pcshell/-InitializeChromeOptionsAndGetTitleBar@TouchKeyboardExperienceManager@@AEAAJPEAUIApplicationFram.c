/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x1802B6D84
 * Callers:
 *     _lambda_a6e83045e007bd3aeabbed1653bdb15e_::operator() @ 0x18009322C (_lambda_a6e83045e007bd3aeabbed1653bdb15e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::InitializeChromeOptionsAndGetTitleBar(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper *a2,
        struct IApplicationFrameTitleBar **a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  struct IApplicationFrameTitleBar *v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  TouchKeyboardExperienceManager *v13; // [rsp+40h] [rbp+10h] BYREF
  __int64 v14; // [rsp+48h] [rbp+18h] BYREF

  v13 = this;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v5 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 112LL))(v14, 255LL, 24LL);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v9 = v14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
      v7 = (*(__int64 (__fastcall **)(__int64, TouchKeyboardExperienceManager **))(*(_QWORD *)v9 + 144LL))(v9, &v13);
      v6 = v7;
      if ( v7 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, __int64))(*(_QWORD *)v13 + 64LL))(
               v13,
               1LL,
               1LL);
        v6 = v7;
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64, _QWORD))(*(_QWORD *)v13 + 104LL))(
                 v13,
                 255LL,
                 0LL);
          v6 = v7;
          if ( v7 >= 0 )
          {
            v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v13 + 72LL))(v13, 0LL);
            v6 = v7;
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, __int64))(*(_QWORD *)v13 + 120LL))(
                     v13,
                     1LL);
              v6 = v7;
              if ( v7 >= 0 )
              {
                v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, _QWORD))(*(_QWORD *)v13 + 32LL))(
                       v13,
                       0LL);
                v6 = v7;
                if ( v7 >= 0 )
                {
                  v7 = (*(__int64 (__fastcall **)(TouchKeyboardExperienceManager *, const WCHAR *))(*(_QWORD *)v13 + 24LL))(
                         v13,
                         &word_180411F30);
                  v6 = v7;
                  if ( v7 >= 0 )
                  {
                    v10 = v13;
                    v13 = 0LL;
                    *a3 = v10;
                    v6 = 0;
                    goto LABEL_21;
                  }
                  v8 = 2008LL;
                }
                else
                {
                  v8 = 2007LL;
                }
              }
              else
              {
                v8 = 2006LL;
              }
            }
            else
            {
              v8 = 2003LL;
            }
          }
          else
          {
            v8 = 2000LL;
          }
        }
        else
        {
          v8 = 1999LL;
        }
      }
      else
      {
        v8 = 1998LL;
      }
    }
    else
    {
      v8 = 1997LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_21:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7CA,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v6;
}
