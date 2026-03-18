/*
 * XREFs of ??$emplace_back@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAXXZ @ 0x180177B98
 * Callers:
 *     ?TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V?$com_ptr_t@UIDCompositionDirectInkWetStrokePartner@@Uerr_returncode_policy@wil@@@wil@@_NPEA_N@Z @ 0x180177F14 (-TryDrawWetAsSuperWet@CWetInkManager@@AEAAJPEAVCDrawingContext@@PEAVCGenericInk@@V-$com_ptr_t@UI.c)
 * Callees:
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CWetInkManager@@V?$allocator@USuperWetStroke@CWetInkManager@@@std@@@std@@QEAAPEAUSuperWetStroke@CWetInkManager@@QEAU23@@Z @ 0x180177934 (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CWetInkManager@@V-$allocator@USuperWetStroke.c)
 */

void *__fastcall std::vector<CWetInkManager::SuperWetStroke>::emplace_back<>(__int64 a1)
{
  __int64 v1; // rbx
  void *result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) == v1 )
    return (void *)std::vector<CWetInkManager::SuperWetStroke>::_Emplace_reallocate<>(
                     (__int64 *)a1,
                     *(_QWORD **)(a1 + 8));
  memset_0(*(void **)(a1 + 8), 0, 0x50uLL);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  result = memset_0((void *)(v1 + 16), 0, 0x38uLL);
  *(_BYTE *)(v1 + 72) = 0;
  *(_QWORD *)(a1 + 8) += 80LL;
  return result;
}
