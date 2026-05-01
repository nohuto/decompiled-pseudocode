/*
 * XREFs of ?_GetApplicationViewUniqueId@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAI@Z @ 0x1801B6A24
 * Callers:
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6F1C (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180129AF8 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AEC40 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall HolographicPositioner::_GetApplicationViewUniqueId(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        unsigned int *a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  HolographicPositioner *v13; // [rsp+50h] [rbp+20h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, HolographicPositioner **); // [rsp+58h] [rbp+28h] BYREF
  struct IApplicationView *v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v13 = this;
  *a3 = 0;
  v15 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v16 = 0LL;
  if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v15, &v16) < 0 )
  {
    v13 = 0LL;
    v9 = Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v15, (__int64 *)&v13);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(HolographicPositioner *, __int64 (__fastcall ****)(_QWORD, GUID *, HolographicPositioner **)))(*(_QWORD *)v13 + 24LL))(
             v13,
             &v14);
      v6 = v9;
      if ( v9 >= 0 )
      {
        *a3 = (unsigned int)v14;
        v6 = 0;
        goto LABEL_17;
      }
      v10 = 1741LL;
    }
    else
    {
      v10 = 1738LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_17:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v13);
    goto LABEL_18;
  }
  v14 = 0LL;
  v4 = v16;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, HolographicPositioner **)))(*(_QWORD *)v4 + 24LL))(
         v4,
         &v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v7 = (**v14)(v14, &GUID_8d2a8bc4_d46e_4079_bdcb_7c4c0841d5e8, &v13);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(HolographicPositioner *, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, a3);
      v6 = v7;
      if ( v7 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
        goto LABEL_10;
      }
      v8 = 1732LL;
    }
    else
    {
      v8 = 1730LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6BF,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v6;
}
