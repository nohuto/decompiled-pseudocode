/*
 * XREFs of ??1?$ComPtr@VVirtualDesktopDataSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180356400
 * Callers:
 *     _VirtualDesktopDataSource_CreateInstance_::_1_::dtor$0 @ 0x180357CDB (_VirtualDesktopDataSource_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::~ComPtr<VirtualDesktopDataSource>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<VirtualDesktopDataSource>::InternalRelease(a1);
}
