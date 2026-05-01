/*
 * XREFs of ShellPositionerHelpers::PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471___ @ 0x1801CFC24
 * Callers:
 *     ?OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@@PEAUITabControllerEventArgs@3456@@Z @ 0x1801E0BE0 (-OnTabMovedGroups@TabViewManager@@AEAAJPEAUITabController@Tabs@ComposableShell@Internal@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeConstraintsOperations@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005B280 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPrivilegedSizeC.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_32076d8d527a4c2a596cc095f37c3471_____lambda_32076d8d527a4c2a596cc095f37c3471___ @ 0x1801CF0C8 (Microsoft--WRL--Details--Make_ShellPositionerHelpers--Details--ShellPositionerCallb_ea_1801CF0C8.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerHelpers::PerformCallbackOnView__lambda_32076d8d527a4c2a596cc095f37c3471___(
        IUnknown *punk,
        __int64 a2,
        __int128 *a3)
{
  HRESULT v6; // eax
  int v7; // edi
  void *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  volatile int *v11; // rdx
  void *ppvOut; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v14[1] = -2LL;
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  v6 = IUnknown_QueryService(
         punk,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
         &ppvOut);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v16 = 0LL;
    v8 = ppvOut;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v9 = (*(__int64 (__fastcall **)(void *, __int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, a2, &v16);
    v7 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::Details::Make_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_32076d8d527a4c2a596cc095f37c3471_____lambda_32076d8d527a4c2a596cc095f37c3471___(
        v14,
        a3);
      v10 = v14[0];
      if ( v14[0] )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v14[0]);
        if ( v7 >= 0 )
          v7 = 0;
      }
      else
      {
        v7 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x57,
          (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
          (const char *)0x8007000ELL);
      }
      if ( v10 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPrivilegedSizeConstraintsOperations,Microsoft::WRL::FtmBase>::Release(
          v10,
          v11);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x50,
      (__int64)"internal\\shell\\private\\inc\\shellpositionerhelpers.h",
      (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  return (unsigned int)v7;
}
