/*
 * XREFs of RtlProtectHeap @ 0x1800606A0
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdataHeap @ 0x1800605F4 (LdrProtectMrdataHeap.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x18006F2B0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F5E0 (RtlAddFunctionTable.c)
 *     RtlSetProtectedPolicy @ 0x180083740 (RtlSetProtectedPolicy.c)
 *     RtlpAddVectoredHandler @ 0x180084210 (RtlpAddVectoredHandler.c)
 *     RtlpRemoveVectoredHandler @ 0x180085530 (RtlpRemoveVectoredHandler.c)
 *     RtlGrowFunctionTable @ 0x1800E2110 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     RtlpProtectHeap @ 0x180060780 (RtlpProtectHeap.c)
 *     RtlpMoveHeapBetweenLists @ 0x180060868 (RtlpMoveHeapBetweenLists.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     RtlpHpHeapProtect @ 0x18010C7A4 (RtlpHpHeapProtect.c)
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
      HeapProtection = RtlpHpHeapValidateProtection(HeapHandle);
    else
      HeapProtection = RtlpGetHeapProtection(HeapHandle, 1LL);
    v5 = HeapProtection;
    if ( MakeReadOnly )
    {
      RtlpMoveHeapBetweenLists(HeapHandle, 1LL, 2LL);
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
      RtlpMoveHeapBetweenLists(HeapHandle, 2LL, 1LL);
    RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  }
}
