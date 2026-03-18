/*
 * XREFs of DxgkCreateContextVirtualInternal @ 0x1C0133450
 * Callers:
 *     ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x1C0013200 (-UpdateRenderFence@CAdapter@@QEAAJPEAX@Z.c)
 *     ?AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z @ 0x1C005ACA0 (-AllocateCascadedSignalingResources@CAdapter@@UEAAJPEAPEAXPEAI011@Z.c)
 * Callees:
 *     ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C0122F1C (-DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualInternal(
        struct _D3DKMT_CREATECONTEXTVIRTUAL *a1,
        __int64 a2,
        const GUID *a3)
{
  return DxgkCreateContextVirtualImpl(a1, 0, a3);
}
