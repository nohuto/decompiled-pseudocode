/*
 * XREFs of RtlProtectHeap @ 0x180048240
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x1800650D0 (RtlInstallFunctionTableCallback.c)
 *     RtlDeleteFunctionTable @ 0x180065340 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800654E0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180065A00 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x180065C10 (RtlAddGrowableFunctionTable.c)
 *     sub_180078AA0 @ 0x180078AA0 (sub_180078AA0.c)
 *     sub_18007C0A8 @ 0x18007C0A8 (sub_18007C0A8.c)
 *     RtlSetProtectedPolicy @ 0x18007F090 (RtlSetProtectedPolicy.c)
 *     sub_18007F8D0 @ 0x18007F8D0 (sub_18007F8D0.c)
 *     sub_180080EC0 @ 0x180080EC0 (sub_180080EC0.c)
 *     RtlGrowFunctionTable @ 0x1800DFCA0 (RtlGrowFunctionTable.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004733C @ 0x18004733C (sub_18004733C.c)
 *     sub_180047CBC @ 0x180047CBC (sub_180047CBC.c)
 *     sub_180048320 @ 0x180048320 (sub_180048320.c)
 *     sub_180048408 @ 0x180048408 (sub_180048408.c)
 *     sub_18010A7B4 @ 0x18010A7B4 (sub_18010A7B4.c)
 */

void __cdecl RtlProtectHeap(PVOID HeapHandle, BOOLEAN MakeReadOnly)
{
  ULONG v4; // eax
  ULONG v5; // edi
  int v6; // eax
  int v7; // eax

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    RtlEnterCriticalSection(&stru_180163BE0);
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v4 = sub_180047CBC(HeapHandle, (*((_DWORD *)HeapHandle + 5) & 0x40000000) != 0 ? 64 : 4);
    else
      v4 = sub_18004733C(HeapHandle, 1);
    v5 = v4;
    if ( MakeReadOnly )
    {
      sub_180048408(HeapHandle, 1LL, 2LL, 1LL);
      v6 = 2;
      if ( v5 == 64 )
        v6 = 32;
      v5 = v6;
    }
    if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
      v7 = sub_18010A7B4(HeapHandle, v5);
    else
      v7 = sub_180048320(HeapHandle, v5);
    if ( v7 >= 0 && !MakeReadOnly )
      sub_180048408(HeapHandle, 2LL, 1LL, 1LL);
    RtlLeaveCriticalSection(&stru_180163BE0);
  }
}
