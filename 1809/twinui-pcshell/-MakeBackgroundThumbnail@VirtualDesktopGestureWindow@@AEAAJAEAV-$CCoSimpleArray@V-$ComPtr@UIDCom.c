/*
 * XREFs of ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAUIDCompThumbnail@@@Z @ 0x18039015C
 * Callers:
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z @ 0x18038EB60 (-CreateAdjacentDesktop@VirtualDesktopGestureWindow@@AEAAJPEA_NIUtagRECT@@@Z.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJXZ @ 0x18038F90C (-Initialize@VirtualDesktopGestureWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::MakeBackgroundThumbnail(LPARAM a1, LPARAM a2, _QWORD *a3)
{
  int v6; // r9d
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  LPARAM lParam[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h]

  *a3 = 0LL;
  v13 = 0LL;
  v6 = *(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172);
  LODWORD(v14) = *(_DWORD *)(a1 + 176) - *(_DWORD *)(a1 + 168);
  HIDWORD(v14) = v6;
  v7 = *(_QWORD *)(a1 + 56);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v7 + 112LL))(
         v7,
         *(_QWORD *)(a1 + 160),
         v14,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         &v13);
  v9 = v8;
  if ( v8 >= 0 )
  {
    lParam[0] = a1;
    lParam[1] = (LPARAM)&v13;
    lParam[2] = a2;
    EnumWindows(
      (WNDENUMPROC)EnumWindowsHelpers::LambdaEnumWindowsProc<_lambda_473ea9c22bd898f9bd25c8344d56a065_>,
      (LPARAM)lParam);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
    *a3 = v13;
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17E,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v8);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v9;
}
