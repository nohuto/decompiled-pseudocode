/*
 * XREFs of ?AcquireInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x1800600F8 (-HeadEventHandlerEnabled_@RawInputProvidersTracing@@QEAAXJ@Z.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::AcquireInterestInHeadEvent(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbp
  struct IMessageSession **v3; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  int v7; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v8; // rcx
  signed __int32 v9; // eax
  _DWORD *v10; // rcx
  RawInputProvidersTracing *v11; // rcx
  int v12; // eax
  int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  if ( ++*((_DWORD *)this + 20) != 1 )
    goto LABEL_23;
  v3 = (struct IMessageSession **)((char *)this - 2760);
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection(v4);
  if ( *((_QWORD *)this + 9) )
    goto LABEL_29;
  v3[354] = 0LL;
  v5 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  if ( v5 )
  {
    v8 = Microsoft::WRL::Details::ModuleBase::module_;
    v5[3] = 1;
    *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IHeadEventHandler>::`vftable';
    if ( v8 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)v6 + 2) = 0LL;
    *((_QWORD *)v6 + 3) = 0LL;
    *(_QWORD *)v6 = &SpatialRimDeviceCollectionHeadEventHandler::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 8), 0, 0);
    *((_QWORD *)v6 + 9) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)v6 + 2, 0, 0);
    *((_QWORD *)v6 + 15) = 0LL;
    do
      v9 = v6[3];
    while ( v9 != 0x7FFFFFFF && v9 != _InterlockedCompareExchange(v6 + 3, v9 + 1, v9) );
    v3[354] = (struct IMessageSession *)v6;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v6);
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
  }
  v10 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
  if ( v10 && *v10 )
  {
    RawInputProvidersTracing::Instance();
    RawInputProvidersTracing::HeadEventHandlerEnabled_(v11, v7);
  }
  if ( v7 < 0
    || (v12 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(
                v3[354],
                (struct SpatialRimDeviceCollection *)v3,
                v3[346]),
        v13 = v12,
        v12 >= 0) )
  {
LABEL_29:
    if ( v4 )
      LeaveCriticalSection(v4);
    v13 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x94,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v12);
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAE,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v13);
  else
LABEL_23:
    v13 = 0;
  if ( v1 )
    LeaveCriticalSection(v1);
  return (unsigned int)v13;
}
