/*
 * XREFs of DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C011D26C
 * Callers:
 *     ?EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z @ 0x1C0012F90 (-EnsureRenderFenceWait@CAdapter@@AEAAJAEA_K@Z.c)
 *     ?AddWaitToContext@CAdapter@@UEAAJII_K@Z @ 0x1C0054030 (-AddWaitToContext@CAdapter@@UEAAJII_K@Z.c)
 * Callees:
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C0117720 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 */

__int64 __fastcall DxgkKernelModeWaitForSynchronizationObjectFromGpu(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        __int64 a2,
        const GUID *a3)
{
  LOBYTE(a3) = 1;
  return DxgkWaitForSynchronizationObjectFromGpuInternal(a1, 0, a3, 0LL, 1);
}
