/*
 * XREFs of ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18005D090
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicWin32Exclusives@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013227C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicWin32Exclusives@@@wil@@CA.c)
 *     ??$As@UIWin32ApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWin32ApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801AEC40 (--$As@UIWin32ApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1801B69EC (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B7DE4 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B82B8 (-_RaiseViewFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8388 (-_RaiseViewFocusLost@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1801B8458 (-_RaiseViewRemoved@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::OnApplicationViewChanged(__int64 a1, struct IApplicationView *a2, int a3)
{
  BOOL v6; // r14d
  __int64 v8; // rcx
  __int64 *v9; // rcx
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  int v14; // [rsp+20h] [rbp-30h] BYREF
  struct IApplicationView *v15; // [rsp+28h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v19; // [rsp+70h] [rbp+20h] BYREF

  v17[1] = -2LL;
  if ( !*(_DWORD *)(a1 + 64) )
    return 0LL;
  if ( !a2 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A0,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)0x80070057LL);
    return v10;
  }
  v19 = 0LL;
  if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 264LL))(a2, &v19) < 0 )
  {
    v8 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = 0;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19) == 4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  }
  if ( !v6 )
  {
    if ( a3 )
      return 0LL;
    v17[0] = (__int64)a2;
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 8LL))(a2);
    v15 = 0LL;
    if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, struct IApplicationView **))a2)(
           a2,
           &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
           &v15) >= 0 )
    {
      LODWORD(v19) = 6;
      if ( (*(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 400LL))(a2, &v19) >= 0
        && (_DWORD)v19 == 1 )
      {
        wil::Feature<__WilFeatureTraits_Feature_HolographicWin32Exclusives>::ReportUsageToService();
        v13 = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, __int64))(**(_QWORD **)(a1 + 72) + 24LL))(
                *(_QWORD *)(a1 + 72),
                a2,
                4LL);
        v10 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1C9,
            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v13);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v17);
          return v10;
        }
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    v9 = v17;
LABEL_13:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
    return 0LL;
  }
  if ( a3 == 1 )
  {
    HolographicPositioner::_RaiseViewRemoved((HolographicPositioner *)(a1 - 176), a2);
    return 0LL;
  }
  if ( a3 <= 6 )
    return 0LL;
  if ( a3 > 8 )
  {
    if ( a3 == 9 )
      HolographicPositioner::_RaiseViewFocusLost((HolographicPositioner *)(a1 - 176), a2);
    return 0LL;
  }
  v11 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 96LL))(a2, 1LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v15 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v15);
    v17[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWin32ApplicationView>(&v15, v17) >= 0 )
    {
      HolographicPositioner::_FindViewHostItem(a1 - 176, &v16, a2);
      v14 = 6;
      LOBYTE(v19) = 0;
      if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v14) >= 0
        && v14 == 1
        && v16
        && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 80LL))(v16, &v19) >= 0
        && !(_BYTE)v19 )
      {
        HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 176), a2);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    }
    HolographicPositioner::_RaiseViewFocusGained((HolographicPositioner *)(a1 - 176), a2);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v17);
    v9 = (__int64 *)&v15;
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x18E,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
