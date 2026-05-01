/*
 * XREFs of ?ViewVirtualDesktopChanged@SwitchItemFilteredCollection@@UEAAJPEAUIApplicationView@@@Z @ 0x1802F5DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x1802F60BC (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 */

__int64 __fastcall SwitchItemFilteredCollection::ViewVirtualDesktopChanged(
        SwitchItemFilteredCollection *this,
        struct IUnknown *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  struct IUnknown *v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  struct IObservableItem *v16; // [rsp+88h] [rbp+48h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v7 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = 0LL;
      v8 = *((_QWORD *)this + 3);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL))(
             v8,
             v7,
             &GUID_de9754c3_efc7_4024_99ca_fbded7bee7cb,
             &v15);
      v5 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEC,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
          (const char *)(unsigned int)v9);
        goto LABEL_16;
      }
      (*(void (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v15 + 24LL))(v15, v12);
      if ( (unsigned int)SHIsSameObject(a2, v12[0]) )
        break;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      if ( ++v7 >= v14 )
        return 0LL;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IObservableItem **))v15)(
            v15,
            &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27,
            &v16);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = SwitchItemFilteredCollection::_ApplyFilterToItem(
              (SwitchItemFilteredCollection *)((char *)this - 160),
              v16,
              *((_DWORD *)this + 23) > 0);
      v5 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
        return 0LL;
      }
      v11 = 242LL;
    }
    else
    {
      v11 = 241LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemfilteredcollection.cpp",
      (const char *)(unsigned int)v10);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v12);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    return v5;
  }
  return 0LL;
}
