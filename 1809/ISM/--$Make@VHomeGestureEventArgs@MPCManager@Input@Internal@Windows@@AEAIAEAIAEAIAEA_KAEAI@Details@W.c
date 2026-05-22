/*
 * XREFs of ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI00AEA_K0@Z @ 0x1800DB3F4
 * Callers:
 *     ?OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1800DF220 (-OnInteractiveIntentGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULe.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x1800DF7F0 (-OnButtonsChangedDuringHomeGesture@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@.c)
 * Callees:
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KI@Z @ 0x1800DEC60 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DEE30 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHom_ea_1800DEE30.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18012C2B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &>(
        __int64 *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v10; // rax
  __int64 v11; // rdi

  *a1 = 0LL;
  v10 = (Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)operator new(
                                                                        0x60uLL,
                                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(v10, *a2, *a3, *a4, *a5, *a6);
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IHomeGestureEventArgs,Microsoft::WRL::FtmBase>::Release(*a1);
    *a1 = v11;
  }
  return a1;
}
