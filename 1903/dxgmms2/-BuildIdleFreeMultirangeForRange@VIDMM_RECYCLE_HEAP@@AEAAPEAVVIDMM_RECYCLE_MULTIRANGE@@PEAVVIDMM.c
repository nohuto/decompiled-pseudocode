/*
 * XREFs of ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BAB6C
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0068CB8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0067010 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068A10 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v5; // rbx

  result = (struct VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                                *((_QWORD *)this + 1),
                                                0,
                                                *((_QWORD *)a2 + 9),
                                                *((_QWORD *)a2 + 4),
                                                *((_QWORD *)a2 + 5));
  v5 = result;
  if ( result )
  {
    *((_QWORD *)result + 8) = a2;
    *((_QWORD *)result + 9) = a2;
    *((_QWORD *)a2 + 17) = result;
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, (__int64)result);
    return v5;
  }
  return result;
}
