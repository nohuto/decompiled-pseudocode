/*
 * XREFs of ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1802F3498
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1802F2830 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1802F3044 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1802F331C (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 *     ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1803005F4 (-_RemoveItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observ.c)
 */

__int64 __fastcall SwitchItemCollection::_UpdateShowInSwitchers(
        SwitchItemCollection *this,
        struct IApplicationView *a2,
        char a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  SwitchItemCollection::_FindExistingItem((__int64)this, &v11, (__int64)a2);
  if ( a3 )
  {
    if ( !v11 )
    {
      v6 = SwitchItemCollection::_AddViewItem(this, a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 253LL;
LABEL_8:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_10;
      }
      goto LABEL_10;
    }
LABEL_9:
    v7 = 0;
    goto LABEL_10;
  }
  if ( !v11 )
    goto LABEL_9;
  v6 = ObservableObjectArray::_RemoveItem((char *)this + 8, &v11, 1LL);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 258LL;
    goto LABEL_8;
  }
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v7;
}
