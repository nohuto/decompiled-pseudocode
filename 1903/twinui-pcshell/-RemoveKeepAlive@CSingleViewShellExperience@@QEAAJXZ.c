/*
 * XREFs of ?RemoveKeepAlive@CSingleViewShellExperience@@QEAAJXZ @ 0x18007C870
 * Callers:
 *     ?RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18007C860 (-RemoveKeepAlive@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18002D758 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800458C4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180060D34 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1$$QEAIAEBQEAUHWND__@@@Z @ 0x18007C99C (--$-0PEBGPEBGIAEBQEAUHWND__@@@RemoveKeepAlive@SingleViewExperienceTelemetry@@AEAA@U-$integral_co.c)
 *     ??1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x18007CA70 (--1RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::RemoveKeepAlive(
        CSingleViewShellExperience *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  ExperienceManagerUtils *v3; // rcx
  int v4; // edx
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C8h] BYREF
  PCWSTR StringRawBuffer; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v15[320]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  v14[1] = -2LL;
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( !v3 )
  {
    v7 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38F,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)0x8000FFFFLL);
    return v7;
  }
  v12 = ExperienceManagerUtils::WindowFromViewWrapper(v3, a2);
  v11[1] = *((_DWORD *)this + 10);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v14[0] = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::RemoveKeepAlive::RemoveKeepAlive(
    (unsigned int)v15,
    v4,
    (unsigned int)v14,
    (unsigned int)&StringRawBuffer,
    (__int64)&v11[1],
    (__int64)&v12);
  LOBYTE(v11[0]) = 0;
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 10) + 56LL))(*((_QWORD *)this + 10), v11);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x398,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
  if ( LOBYTE(v11[0]) )
  {
    v7 = -2147019873;
    v9 = 2147947423LL;
    v10 = 921LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)v9);
    goto LABEL_7;
  }
  v6 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate(
         (unsigned int *)this + 18,
         *((ExperienceManagerUtils **)this + 3),
         1u);
  v7 = v6;
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 922LL;
    goto LABEL_12;
  }
  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
  v7 = 0;
LABEL_7:
  SingleViewExperienceTelemetry::RemoveKeepAlive::~RemoveKeepAlive((SingleViewExperienceTelemetry::RemoveKeepAlive *)v15);
  return v7;
}
