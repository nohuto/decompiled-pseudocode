/*
 * XREFs of ?UpdateFramePositionAndSize@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x1801AACBC
 * Callers:
 *     _lambda_4003b582d2de643f8f6d5cb83a00bbb0_::operator() @ 0x1801A74EC (_lambda_4003b582d2de643f8f6d5cb83a00bbb0_--operator().c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801AA1F0 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CVirtualTouchpadExperienceManager::UpdateFramePositionAndSize(
        CVirtualTouchpadExperienceManager *this)
{
  char *v2; // r15
  const char *v3; // r9
  HMONITOR v4; // r14
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned int LastError; // ebx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  int v17[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+38h] [rbp-38h] BYREF
  int v19[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+50h] [rbp-20h]
  _BYTE v21[16]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v18[1] = -2LL;
  v2 = (char *)this + 304;
  v4 = MonitorFromPoint(*(POINT *)((char *)this + 304), 2u);
  *((_QWORD *)this + 43) = v4;
  if ( !v4 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1AD,
             (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v3);
  v18[0] = 0LL;
  v6 = *((_QWORD *)this + 39);
  v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  v8 = v7(v6, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, v18);
  LastError = v8;
  if ( v8 >= 0 )
  {
    *(_QWORD *)v17 = 0LL;
    v10 = v18[0];
    v11 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v18[0] + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
    v12 = v11(v10, v4, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v17);
    LastError = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v17 + 168LL))(*(_QWORD *)v17, v21);
      LastError = v12;
      if ( v12 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 41) + 72LL))(
                *((_QWORD *)this + 41),
                (char *)this + 292);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1B5,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v14);
        v15 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 41) + 80LL))(
                *((_QWORD *)this + 41),
                (char *)this + 292);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1B6,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
            (const char *)(unsigned int)v15);
        *(_QWORD *)v19 = 0LL;
        v20 = 0LL;
        if ( !(*((unsigned int (__fastcall **)(char *, char *, __int64, _BYTE *, int *))this + 96))(
                v2,
                (char *)this + 284,
                65620LL,
                v21,
                v19) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x1BE,
                        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
                        v16);
LABEL_19:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
          goto LABEL_20;
        }
        v12 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 41) + 64LL))(*((_QWORD *)this + 41), v19);
        LastError = v12;
        if ( v12 >= 0 )
        {
          LastError = 0;
          goto LABEL_19;
        }
        v13 = 447LL;
      }
      else
      {
        v13 = 435LL;
      }
    }
    else
    {
      v13 = 433LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1AF,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
  return LastError;
}
