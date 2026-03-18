/*
 * XREFs of DxgkDestroyContextInternal @ 0x1C013BBD8
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C00067D4 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0017A50 (--_GCAdapter@@IEAAPEAXI@Z.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C0054380 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C00ECAF0 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1, __int64 a2, const GUID *a3)
{
  return DxgkDestroyContextImpl(a1, 0, a3);
}
