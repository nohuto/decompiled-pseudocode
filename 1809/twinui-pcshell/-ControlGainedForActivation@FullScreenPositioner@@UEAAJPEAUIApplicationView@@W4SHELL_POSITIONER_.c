/*
 * XREFs of ?ControlGainedForActivation@FullScreenPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180140B70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180027110 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x180140C94 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@.c)
 */

__int64 __fastcall FullScreenPositioner::ControlGainedForActivation(
        PositionerPropertySetHelpers *a1,
        __int64 a2,
        unsigned int a3,
        struct IApplicationView *a4)
{
  int DetailsForActivation; // edi
  __int64 v8; // rdx
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ebx
  struct IUnknown v13; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(a1, a4, &v13, 0LL);
  if ( DetailsForActivation < 0 )
  {
    v8 = 470LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
    return (unsigned int)DetailsForActivation;
  }
  if ( ((__int64)v13.lpVtbl & 1) != 0 )
    return 0LL;
  if ( a3 != 3 )
    FullScreenPositioner::ControlGainedHelper((char *)a1 - 128, a2, a3);
  if ( ((__int64)v13.lpVtbl & 2) == 0 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
    if ( v10 >= 0 )
      return 0LL;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      483LL,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v10);
  }
  DetailsForActivation = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 224LL))(a2, 1LL);
  if ( DetailsForActivation < 0 )
  {
    v8 = 486LL;
    goto LABEL_3;
  }
  v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 352LL))(a2);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E7,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  return 0LL;
}
