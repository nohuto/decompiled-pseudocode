/*
 * XREFs of ?CalculateSecondaryView@JointResize@@AEAAJPEAUIApplicationView@@H@Z @ 0x1803CF780
 * Callers:
 *     ?OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z @ 0x1803D04C0 (-OnArrangedWindowBorderEnter@JointResize@@UEAAXPEAUHWND__@@HI@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1803D0710 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800109AC (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800222E0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x180065588 (--4-$ComPtr@VICortanaExperienceManagerNotification@Cortana@TwinUI@@@WRL@Microsoft@@QEAAAEAV012@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180129204 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall JointResize::CalculateSecondaryView(
        JointResize *this,
        __int64 (__fastcall ***a2)(ApplicationViewHelpers *, GUID *, __int64 *),
        int a3)
{
  __int64 v3; // rbx
  int v7; // ebx
  bool v8; // zf
  int v9; // eax
  __int64 v10; // rdx
  struct IApplicationView *v11; // rdx
  struct IApplicationView *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  ApplicationViewHelpers *v16; // [rsp+58h] [rbp+38h] BYREF

  v3 = *((_QWORD *)this + 18);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, ApplicationViewHelpers **))(*(_QWORD *)v3 + 32LL))(v3, a2, &v16);
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *)))(**((_QWORD **)this + 18) + 48LL))(
           *((_QWORD *)this + 18),
           a2) )
    {
      v8 = a3 == 11;
    }
    else
    {
      v8 = a3 == 10;
    }
    if ( !v8 )
    {
      v7 = -2147467259;
      goto LABEL_14;
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v9 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *), __int64 *))(*a2)[10])(
           a2,
           &v15);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 88LL))(v15, (char *)this + 264);
      v7 = v9;
      if ( v9 >= 0 )
      {
        *((_QWORD *)this + 29) = ApplicationViewHelpers::GetWindowForView(a2, v11);
        Microsoft::WRL::ComPtr<TwinUI::Cortana::ICortanaExperienceManagerNotification>::operator=(
          (__int64 *)this + 24,
          (__int64)a2);
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)this + 25, (__int64 *)&v16);
        *((_QWORD *)this + 30) = ApplicationViewHelpers::GetWindowForView(
                                   (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v16,
                                   v12);
        Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 23, &v15);
        v7 = 0;
        *((_DWORD *)this + 72) = a3;
        goto LABEL_13;
      }
      v10 = 685LL;
    }
    else
    {
      v10 = 683LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return (unsigned int)v7;
}
