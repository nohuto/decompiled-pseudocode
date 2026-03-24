/*
 * XREFs of RtlRemoveEntryHashTable @ 0x140085E50
 * Callers:
 *     SepCleanupMarkedForDeletionEntries @ 0x140085C40 (SepCleanupMarkedForDeletionEntries.c)
 *     SepDereferenceCachedHandlesEntry @ 0x14061F644 (SepDereferenceCachedHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1406C73E4 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408E24DC (SepDeReferenceSharedSidEntries.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408E2A30 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepRmDestroyCapTable @ 0x1408E370C (SepRmDestroyCapTable.c)
 * Callees:
 *     RtlpPopulateContext @ 0x140085FE8 (RtlpPopulateContext.c)
 */

/*
 * Hex-Rays decompilation failed for RtlRemoveEntryHashTable @ 0x140085E50
 * Reason: Hex-Rays returned no pseudocode for 0x140085E50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140085E50: sub     rsp, 28h
 * 0000000140085E54: or      r11d, 0FFFFFFFFh
 * 0000000140085E58: mov     r10, r8
 * 0000000140085E5B: mov     r8, [rdx+10h]
 * 0000000140085E5F: add     [rcx+14h], r11d
 * 0000000140085E63: mov     r9, [rdx]
 * 0000000140085E66: mov     rax, [rdx+8]
 * 0000000140085E6A: cmp     r9, rax
 * 0000000140085E6D: jnz     short loc_140085E7A
 * 0000000140085E6F: add     [rcx+18h], r11d
 * 0000000140085E73: mov     rax, [rdx+8]
 * 0000000140085E77: mov     r9, [rdx]
 * 0000000140085E7A: cmp     [r9+8], rdx
 * 0000000140085E7E: jnz     short loc_140085E9C
 * 0000000140085E80: cmp     [rax], rdx
 * 0000000140085E83: jnz     short loc_140085E9C
 * 0000000140085E85: mov     [rax], r9
 * 0000000140085E88: mov     [r9+8], rax
 * 0000000140085E8C: test    r10, r10
 * 0000000140085E8F: jnz     loc_140215BE6
 * 0000000140085E95: mov     al, 1
 * 0000000140085E97: add     rsp, 28h
 * 0000000140085E9B: retn
 * 0000000140085E9C: mov     ecx, 3
 * 0000000140085EA1: int     29h; Win8: RtlFailFast(ecx)
 * 0000000140215BE6: cmp     qword ptr [r10], 0
 * 0000000140215BEA: jnz     loc_140085E95
 * 0000000140215BF0: mov     rdx, r10
 * 0000000140215BF3: call    RtlpPopulateContext
 * 0000000140215BF8: nop
 * 0000000140215BF9: jmp     loc_140085E95
 */
