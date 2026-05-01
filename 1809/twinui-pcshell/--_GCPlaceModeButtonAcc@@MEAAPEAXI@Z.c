/*
 * XREFs of ??_GCPlaceModeButtonAcc@@MEAAPEAXI@Z @ 0x180379430
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

CPlaceModeButtonAcc *__fastcall CPlaceModeButtonAcc::`scalar deleting destructor'(CPlaceModeButtonAcc *this, char a2)
{
  *(_QWORD *)this = &CPlaceModeButtonAcc::`vftable'{for `IRawElementProviderSimple'};
  *((_QWORD *)this + 1) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRawElementProviderFragment,IInvokeProvider,IPlaceModeButtonAcc>'};
  *((_QWORD *)this + 2) = &CPlaceModeButtonAcc::`vftable'{for `IInvokeProvider'};
  *((_QWORD *)this + 3) = &CPlaceModeButtonAcc::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPlaceModeButtonAcc>'};
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 72);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  *((_DWORD *)this + 9) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
