/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18005AE0C
 * Callers:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x1800ED310 (--_Gtype_info@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator delete(void *lpMem)
{
  if ( lpMem )
    HeapFree(WPF::g_processHeap, 0, lpMem);
}
