/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x180373374
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180372B60 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803732B0 (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x180373544 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1803737C8 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180080794 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180326764 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHidi.c)
 *     ?IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z @ 0x180372AAC (-IsIncludedTab@SwitchItemCollection@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x18038039C (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

__int64 __fastcall SwitchItemCollection::_AddViewItem(SwitchItemCollection *this, struct IApplicationView *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // ebx
  struct IApplicationView *v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rbx
  int v14; // ebx
  __int64 v15; // rdx
  int v17[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v20; // [rsp+78h] [rbp+38h] BYREF
  int v21; // [rsp+80h] [rbp+40h] BYREF
  __int64 v22; // [rsp+88h] [rbp+48h] BYREF

  v3 = 0;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  if ( (**(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
         a2,
         &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
         &v18) >= 0 )
  {
    v5 = v18;
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 24LL))(v5, &v22) < 0
      || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v20) < 0
      || !v20 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
      goto LABEL_20;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 216LL))(a2, &v21);
  v10 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC7,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v6);
    v3 = v10;
    goto LABEL_20;
  }
  if ( v21 )
  {
    wil::Feature<__WilFeatureTraits_Feature_HolographicDesktopMultitaskingUXHiding>::ReportUsageToService(v8, v7, v9);
    if ( !HolographicViewHelpers::IsApplicationViewHolographic(a2, v11) )
    {
      v12 = 0;
      if ( *((_QWORD *)this + 27) )
      {
        if ( !SwitchItemCollection::IsIncludedTab(this, a2) )
          goto LABEL_20;
        v12 = (*((_DWORD *)this + 62) != 0) + 1;
      }
      v13 = *((_QWORD *)this + 26);
      *(_QWORD *)v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
      v14 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, GUID *, int *))(*(_QWORD *)v13 + 24LL))(
              v13,
              a2,
              v12,
              &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
              v17);
      if ( v14 >= 0 )
      {
        v14 = ObservableObjectArray::_AddItem((char *)this + 8, v17, 0LL);
        if ( v14 >= 0 )
        {
LABEL_19:
          v3 = v14;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v17);
          goto LABEL_20;
        }
        v15 = 237LL;
      }
      else
      {
        v15 = 236LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_19;
    }
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  return v3;
}
