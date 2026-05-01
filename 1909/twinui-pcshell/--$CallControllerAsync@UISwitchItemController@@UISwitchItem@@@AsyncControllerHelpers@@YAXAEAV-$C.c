/*
 * XREFs of ??$CallControllerAsync@UISwitchItemController@@UISwitchItem@@@AsyncControllerHelpers@@YAXAEAV?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@P8ISwitchItemController@@EAAXPEAUISwitchItem@@@ZV?$ComPtr@UISwitchItem@@@23@@Z @ 0x18038EA5C
 * Callers:
 *     ?CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x18038EEE0 (-CloseSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x18038F0D0 (-InvokeSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x18038F170 (-MoveItemToNewDesktop@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z @ 0x18038F2C0 (-SwitchItemDragStarted@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetControllerApartment@AsyncControllerHelpers@@YA?AW4TaskApartment@Internal@Windows@@PEAUIUnknown@@@Z @ 0x18036F164 (-GetControllerApartment@AsyncControllerHelpers@@YA-AW4TaskApartment@Internal@Windows@@PEAUIUnkno.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___ @ 0x18038EC30 (Windows--Internal--ComTaskPool--QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___.c)
 */

__int64 __fastcall AsyncControllerHelpers::CallControllerAsync<ISwitchItemController,ISwitchItem>(
        int (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        __int64 *a3)
{
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int ControllerApartment; // ebx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-20h] BYREF
  __int64 v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v5 = *a1;
  if ( v5 )
  {
    ControllerApartment = AsyncControllerHelpers::GetControllerApartment(v5);
    v10 = *a1;
    v9 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v10);
    v11[0] = *a3;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v11);
    Windows::Internal::ComTaskPool::QueueTask__lambda_56bf2cf466c511de0a79be2a3ec217ef___(ControllerApartment, &v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a3);
}
