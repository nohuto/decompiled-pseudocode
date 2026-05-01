/*
 * XREFs of ?_ItemMeetsFilterCriteria@SwitchItemFilteredCollection@@AEAA_NPEAUIObservableItem@@@Z @ 0x180356D90
 * Callers:
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x180355BC0 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180356C2C (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18002758C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall SwitchItemFilteredCollection::_ItemMeetsFilterCriteria(
        struct IUnknown **this,
        struct IObservableItem *a2)
{
  bool v3; // di
  __int64 v5; // rbx
  struct IUnknown *v6; // rcx
  const WCHAR *v7; // rbx
  LPCWSTR *v8; // rax
  struct IUnknown *v10; // [rsp+68h] [rbp+38h] BYREF
  __int64 v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+78h] [rbp+48h] BYREF

  v11 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( (**(int (__fastcall ***)(struct IObservableItem *, GUID *, __int64 *))a2)(
         a2,
         &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
         &v11) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 24LL))(v11, &v12);
    v3 = 1;
    if ( this[25] )
    {
      v5 = v12;
      v10 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
      if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v5 + 80LL))(v5, &v10) >= 0 )
        v3 = (unsigned int)SHIsSameObject(v10, this[25]) != 0;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
      if ( !v3 )
        goto LABEL_15;
    }
    v6 = this[26];
    if ( v6 )
    {
      if ( ((int (__fastcall *)(struct IUnknown *, __int64, struct IUnknown **))v6->lpVtbl[1].QueryInterface)(
             v6,
             v12,
             &v10) >= 0
        && (_DWORD)v10 )
      {
        v3 = 1;
        goto LABEL_12;
      }
      v3 = 0;
    }
    if ( !v3 )
    {
LABEL_15:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
      goto LABEL_16;
    }
LABEL_12:
    v7 = (const WCHAR *)this[28];
    if ( v7 && *v7 )
    {
      v8 = (LPCWSTR *)(*(__int64 (__fastcall **)(struct IObservableItem *))(*(_QWORD *)a2 + 24LL))(a2);
      v3 = FindStringOrdinal(0x400000u, *v8, -1, v7, -1, 1) >= 0;
    }
    goto LABEL_15;
  }
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  return v3;
}
