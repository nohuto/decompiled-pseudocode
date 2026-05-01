/*
 * XREFs of ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x1803F5EB0
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x1803F48B0 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x1803F5664 (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnail(LPARAM a1, LPARAM a2, _QWORD *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v8; // r8d
  int v9; // eax
  unsigned int v10; // ebx
  LPARAM lParam[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  __int64 v15; // [rsp+90h] [rbp+40h]

  *a3 = 0LL;
  v14 = 0LL;
  v6 = *(_QWORD *)(a1 + 56);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v6 + 112LL);
  v8 = *(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172);
  LODWORD(v15) = *(_DWORD *)(a1 + 176) - *(_DWORD *)(a1 + 168);
  HIDWORD(v15) = v8;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  v9 = v7(v6, *(_QWORD *)(a1 + 160), v15, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v14);
  v10 = v9;
  if ( v9 >= 0 )
  {
    lParam[0] = a1;
    lParam[1] = (LPARAM)&v14;
    lParam[2] = a2;
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_473ea9c22bd898f9bd25c8344d56a065_>,
      (LPARAM)lParam);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    *a3 = v14;
    v10 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  return v10;
}
