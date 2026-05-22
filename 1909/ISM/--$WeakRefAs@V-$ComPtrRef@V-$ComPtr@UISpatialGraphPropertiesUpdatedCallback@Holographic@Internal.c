/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UISpatialGraphPropertiesUpdatedCallback@Holographic@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014B5EC
 * Callers:
 *     ?InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4SpatialGraphPropertyFlags@234@@Z @ 0x18015959C (-InvokePropertiesUpdatedCallback@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAXW4S.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180149D94 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphPropertiesUpdatedCallback>>>(
        _QWORD *a1,
        __int64 *a2)
{
  int v3; // edi
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, (__int64 *)&v5);
  if ( v3 >= 0 )
  {
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(a2);
      v3 = (**v5)(v5, &GUID_7a061d9a_fc53_4316_9547_28bf47ddf1a3, a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v3;
}
