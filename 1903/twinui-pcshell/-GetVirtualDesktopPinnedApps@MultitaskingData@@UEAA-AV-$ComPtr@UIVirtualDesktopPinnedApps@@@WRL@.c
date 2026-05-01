/*
 * XREFs of ?GetVirtualDesktopPinnedApps@MultitaskingData@@UEAA?AV?$ComPtr@UIVirtualDesktopPinnedApps@@@WRL@Microsoft@@XZ @ 0x18034D510
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall MultitaskingData::GetVirtualDesktopPinnedApps(__int64 a1, __int64 *a2)
{
  *a2 = *(_QWORD *)(a1 + 32);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  return a2;
}
