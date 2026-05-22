/*
 * XREFs of ?OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x180061420
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F1F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int32 i; // eax
  __int64 v6; // rcx

  if ( *(_QWORD *)(a1 + 72) )
  {
    for ( i = *(_DWORD *)(a1 + 12);
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 12), i + 1, i);
          i = *(_DWORD *)(a1 + 12) )
    {
      ;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    v6 = *(_QWORD *)(a1 + 120);
    if ( v6 != a3 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        v6 = *(_QWORD *)(a1 + 120);
      }
      *(_QWORD *)(a1 + 120) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( a1 != -80 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(**(_QWORD **)(a1 + 72) + 128LL))(
           *(_QWORD *)(a1 + 72),
           lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)a1);
  }
}
