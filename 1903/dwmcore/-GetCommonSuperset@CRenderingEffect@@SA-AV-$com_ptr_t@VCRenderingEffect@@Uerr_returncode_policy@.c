/*
 * XREFs of ?GetCommonSuperset@CRenderingEffect@@SA?AV?$com_ptr_t@VCRenderingEffect@@Uerr_returncode_policy@wil@@@wil@@PEAV1@0@Z @ 0x18004D188
 * Callers:
 *     ?ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z @ 0x18004D008 (-ConsolidateAdjacentHomogeneousLayers@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z @ 0x18004DFD8 (-AddRenderingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C993C (-reset@-$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CRenderingEffect::GetCommonSuperset(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  (*(void (__fastcall **)(__int64, __int64 *, __int64, char *))(*(_QWORD *)a2 + 80LL))(a2, &v6, a3, &v5);
  if ( !v5 )
    wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset(&v6);
  *a1 = v6;
  return a1;
}
