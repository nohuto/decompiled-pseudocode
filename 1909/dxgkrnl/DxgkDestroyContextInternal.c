/*
 * XREFs of DxgkDestroyContextInternal @ 0x1C013349C
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0013200 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013AA0 (--_GCAdapter@@IEAAPEAXI@Z.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C005AFA0 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z @ 0x1C0124EB0 (-DxgkDestroyContextImpl@@YAJPEBU_D3DKMT_DESTROYCONTEXT@@E@Z.c)
 */

__int64 __fastcall DxgkDestroyContextInternal(const struct _D3DKMT_DESTROYCONTEXT *a1, __int64 a2, const GUID *a3)
{
  return DxgkDestroyContextImpl(a1, 0, a3);
}
