/*
 * XREFs of ??$MakeAndInitialize@VBrokeredViewTabConverterImpl@@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU23456@@Details@WRL@Microsoft@@YAJPEAPEAUIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@AEAPEAU34567@@Z @ 0x1801CD07C
 * Callers:
 *     ?v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x1801F1FB0 (-v_PublishServices@TabViewManager@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18011AC00 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18011AC00.c)
 *     ??0BrokeredViewTabConverterImpl@@QEAA@XZ @ 0x1801CD2C4 (--0BrokeredViewTabConverterImpl@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBrokeredViewTabConverter@Tabs@ComposableShell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801CD7A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIBro_ea_1801CD7A0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<BrokeredViewTabConverterImpl,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter * &>(
        BrokeredViewTabConverterImpl **a1,
        __int64 *a2)
{
  BrokeredViewTabConverterImpl *v4; // rax
  int CanCastTo; // edi
  BrokeredViewTabConverterImpl *v6; // rax
  __int64 v7; // rdi
  BrokeredViewTabConverterImpl *v8; // rbx
  _DWORD *v9; // rcx
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  _DWORD *v12; // rdx
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (BrokeredViewTabConverterImpl *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v6 = BrokeredViewTabConverterImpl::BrokeredViewTabConverterImpl(v4);
  v7 = *a2;
  v8 = v6;
  if ( *((_QWORD *)v6 + 8) != v7 )
  {
    v14 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
    v14 = *((_QWORD *)v8 + 8);
    *((_QWORD *)v8 + 8) = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_8c38bf7c_d9e5_4cb9_a404_fb4e74e5c9a8, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v9, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a1 = v8;
    (*(void (__fastcall **)(BrokeredViewTabConverterImpl *))(*(_QWORD *)v8 + 8LL))(v8);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v10, v11) )
    {
      *a1 = v8;
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                    (__int64)v8 + 8,
                    v12);
      if ( CanCastTo < 0 )
        goto LABEL_12;
    }
    (*(void (__fastcall **)(BrokeredViewTabConverterImpl *))(*(_QWORD *)*a1 + 8LL))(*a1);
  }
LABEL_12:
  if ( v8 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::ComposableShell::Tabs::IBrokeredViewTabConverter,Microsoft::WRL::FtmBase>::Release(v8);
  return (unsigned int)CanCastTo;
}
