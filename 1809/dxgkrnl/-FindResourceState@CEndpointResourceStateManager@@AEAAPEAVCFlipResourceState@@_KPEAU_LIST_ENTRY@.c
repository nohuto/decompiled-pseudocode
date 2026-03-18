/*
 * XREFs of ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C005B4DC
 * Callers:
 *     ?ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z @ 0x1C0057544 (-ConsumerAdjustUsageReference@FlipManagerObject@@QEAAJ_K_N@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0057910 (-RemoveContent@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C005798C (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 *     ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C00597D8 (-AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 *     ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C00598A0 (-AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C0059E5C (-ConsumerQueryBufferInfo@CFlipManager@@QEAAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C005AA78 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C005AC1C (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C005AEE8 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

struct CFlipResourceState *__fastcall CEndpointResourceStateManager::FindResourceState(
        CEndpointResourceStateManager *this,
        __int64 a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *i; // r9

  for ( i = a3->Flink; ; i = i->Flink )
  {
    if ( i == a3 )
      return 0LL;
    if ( (*(_BYTE *)(((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL)) + 0x20) & 2) == 0
      && *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL)) + 0x18) + 40LL) == a2 )
    {
      break;
    }
  }
  return (struct CFlipResourceState *)((unsigned __int64)&i[-1].Blink & -(__int64)(i != 0LL));
}
