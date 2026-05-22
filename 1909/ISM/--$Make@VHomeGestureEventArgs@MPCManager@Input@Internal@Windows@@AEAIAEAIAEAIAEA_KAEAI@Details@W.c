/*
 * XREFs of ??$Make@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@AEAIAEAIAEAIAEA_KAEAI@Details@WRL@Microsoft@@YA?AV?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@12@AEAI00AEA_K0@Z @ 0x18010F06C
 * Callers:
 *     ?OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z @ 0x180111B44 (-OnButtonsChangedDuringHomeGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@III_KI@Z.c)
 *     ?OnInteractiveIntentGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@IIII_KI@Z @ 0x1801128E0 (-OnInteractiveIntentGesture@MPCManagerClient@@QEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDevic.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C548 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KI@Z @ 0x18010F728 (--0HomeGestureEventArgs@MPCManager@Input@Internal@Windows@@QEAA@KKK_KI@Z.c)
 *     ?Attach@?$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXPEAVHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@Z @ 0x180110534 (-Attach@-$ComPtr@VHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@@WRL@Microsoft@@QEAAXP.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<Windows::Internal::Input::MPCManager::HomeGestureEventArgs,unsigned int &,unsigned int &,unsigned int &,unsigned __int64 &,unsigned int &>(
        _QWORD *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6)
{
  Windows::Internal::Input::MPCManager::HomeGestureEventArgs *v10; // rax
  __int64 v11; // rax

  *a1 = 0LL;
  v10 = (Windows::Internal::Input::MPCManager::HomeGestureEventArgs *)operator new(
                                                                        0x60uLL,
                                                                        (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v11 = Windows::Internal::Input::MPCManager::HomeGestureEventArgs::HomeGestureEventArgs(v10, *a2, *a3, *a4, *a5, *a6);
    Microsoft::WRL::ComPtr<Windows::Internal::Input::MPCManager::HomeGestureEventArgs>::Attach(a1, v11);
  }
  return a1;
}
