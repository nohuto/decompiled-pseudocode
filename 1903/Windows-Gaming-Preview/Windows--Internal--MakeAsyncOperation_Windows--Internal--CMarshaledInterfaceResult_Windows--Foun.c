/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_363ecfaa426a2d345ca41bd67db72fc0___ @ 0x18001DDA0
 * Callers:
 *     ?FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@5@@Z @ 0x18001B3A0 (-FindAllAsyncPackageFamilyName@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800431E4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry______Windows::Internal::ComTaskPoolHandler__lambda_363ecfaa426a2d345ca41bd67db72fc0___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v7; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx

  v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    v7[1] = *(_QWORD *)a4;
    v10 = (_QWORD *)(a4 + 8);
    v7[2] = 0LL;
    if ( v7 + 2 != (_QWORD *)(a4 + 8) )
    {
      v7[2] = *v10;
      *v10 = 0LL;
    }
    v7[3] = *(_QWORD *)(a4 + 16);
    *(_QWORD *)(a4 + 16) = 0LL;
    *((_BYTE *)v7 + 32) = *(_BYTE *)(a4 + 24);
    *((_BYTE *)v7 + 33) = 0;
    *(_BYTE *)(a4 + 24) = 1;
    *v7 = &off_180048DB0;
    *((_DWORD *)v7 + 10) = 0;
    `eh vector constructor iterator'(
      v7 + 6,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v9 + 10) = 0;
  }
  else
  {
    v9 = 0LL;
  }
  return Windows::Internal::MakeAsyncOperationHelper<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>,Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *> *,Windows::Internal::ComTaskPoolHandler>(
           a1,
           a2,
           v8,
           v9);
}
