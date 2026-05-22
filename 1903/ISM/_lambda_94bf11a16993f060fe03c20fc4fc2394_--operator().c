/*
 * XREFs of _lambda_94bf11a16993f060fe03c20fc4fc2394_::operator() @ 0x1800E0F54
 * Callers:
 *     wil::details::lambda_call__lambda_94bf11a16993f060fe03c20fc4fc2394___::_lambda_call__lambda_94bf11a16993f060fe03c20fc4fc2394___ @ 0x1800E08E8 (wil--details--lambda_call__lambda_94bf11a16993f060fe03c20fc4fc2394___--_lambda_call__lambda_94bf.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E33DC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007C0B4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8690 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800DA21C (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800E4318 (-QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W_N1@Z @ 0x1800E52B4 (-Stop@OnHolographicDisplayChanged@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJPEB_W.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_94bf11a16993f060fe03c20fc4fc2394_::operator()(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 *v3; // rbx
  __int64 v4; // rax
  const WCHAR *v5; // rbx
  const WCHAR *StringRawBuffer; // rsi
  HSTRING v7; // rcx
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  TraceLoggingHProvider v14; // r10
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  TraceLoggingHProvider v18; // r10
  __int64 v20; // [rsp+38h] [rbp-9h] BYREF
  struct _RTL_CRITICAL_SECTION *v21[2]; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+2Fh] BYREF
  EVENT_DATA_DESCRIPTOR *p_pData; // [rsp+88h] [rbp+47h]

  v21[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  if ( **(_BYTE **)a1 )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)(*(_QWORD *)(a1 + 8) + 440LL);
    EnterCriticalSection(v2);
    v21[0] = v2;
    v3 = *(__int64 **)(*(_QWORD *)(a1 + 8) + 480LL);
    v4 = *v3;
    v20 = *v3;
    while ( (__int64 *)v4 != v3 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v4 + 40) + 168LL))(*(_QWORD *)(v4 + 40), 1LL);
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v20);
      v4 = v20;
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v21);
  }
  v5 = L"UndefinedDeviceInterfacePath";
  StringRawBuffer = L"UndefinedDeviceInterfacePath";
  v7 = **(HSTRING **)(a1 + 16);
  if ( v7 )
    StringRawBuffer = WindowsGetStringRawBuffer(v7, 0LL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v8 + 152) )
  {
    v5 = WindowsGetStringRawBuffer(*(HSTRING *)(v8 + 152), 0LL);
    v8 = *(_QWORD *)(a1 + 8);
  }
  pData.Ptr = (ULONGLONG)off_180176130;
  *(_QWORD *)&pData.Size = v8;
  p_pData = &pData;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(v8, &pData);
  v9 = WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 40), 0LL);
  SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged::Stop(
    *(SpatialInteractionDevices::SpatialInteractionTrace::OnHolographicDisplayChanged **)(a1 + 24),
    **(_DWORD **)(a1 + 32),
    v9,
    **(_BYTE **)(a1 + 48),
    **(_BYTE **)(a1 + 56));
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v10) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v11,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    v13 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v12,
            (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v13[1] > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)v13[1], 2uLL) )
      {
        TlgCreateWsz(&pDesc, StringRawBuffer);
        TlgWrite(v14, &unk_18019EA44, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  LOBYTE(v15) = SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v11);
  if ( (_BYTE)v15 )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v16,
      (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    v15 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
            v17,
            (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    if ( *(_DWORD *)v15[1] > 4u )
    {
      LOBYTE(v15) = TlgKeywordOn((TraceLoggingHProvider)v15[1], 2uLL);
      if ( (_BYTE)v15 )
      {
        TlgCreateWsz(&pDesc, v5);
        LOBYTE(v15) = TlgWrite(v18, &unk_18019E56D, 0LL, 0LL, 3u, &pData);
      }
    }
  }
  return (char)v15;
}
