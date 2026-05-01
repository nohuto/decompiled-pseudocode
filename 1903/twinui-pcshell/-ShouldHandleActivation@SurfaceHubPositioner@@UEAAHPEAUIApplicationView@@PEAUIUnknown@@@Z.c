/*
 * XREFs of ?ShouldHandleActivation@SurfaceHubPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18003AA30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x18003AE00 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::ShouldHandleActivation(
        SurfaceHubPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  PositionerPropertySetHelpers *v5; // rcx
  int DetailsForActivation; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         &v13) < 0 )
    goto LABEL_9;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v5,
                           (struct IApplicationView *)a3,
                           &v12,
                           0LL,
                           (struct PositionerPropertySetHelpers::ViewSizePreferences *)0xFFFFFFFFFFFFFFFELL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF8,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      v10);
  if ( ((__int64)v12.lpVtbl & 0x10) != 0 )
LABEL_9:
    v7 = 0;
  else
    v7 = *((unsigned __int8 *)this + 464);
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v7;
}
