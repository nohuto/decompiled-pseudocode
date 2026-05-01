/*
 * XREFs of ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x1803545B4
 * Callers:
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x1803547C0 (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800E6520 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C2EEC (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArrayChanged@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802DE4AC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIObservableObjectArray.c)
 *     ?RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z @ 0x180354738 (-RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerHandoffContext,TabletModePositionerHandoffContext,IAppLayout * &,bool &>(
        __int64 *a1,
        struct IAppLayout **a2,
        bool *a3)
{
  IApplicationViewChangeListener *v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  volatile int *v9; // rdx
  volatile int *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = (IApplicationViewChangeListener *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  if ( v6 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IObservableObjectArrayChanged>(v6);
    *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ITabletModePositionerHandoffContext>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    v11 = (volatile int *)v7;
    *(_QWORD *)v7 = &TabletModePositionerHandoffContext::`vftable';
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_BYTE *)(v7 + 24) = 0;
    v8 = TabletModePositionerHandoffContext::RuntimeClassInitialize((TabletModePositionerHandoffContext *)v7, *a2, *a3);
    if ( v8 >= 0 )
    {
      if ( v7 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(
          v7,
          v9);
      *a1 = v7;
      v8 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
