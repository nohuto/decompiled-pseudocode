/*
 * XREFs of ??3@YAXPEAX@Z @ 0x140003E7C
 * Callers:
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x140003FD0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x140004090 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x140004960 (--3@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
