/*
 * XREFs of ?Release@CHolographicInteropTaskQueue@@UEAAKXZ @ 0x180026F00
 * Callers:
 *     ?Release@CWARPDrawListEntry@@WII@EAAKXZ @ 0x1800F0910 (-Release@CWARPDrawListEntry@@WII@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ @ 0x1800F14E0 (-Release@CProjectedShadowApproxBlurEffect@@WBA@EAAKXZ.c)
 *     ?Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ @ 0x1800F14F0 (-Release@CProjectedShadowApproxBlurEffect@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CHolographicInteropTaskQueue::Release(CHolographicInteropTaskQueue *this)
{
  return CMILRefCountBase::Release(this);
}
