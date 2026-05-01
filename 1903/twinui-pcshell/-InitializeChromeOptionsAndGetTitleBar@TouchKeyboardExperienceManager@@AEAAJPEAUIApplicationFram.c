/*
 * XREFs of ?InitializeChromeOptionsAndGetTitleBar@TouchKeyboardExperienceManager@@AEAAJPEAUIApplicationFrameWrapper@@PEAPEAUIApplicationFrameTitleBar@@@Z @ 0x180310128
 * Callers:
 *     _lambda_a34f77da1c118d252c6ac03565c5dcbb_::operator() @ 0x18009D080 (_lambda_a34f77da1c118d252c6ac03565c5dcbb_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
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
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 112LL))(v14, 4095LL, 24LL);
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
                 1023LL,
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
                         &String2);
                  v6 = v7;
                  if ( v7 >= 0 )
                  {
                    v10 = v13;
                    v13 = 0LL;
                    *a3 = v10;
                    v6 = 0;
                    goto LABEL_21;
                  }
                  v8 = 2291LL;
                }
                else
                {
                  v8 = 2290LL;
                }
              }
              else
              {
                v8 = 2289LL;
              }
            }
            else
            {
              v8 = 2286LL;
            }
          }
          else
          {
            v8 = 2283LL;
          }
        }
        else
        {
          v8 = 2282LL;
        }
      }
      else
      {
        v8 = 2281LL;
      }
    }
    else
    {
      v8 = 2280LL;
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
    (void *)0x8E5,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_22:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v6;
}
