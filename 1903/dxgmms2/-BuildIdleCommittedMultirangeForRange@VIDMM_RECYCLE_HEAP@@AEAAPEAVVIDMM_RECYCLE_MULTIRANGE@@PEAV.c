/*
 * XREFs of ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00BAA98
 * Callers:
 *     ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0068CB8 (-LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0067010 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068A10 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0068BF4 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  PSLIST_ENTRY Multirange; // rdi
  PSLIST_ENTRY v6; // rax
  __int64 v7; // rsi

  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                 *((_QWORD *)this + 1),
                 1u,
                 *((_QWORD *)a2 + 9),
                 *((_QWORD *)a2 + 4),
                 *((_QWORD *)a2 + 5));
  if ( !Multirange )
    return 0LL;
  v6 = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
         *((_QWORD *)this + 1),
         0,
         *((_QWORD *)a2 + 9),
         *((_QWORD *)a2 + 4),
         *((_QWORD *)a2 + 5));
  v7 = (__int64)v6;
  if ( !v6 )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(*((VIDMM_RECYCLE_HEAP_MGR **)this + 1), Multirange);
    return 0LL;
  }
  Multirange[4].Next = (struct _SLIST_ENTRY *)a2;
  v6[4].Next = (struct _SLIST_ENTRY *)a2;
  *((_QWORD *)&Multirange[4].Next + 1) = a2;
  *((_QWORD *)&v6[4].Next + 1) = a2;
  *((_QWORD *)a2 + 18) = Multirange;
  *((_QWORD *)a2 + 17) = v6;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 1LL, (__int64)Multirange);
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, 2LL, v7);
  return (struct VIDMM_RECYCLE_MULTIRANGE *)Multirange;
}
