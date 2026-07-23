/*
 * XREFs of RtlProtectHeap @ 0x180048240
 * Callers:
 *     LdrProtectMrdataHeap @ 0x1800484A8 (LdrProtectMrdataHeap.c)
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065490 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180065670 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065BC0 (RtlAddFunctionTable.c)
 *     RtlpCallVectoredHandlers @ 0x180078F20 (RtlpCallVectoredHandlers.c)
 *     LdrEnsureMrdataHeapExists @ 0x18007C748 (LdrEnsureMrdataHeapExists.c)
 *     RtlSetProtectedPolicy @ 0x18007F730 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x18007FF70 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180081560 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800DFD60 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlpGetHeapProtection @ 0x18004733C (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x180047CBC (RtlpHpHeapValidateProtection.c)
 *     RtlpProtectHeap @ 0x180048320 (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180048408 (RtlpMoveHeapBetweenLists.c)
 *     RtlpHpHeapProtect @ 0x18010A8E4 (RtlpHpHeapProtect.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG HeapProtection; // eax
  ULONG v5; // edi
  int v6; // eax
  int v7; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection(
                         HeapHandle,
                         (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 2LL, 1LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v7 = RtlpHpHeapProtect(HeapHandle, v5);
    else
      v7 = RtlpProtectHeap(HeapHandle, v5);
    if ( v7 >= 0 && !MakeReadOnly )
      RtlpMoveHeapBetweenLists(HeapHandle, 2LL, 1LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
