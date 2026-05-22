/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18002C8EC
 * Callers:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x18002C770 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x18002C9F0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 *     ??1GazeHidDevice@@UEAA@XZ @ 0x1800A656C (--1GazeHidDevice@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
