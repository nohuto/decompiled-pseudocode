/*
 * XREFs of ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180004F2C
 * Callers:
 *     ??3@YAXPEAX@Z @ 0x180004F88 (--3@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DefaultHeap::Free(void *lpMem)
{
  HANDLE ProcessHeap; // rax

  if ( lpMem )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
