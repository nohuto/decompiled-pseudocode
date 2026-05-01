/*
 * XREFs of ??1?$PrivilegedOperationsBase@UIPrivilegedWindowGroupingOperations@@@@UEAA@XZ @ 0x1801E9E98
 * Callers:
 *     ??_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z @ 0x1801EA070 (--_GCPrivilegedTabletModeOperations@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800801DC (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>::~PrivilegedOperationsBase<IPrivilegedWindowGroupingOperations>(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 56));
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile signed __int32 **)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
