/*
 * XREFs of FxAllocateFromNPagedLookasideList @ 0x1C0036C2C
 * Callers:
 *     ?_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDmaEnabler@@PEAPEAUWDFDMATRANSACTION__@@@Z @ 0x1C0036A6C (-_Create@FxDmaScatterGatherTransaction@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@P.c)
 *     ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0052F94 (-AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056370 (-Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056430 (-Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 *     ?Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C0056800 (-Allocate@FxPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall FxAllocateFromNPagedLookasideList(_NPAGED_LOOKASIDE_LIST *Lookaside, unsigned __int64 a2)
{
  PSLIST_ENTRY result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                           (unsigned int)Lookaside->L.Type,
                           Lookaside->L.Size,
                           Lookaside->L.Tag);
  }
  return result;
}
