/*
 * XREFs of ?SubscribeToServices@ShellPositionerManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180336960
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?RecoverPriorities@ShellPositionerManager@@AEAAJXZ @ 0x180335718 (-RecoverPriorities@ShellPositionerManager@@AEAAJXZ.c)
 */

__int64 __fastcall ShellPositionerManager::SubscribeToServices(
        ShellPositionerManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (char *)this + 128;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 16);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         v2);
  if ( v5 < 0 )
  {
    v6 = 184LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
         (char *)this + 136);
  if ( v5 < 0 )
  {
    v6 = 185LL;
    goto LABEL_3;
  }
  v8 = (_QWORD *)((char *)this + 144);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
         (char *)this + 144);
  if ( v5 < 0 )
  {
    v6 = 186LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 17) + 96LL))(
         *((_QWORD *)this + 17),
         ((unsigned __int64)this + 72) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
         (char *)this + 160);
  if ( v5 < 0 )
  {
    v6 = 188LL;
    goto LABEL_3;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v8 + 72LL))(
         *v8,
         ((unsigned __int64)this + 80) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
         (char *)this + 164);
  if ( v5 < 0 )
  {
    v6 = 189LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(*v8, (char *)this + 120);
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(v10, v9, v11);
  ShellPositionerManager::RecoverPriorities((ShellPositionerManager *)((char *)this - 24));
  return 0LL;
}
