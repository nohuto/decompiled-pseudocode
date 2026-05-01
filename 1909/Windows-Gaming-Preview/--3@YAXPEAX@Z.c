/*
 * XREFs of ??3@YAXPEAX@Z @ 0x1800438AC
 * Callers:
 *     ??_ECQueryKnownGameList@@UEAAPEAXI@Z @ 0x18003DB20 (--_ECQueryKnownGameList@@UEAAPEAXI@Z.c)
 *     ??_ECGameEntry@@UEAAPEAXI@Z @ 0x180040030 (--_ECGameEntry@@UEAAPEAXI@Z.c)
 *     ??_ECEnumerateEntries@@UEAAPEAXI@Z @ 0x180040C20 (--_ECEnumerateEntries@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180041390 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIEnumerateEntries@KnownGameList@@@WR.c)
 *     ??1?$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004159C (--1-$MakeAllocator@VCGameEntry@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042F64 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_Gtype_info@@UEAAPEAXI@Z @ 0x180042F70 (--_Gtype_info@@UEAAPEAXI@Z.c)
 *     ??_Ebad_alloc@std@@UEAAPEAXI@Z @ 0x1800439B0 (--_Ebad_alloc@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free(Block);
}
