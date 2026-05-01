/*
 * XREFs of ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1803005F4
 * Callers:
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802F2F80 (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802F3420 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802F3498 (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1802F439C (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1802F51B0 (-ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1802F60BC (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1802F46AC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x1803002C0 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 */

__int64 __fastcall ObservableObjectArray::_RemoveItem(__int64 a1, struct IUnknown **a2, unsigned int a3)
{
  struct IUnknown *v3; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  int v9; // edi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v14; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v17; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v17 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v7 = (_QWORD *)(a1 + 16);
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
         (_QWORD *)(a1 + 16),
         v8,
         a2,
         &v18);
  if ( v9 < 0 )
    goto LABEL_4;
  v10 = v18;
  if ( v18 >= *(_QWORD *)(a1 + 24) )
  {
    v9 = -2147316575;
LABEL_4:
    v11 = (unsigned int)v9;
    v12 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*v7 + 8 * v18));
  v14 = *(_QWORD *)(a1 + 24);
  if ( v10 != v14 - 1 )
  {
    memmove_0((void *)(*v7 + 8 * v10), (const void *)(*v7 + 8 * v10 + 8), 8 * (v14 - v10) - 8);
    v14 = *(_QWORD *)(a1 + 24);
  }
  *(_QWORD *)(a1 + 24) = v14 - 1;
  v15 = ObservableObjectArray::_FireNotification(
          a1,
          (void (__fastcall *)(__int64, __int64, __int64)) IBamThrottleSettings::`vcall'{32,{flat}},
          a3,
          (__int64)v3);
  v9 = v15;
  if ( v15 < 0 )
  {
    v11 = (unsigned int)v15;
    v12 = 55LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v9;
}
