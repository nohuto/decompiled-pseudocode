/*
 * XREFs of ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1C012FC50
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0012A60 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C0013300 (--_GCAdapter@@IEAAPEAXI@Z.c)
 *     ?FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z @ 0x1C005AF60 (-FreeCascadedSignalingResources@CAdapter@@UEAAXPEAXI0II@Z.c)
 * Callees:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F3D3C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall DxgkCddDestroySynchronizationObject(
        const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkDestroySynchronizationObjectImpl(a1, 0, a3);
}
