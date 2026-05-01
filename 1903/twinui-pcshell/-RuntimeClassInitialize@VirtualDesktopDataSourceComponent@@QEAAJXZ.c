/*
 * XREFs of ?RuntimeClassInitialize@VirtualDesktopDataSourceComponent@@QEAAJXZ @ 0x1803354B8
 * Callers:
 *     ??$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180334FA0 (--$MakeAndInitialize@VVirtualDesktopDataSourceComponent@@UIUnknown@@$$V@Details@WRL@Microsoft@@Y.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180116064 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803383DC (-VirtualDesktopDataSource_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18033A414 (-VirtualDesktopController_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall VirtualDesktopDataSourceComponent::RuntimeClassInitialize(VirtualDesktopDataSourceComponent *this)
{
  void **v1; // r14
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v6; // rcx
  int v8[4]; // [rsp+20h] [rbp-58h] BYREF
  void *v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int64 v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v1 = (void **)((char *)this + 144);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  Instance = VirtualDesktopDataSource_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v5 = 35LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasourcecomponent.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 19);
  Instance = VirtualDesktopController_CreateInstance(v6, (void **)this + 19);
  if ( Instance < 0 )
  {
    v5 = 36LL;
    goto LABEL_7;
  }
  v9 = *v1;
  v10 = 0LL;
  v12 = *((_QWORD *)this + 19);
  *(_OWORD *)v8 = *(_OWORD *)&SID_VirtualDesktopDataSource.Revision;
  v13 = 0LL;
  v11 = *(_OWORD *)&SID_VirtualDesktopController.Revision;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (VirtualDesktopDataSourceComponent *)((char *)this + 40),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v8,
               2LL);
  if ( Instance < 0 )
  {
    v5 = 43LL;
    goto LABEL_7;
  }
  return (unsigned int)Instance;
}
