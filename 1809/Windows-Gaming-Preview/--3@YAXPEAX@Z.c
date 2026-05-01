/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18004339C
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003D7C0 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x18003FB10 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 *     ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x180040700 (--_ECEnumerateEntries@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180040E70 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WR.c)
 *     ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004107C (--1-$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042A84 (--3@YAXPEAX_K@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180042A90 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800434B0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
