/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x1C001A420
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0030E3C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031430 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001A390 (VidSchiRundownUnorderedWaiterContext.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a2 + 72);
  for ( i = *(_QWORD **)(a2 + 72); i != v3; i = (_QWORD *)*i )
    VidSchiRundownUnorderedWaiterContext(a1, (__int64)(i - 3), a3);
}
