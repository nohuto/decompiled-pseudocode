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

void __fastcall RtlProtectHeap(_DWORD *a1, char a2)
{
  unsigned int HeapProtection; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax

  if ( a1[4] == -571548178 || (a1[29] & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
    if ( a1[4] == -571548178 )
      HeapProtection = RtlpHpHeapValidateProtection((__int64)a1, (a1[5] & 0x40000000) != 0 ? 64 : 4);
    else
      HeapProtection = RtlpGetHeapProtection((__int64)a1, 1);
    v5 = HeapProtection;
    if ( a2 )
    {
      RtlpMoveHeapBetweenLists(a1, 1LL, 2LL, 1LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( a1[4] == -571548178 )
      v7 = RtlpHpHeapProtect(a1, v5);
    else
      v7 = RtlpProtectHeap(a1, v5);
    if ( v7 >= 0 && !a2 )
      RtlpMoveHeapBetweenLists(a1, 2LL, 1LL, 1LL);
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
  }
}
