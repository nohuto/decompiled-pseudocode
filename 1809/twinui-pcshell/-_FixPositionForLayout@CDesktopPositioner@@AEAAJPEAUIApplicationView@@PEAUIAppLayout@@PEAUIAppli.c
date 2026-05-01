/*
 * XREFs of ?_FixPositionForLayout@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUIApplicationViewPosition@@PEAPEAU4@@Z @ 0x180340640
 * Callers:
 *     _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x18033BB90 (_lambda_7a5a95f5abfebd946f5aab3bf963af6e_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x18033A3F8 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@AEAUtagRECT@@AEAU3@H@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@1$$QEAH@Z @ 0x18033A4D4 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18033A4D4.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPosition@@W4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAW4ARRANGEMENT_BASED_VIEW_STATE@@AEAUtagRECT@@@Z @ 0x18033A674 (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIApplicationViewPos_ea_18033A674.c)
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
  int v11; // eax
  __int64 v12; // rdx
  struct IApplicationViewPosition *v13; // rax
  void *v15; // [rsp+30h] [rbp-50h] BYREF
  int v16; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int128 v19; // [rsp+58h] [rbp-28h] BYREF
  __int128 v20; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v18[1] = -2LL;
  *a5 = 0LL;
  v15 = a4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  if ( (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 40LL))(a3)
    || !(*(unsigned int (__fastcall **)(struct IAppLayout *, struct IApplicationView *))(*(_QWORD *)a3 + 184LL))(a3, a2) )
  {
    goto LABEL_20;
  }
  v7 = (*(unsigned int (__fastcall **)(struct IAppLayout *))(*(_QWORD *)a3 + 48LL))(a3) != 0;
  v18[0] = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(&v15, v18) < 0 )
  {
    v8 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)v15 + 24LL))(v15, &v19);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 2136LL;
      goto LABEL_11;
    }
LABEL_8:
    if ( v7 )
    {
      v16 = 3;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,enum ARRANGEMENT_BASED_VIEW_STATE,tagRECT &>(
             &v15,
             (unsigned int *)&v16,
             (__int64)&v19);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 2141LL;
        goto LABEL_11;
      }
      goto LABEL_19;
    }
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v11 = (*(__int64 (__fastcall **)(struct IAppLayout *, struct IApplicationView *, __int64 *, _QWORD))(*(_QWORD *)a3 + 152LL))(
            a3,
            a2,
            &v17,
            0LL);
    v9 = v11;
    if ( v11 >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v17 + 56LL))(v17, 0LL, &v20);
      v16 = 3;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      v11 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IApplicationViewPosition,tagRECT &,tagRECT &,int>(
              &v15,
              &v20,
              &v19,
              &v16);
      v9 = v11;
      if ( v11 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
LABEL_19:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
LABEL_20:
        v13 = (struct IApplicationViewPosition *)v15;
        v15 = 0LL;
        *a5 = v13;
        v9 = 0;
        goto LABEL_21;
      }
      v12 = 2154LL;
    }
    else
    {
      v12 = 2150LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    goto LABEL_17;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18[0] + 56LL))(v18[0], &v19);
  v9 = v8;
  if ( v8 >= 0 )
    goto LABEL_8;
  v10 = 2132LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v8);
LABEL_17:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
LABEL_21:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v9;
}
