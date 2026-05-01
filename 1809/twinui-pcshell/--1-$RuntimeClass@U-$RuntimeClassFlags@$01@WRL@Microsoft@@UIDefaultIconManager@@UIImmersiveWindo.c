/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDefaultIconManager@@UIImmersiveWindowMessageNotification@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1801FD794
 * Callers:
 *     _DefaultIconManager::DefaultIconManager_::_1_::dtor$0 @ 0x1801FD62A (_DefaultIconManager--DefaultIconManager_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDefaultIconManager,IImmersiveWindowMessageNotification,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 52) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 40));
}
