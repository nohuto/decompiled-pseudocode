/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18002C56C
 * Callers:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18002C3F0 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x18002C670 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800A63AC (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
