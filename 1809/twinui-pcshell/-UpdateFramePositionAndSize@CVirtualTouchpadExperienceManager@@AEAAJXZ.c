/*
 * XREFs of ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18017B51C
 * Callers:
 *     _lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator() @ 0x180177D90 (_lambda_4003b582d2de643f8f6d5cb83a00bbb0_--operator().c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x18017AAF0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize(
        CVirtualTouchpadExperienceManager *this)
{
  char *v2; // r14
  HMONITOR v3; // rsi
  const char *v4; // r9
  __int64 v6; // rbx
  int v7; // eax
  unsigned int LastError; // ebx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  int v15[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-38h] BYREF
  int v17[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+50h] [rbp-20h]
  _BYTE v19[16]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v16[1] = -2LL;
  v2 = (char *)this + 304;
  v3 = MonitorFromPoint(*(POINT *)((char *)this + 304), 2u);
  *((_QWORD *)this + 43) = v3;
  if ( !v3 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1AD,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v4);
  v16[0] = 0LL;
  v6 = *((_QWORD *)this + 39);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
  v7 = (*(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL))(
         v6,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v16);
  LastError = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)v15 = 0LL;
    v9 = v16[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
    v10 = (*(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v9 + 72LL))(
            v9,
            v3,
            &SID_EdgeUi,
            &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e,
            v15);
    LastError = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v15 + 168LL))(*(_QWORD *)v15, v19);
      LastError = v10;
      if ( v10 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 41) + 72LL))(
                *((_QWORD *)this + 41),
                (char *)this + 292);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            437LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v12);
        v13 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 41) + 80LL))(
                *((_QWORD *)this + 41),
                (char *)this + 292);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            438LL,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v13);
        *(_QWORD *)v17 = 0LL;
        v18 = 0LL;
        if ( !(*((unsigned int (__fastcall **)(char *, char *, __int64, _BYTE *, int *))this + 96))(
                v2,
                (char *)this + 284,
                65620LL,
                v19,
                v17) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1BE,
                        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                        v14);
LABEL_19:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v15);
          goto LABEL_20;
        }
        v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 41) + 64LL))(*((_QWORD *)this + 41), v17);
        LastError = v10;
        if ( v10 >= 0 )
        {
          LastError = 0;
          goto LABEL_19;
        }
        v11 = 447LL;
      }
      else
      {
        v11 = 435LL;
      }
    }
    else
    {
      v11 = 433LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
  return LastError;
}
