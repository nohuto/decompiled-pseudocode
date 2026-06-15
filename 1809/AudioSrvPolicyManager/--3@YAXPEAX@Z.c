/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18000182C
 * Callers:
 *     ??_GCAtlStringMgr@ATL@@UEAAPEAXI@Z @ 0x18002D9A0 (--_GCAtlStringMgr@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECWin32Heap@ATL@@UEAAPEAXI@Z @ 0x18002DA90 (--_ECWin32Heap@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECThreadPool@@UEAAPEAXI@Z @ 0x18002E2A0 (--_ECThreadPool@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800370E0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *a1)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, a1);
}
