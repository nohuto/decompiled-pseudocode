/*
 * XREFs of ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180355BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180356D90 (-_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z.c)
 *     ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x180356F00 (-_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x180360B0C (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 */

void __fastcall SwitchItemFilteredCollection::ItemAdded(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArray *a2,
        struct IObservableItem *a3)
{
  SwitchItemFilteredCollection *v3; // rsi
  int v6; // ebx
  __int64 v7; // r8
  struct IObservableItem *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = (SwitchItemFilteredCollection *)((char *)this - 144);
  if ( *((_BYTE *)this + 104) )
    SwitchItemFilteredCollection::_RegisterItemForTitleChanges((SwitchItemFilteredCollection *)((char *)this - 144), a3);
  if ( SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(v3, a3) )
  {
    v6 = *((_DWORD *)this + 27);
    v8 = a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v7 = 2LL;
    if ( v6 <= 0 )
      v7 = 0LL;
    ObservableObjectArray::_AddItem(v3, &v8, v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
}
