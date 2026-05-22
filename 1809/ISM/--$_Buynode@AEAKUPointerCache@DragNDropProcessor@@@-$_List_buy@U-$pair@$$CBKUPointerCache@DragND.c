/*
 * XREFs of ??$_Buynode@AEAKUPointerCache@DragNDropProcessor@@@?$_List_buy@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@1@PEAU21@0AEAK$$QEAUPointerCache@DragNDropProcessor@@@Z @ 0x180026998
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180023BA0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800C9020 (-OnInput@DragNDropProcessorLegacy@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessor.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180026890 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>::_Buynode<unsigned long &,DragNDropProcessor::PointerCache>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_DWORD *)result + 4) = *a4;
  *(_OWORD *)(result + 3) = *(_OWORD *)a5;
  result[5] = *(_QWORD *)(a5 + 16);
  return result;
}
