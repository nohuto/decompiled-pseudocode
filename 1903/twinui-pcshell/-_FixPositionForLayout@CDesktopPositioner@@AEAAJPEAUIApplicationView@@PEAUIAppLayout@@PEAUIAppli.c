/*
 * XREFs of ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x1803A58A8
 * Callers:
 *     _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x1803A09B4 (_lambda_7a5a95f5abfebd946f5aab3bf963af6e_--operator().c)
 * Callees:
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x180053808 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRA.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055490 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18039F4E0 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18039F4E0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDesktopPositioner::_FixPositionForLayout(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IAppLayout *a3,
        struct IApplicationViewPosition *a4,
        struct IApplicationViewPosition **a5)
{
  bool v7; // si
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(struct IAppLayout *, struct IApplicationView *, __int64 *, _QWORD); // rbx
  int v12; // eax
  __int64 v13; // rdx
  struct IApplicationViewPosition *v14; // rax
  struct IApplicationViewPosition *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v19[1] = -2LL;
  *a5 = 0LL;
  v16 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v16);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 40LL))(a3)
    || !(*(unsigned int (__fastcall **)(struct IAppLayout *, struct IApplicationView *))(*(_QWORD *)a3 + 184LL))(a3, a2) )
  {
    goto LABEL_20;
  }
  v7 = (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 48LL))(a3) != 0;
  v19[0] = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))&v16,
              (__int64)v19) < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, __int128 *))(*(_QWORD *)v16 + 24LL))(v16, &v20);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2123LL;
      goto LABEL_11;
    }
LABEL_8:
    if ( v7 )
    {
      v17 = 3;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
             (__int64)&v16,
             (__int64)&v17,
             (__int64)&v20);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2128LL;
        goto LABEL_11;
      }
      goto LABEL_19;
    }
    v18 = 0LL;
    v11 = *(__int64 (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, _QWORD))(*(_QWORD *)a3 + 152LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    v12 = v11(a3, a2, &v18, 0LL);
    v9 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v18 + 56LL))(v18, 0LL, &v21);
      v17 = 3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
              &v16,
              &v21,
              &v20,
              &v17);
      v9 = v12;
      if ( v12 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_19:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
LABEL_20:
        v14 = v16;
        v16 = 0LL;
        *a5 = v14;
        v9 = 0;
        goto LABEL_21;
      }
      v13 = 2141LL;
    }
    else
    {
      v13 = 2137LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v19[0] + 56LL))(v19[0], &v20);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  v10 = 2119LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v19);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v9;
}
