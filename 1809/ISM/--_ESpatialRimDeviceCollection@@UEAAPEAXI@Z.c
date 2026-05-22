/*
 * XREFs of ??_ESpatialRimDeviceCollection@@UEAAPEAXI@Z @ 0x180061ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001C40 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??1?$list@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180063F34 (--1-$list@U-$pair@$$CBKV-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@V-$allocator@U-$pair@$$CBKV-.c)
 *     ??1HIDDeviceCollection@@UEAA@XZ @ 0x18006902C (--1HIDDeviceCollection@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

SpatialRimDeviceCollection *__fastcall SpatialRimDeviceCollection::`vector deleting destructor'(
        SpatialRimDeviceCollection *this,
        char a2)
{
  void *v4; // rcx
  const char *v5; // r9
  char *v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  char *v8; // r8
  char *v9; // rcx
  volatile signed __int32 *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  MPCClickerProcessor *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (void *)*((_QWORD *)this + 365);
  if ( v4 && !CloseHandle(v4) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x90E,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v5);
    JUMPOUT(0x180062032LL);
  }
  v6 = (char *)*((_QWORD *)this + 360);
  if ( v6 )
  {
    v7 = (const struct std::nothrow_t *)((*((_QWORD *)this + 362) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      v7 = (const struct std::nothrow_t *)((char *)v7 + 39);
      v8 = (char *)*((_QWORD *)v6 - 1);
      v9 = (char *)(v6 - v8);
      if ( (unsigned __int64)(v9 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v9, v7);
        goto LABEL_18;
      }
      v6 = v8;
    }
    operator delete(v6, v7);
    *((_QWORD *)this + 360) = 0LL;
    *((_QWORD *)this + 361) = 0LL;
    *((_QWORD *)this + 362) = 0LL;
  }
  std::list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>::~list<std::pair<unsigned long const,std::shared_ptr<LegacyDeviceInfo>>>((char *)this + 2864);
  v10 = (volatile signed __int32 *)*((_QWORD *)this + 354);
  if ( v10 )
  {
    *((_QWORD *)this + 354) = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v10);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v11 = *((_QWORD *)this + 347);
  if ( v11 )
  {
    *((_QWORD *)this + 347) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = *((_QWORD *)this + 346);
  if ( v12 )
  {
    *((_QWORD *)this + 346) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  HIDDeviceCollection::~HIDDeviceCollection(this);
  if ( (a2 & 1) != 0 )
  {
    v13 = this;
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
LABEL_18:
    MPCClickerProcessor::Uninitialize3DComponents(v13);
  }
  return this;
}
