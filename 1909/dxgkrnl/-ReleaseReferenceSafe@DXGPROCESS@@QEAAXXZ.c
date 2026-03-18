/*
 * XREFs of ?ReleaseReferenceSafe@DXGPROCESS@@QEAAXXZ @ 0x1C003C900
 * Callers:
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ @ 0x1C0215860 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV@@UEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C0215D50 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C0216F70 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ.c)
 *     ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C02173B0 (-ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C025DED0 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00088C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000897C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0018D50 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 */

void __fastcall DXGPROCESS::ReleaseReferenceSafe(DXGPROCESS *this, __int64 a2)
{
  DXGFASTMUTEX *v3; // rbx
  __int64 v4; // rdx

  v3 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal((__int64)this, a2) + 208);
  DXGFASTMUTEX::Acquire(v3);
  DXGPROCESS::ReleaseReference(this, v4);
  DXGFASTMUTEX::Release((struct _KTHREAD **)v3);
}
