/*
 * XREFs of DxgkCreateContextVirtualInternal @ 0x1C012FBE0
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0012A60 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C005AC60 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0120394 (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualInternal(
        struct _D3DKMT_CREATECONTEXTVIRTUAL *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkCreateContextVirtualImpl(a1, 0, a3);
}
