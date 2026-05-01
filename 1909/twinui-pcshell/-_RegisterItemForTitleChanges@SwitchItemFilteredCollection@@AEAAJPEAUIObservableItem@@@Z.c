/*
 * XREFs of ?_RegisterItemForTitleChanges@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@@Z @ 0x1803766F0
 * Callers:
 *     ?ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803753B0 (-ItemAdded@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@.c)
 *     ?SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z @ 0x180375DD0 (-SetTitleFilter@SwitchItemFilteredCollection@@UEAAJPEBG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___ @ 0x1803747EC (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_s.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::_RegisterItemForTitleChanges(
        SwitchItemFilteredCollection *this,
        struct IObservableItem *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  _QWORD *v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[2]; // [rsp+20h] [rbp-18h] BYREF
  struct IObservableItem *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v13 = *((_QWORD *)this + 38);
  v2 = v13;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v13);
  *(_QWORD *)v10 = v2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v10);
  v5 = *(_QWORD *)a2;
  v11 = a2;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(struct IObservableItem *))(v5 + 24))(a2);
  v7 = ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___(
         v6,
         (__int64 *)v10,
         (__int64)this);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x196,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  return v8;
}
