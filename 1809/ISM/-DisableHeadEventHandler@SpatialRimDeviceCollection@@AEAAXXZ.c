/*
 * XREFs of ?DisableHeadEventHandler@SpatialRimDeviceCollection@@AEAAXXZ @ 0x1800615FC
 * Callers:
 *     ?ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ @ 0x180061900 (-ReleaseInterestInHeadEvent@SpatialRimDeviceCollection@@UEAAJXZ.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x1800623E0 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18005F358 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUIMessageSession@@@Z @ 0x180061310 (-SetOwner@SpatialRimDeviceCollectionHeadEventHandler@@QEAAJPEAVSpatialRimDeviceCollection@@PEAUI.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollection::DisableHeadEventHandler(SpatialRimDeviceCollection *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  SpatialRimDeviceCollectionHeadEventHandler *v3; // rcx
  int v4; // eax
  volatile signed __int32 *v5; // rcx
  _DWORD *v6; // rcx
  __int64 v7; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 2792);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 2792));
  v3 = (SpatialRimDeviceCollectionHeadEventHandler *)*((_QWORD *)this + 354);
  if ( v3 )
  {
    v4 = SpatialRimDeviceCollectionHeadEventHandler::SetOwner(v3, 0LL, 0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
        (const char *)(unsigned int)v4);
    v5 = (volatile signed __int32 *)*((_QWORD *)this + 354);
    if ( v5 )
    {
      *((_QWORD *)this + 354) = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(v5);
    }
    v6 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v6 )
    {
      if ( *v6 )
      {
        RawInputProvidersTracing::Instance();
        v7 = *((_QWORD *)RawInputProvidersTracing::Instance() + 1);
        if ( *(_DWORD *)v7 > 4u
          && (*(_BYTE *)(v7 + 16) & 2) != 0
          && (*(_QWORD *)(v7 + 24) & 2LL) == *(_QWORD *)(v7 + 24) )
        {
          TlgWrite((TraceLoggingHProvider)v7, &unk_1801680C2, 0LL, 0LL, 2u, &pData);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
