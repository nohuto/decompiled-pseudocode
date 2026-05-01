/*
 * XREFs of ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180293920
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18026DED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_18026DED0.c)
 *     ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x1802925DC (--$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerIntero.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___ @ 0x180292E70 (Windows--Internal--ComTaskPool--QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___.c)
 *     ?NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180298948 (-NavigateInternal@ViewWrapperBase@@IEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Wind.c)
 */

__int64 __fastcall UAPViewWrapper::v_SetDesiredNavigationLevel(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  volatile signed __int64 *v7; // rsi
  PCWSTR v8; // rax
  __int64 v9; // rcx
  volatile signed __int64 *v10; // rdx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  unsigned int v13; // r8d
  __int64 result; // rax
  volatile signed __int64 *v15[5]; // [rsp+20h] [rbp-28h] BYREF
  LPCWSTR StringRawBuffer; // [rsp+50h] [rbp+8h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  v17 = 1;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 152), 0LL);
  ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
    &StringRawBuffer,
    (int *)(a1 + 148),
    &v17);
  *(_DWORD *)(a1 + 560) = a2;
  if ( a2 || (int)CoreIsWindowServiceSupported(*(_QWORD *)(a1 + 272), &GUID_f9eb9c6d_5a6a_43c7_b0d1_82d3c81e33fc) < 0 )
    return ViewWrapperBase::NavigateInternal(a1, a2);
  ViewWrapperBase::NavigateInternal(a1, 3LL);
  v4 = a1 - 8;
  if ( a1 != 8 )
  {
    v5 = *(_QWORD *)(v4 + 560);
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 560), v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_9;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
  }
LABEL_9:
  v7 = *(volatile signed __int64 **)(a1 + 272);
  v8 = WindowsGetStringRawBuffer(*(HSTRING *)(a1 + 152), 0LL);
  v15[0] = (volatile signed __int64 *)(a1 - 8);
  v10 = (volatile signed __int64 *)v8;
  if ( a1 != 8 )
  {
    v11 = *(_QWORD *)(v4 + 560);
    while ( 1 )
    {
      v9 = (unsigned __int64)v11 >> 63;
      if ( v11 < 0 )
        break;
      v9 = v11 + 1;
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 560), v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_15;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
  }
LABEL_15:
  v13 = *(_DWORD *)(a1 + 184);
  v15[1] = (volatile signed __int64 *)(a1 - 8);
  v15[2] = v7;
  v15[3] = v10;
  result = Windows::Internal::ComTaskPool::QueueTask__lambda_858eee636f27872cdf74bbc97c00a8bc___(
             v9,
             (__int64)v10,
             v13,
             v15);
  if ( v15[0] )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(v15[0]);
  if ( a1 != 8 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release((volatile signed __int64 *)(a1 - 8));
  return result;
}
