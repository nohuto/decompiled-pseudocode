/*
 * XREFs of ?_ForEachComponent@ViewEventDispatcher@@AEAAXIAEBV?$function@$$A6AXPEAUIViewWrapperInternal@@@Z@std@@@Z @ 0x18021EAA4
 * Callers:
 *     ?HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z @ 0x1802158C8 (-HostViewStateOverridesChanged@ViewEventDispatcher@@QEAAXIAEBUHostViewStateOverrides@@@Z.c)
 *     ?ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@0@Z @ 0x18021C3D8 (-ViewDesiredNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4NavigationLevel@ViewManagerInter.c)
 *     ?ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z @ 0x18021C46C (-ViewDestroyed@ViewEventDispatcher@@QEAAXI@Z.c)
 *     ?ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z @ 0x18021C74C (-ViewNavigationLevelChanged@ViewEventDispatcher@@QEAAXIW4ViewNavigationLevel@Navigation@@@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x18021FA4C (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetAtCurrent@?$VectorRangeNoThrow@U?$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x180214450 (-GetAtCurrent@-$VectorRangeNoThrow@U-$IVectorView@I@Collections@Foundation@Windows@@@wil@@QEAAXI.c)
 *     ?GetComponentsForHost@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@PEAPEAU?$IVectorView@I@Collections@Foundation@6@@Z @ 0x1802148C0 (-GetComponentsForHost@ViewEventDispatcher@@UEAAJUtagHostIdentifier@ViewEventHandlers@OneCore@Int.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180220CE0 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewEventDispatcher::_ForEachComponent(ViewEventDispatcher *this, int a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // r15d
  int v8; // ebx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  struct IViewWrapperInternal *v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  __int64 v15; // [rsp+30h] [rbp-40h]
  struct IViewWrapperInternal *v16; // [rsp+40h] [rbp-30h] BYREF
  int v17; // [rsp+48h] [rbp-28h]
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  int v19; // [rsp+58h] [rbp-18h] BYREF
  int *v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+68h] [rbp-8h]
  unsigned int v22; // [rsp+6Ch] [rbp-4h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct IViewWrapperInternal *v24; // [rsp+A0h] [rbp+30h] BYREF
  char v25; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+48h] BYREF

  v15 = -2LL;
  LODWORD(v13) = 0;
  HIDWORD(v13) = a2;
  v26 = 0LL;
  v16 = v13;
  v17 = v14;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
  if ( (int)ViewEventDispatcher::GetComponentsForHost((__int64)this + 200, (__int64 *)&v16) >= 0 )
  {
    v18 = v26;
    v20 = (int *)&v25;
    v21 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 56LL))(v26, &v19);
    *v20 = v5;
    wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v18, 0LL);
    v6 = 0;
    v7 = v19;
    v8 = 0;
    while ( *v20 >= 0 && v8 != v7 )
    {
      v9 = v22;
      v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v10 = ViewEventDispatcher::_ViewFromViewInstanceId(this, v9, &v24);
      if ( v10 >= 0 )
      {
        v13 = v24;
        v11 = *(_QWORD *)(a3 + 56);
        if ( !v11 )
        {
          std::_Xbad_function_call();
          return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        }
        (*(void (__fastcall **)(__int64, struct IViewWrapperInternal **))(*(_QWORD *)v11 + 16LL))(v11, &v13);
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          2654LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
      v8 = ++v6;
      wil::VectorRangeNoThrow<Windows::Foundation::Collections::IVectorView<unsigned int>>::GetAtCurrent(&v18, v6);
    }
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
}
